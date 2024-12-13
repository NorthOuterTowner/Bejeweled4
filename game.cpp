#include "game.h"
#include "qevent.h"
#include "ui_game.h"
#include "stonelabel.h"
#include "globalvalue.h"
#include <QLabel>
#include <random>
#include <vector>
#include <QGridLayout>
#include <QPropertyAnimation>
#include <QVector>
#include <QProgressDialog>
/*Space between Window and Labels*/
#define upSpacer 80
#define leftSpacer 100

/*The Widget of game district*/
QGridLayout* mainWidget;
StoneLabel* waitLabel;
Game* Game::gameInstance = nullptr;

/**
 * @brief generate random digit from 1 to 10
 * @return random digit
 */
int genRandom(){
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dis(1, difficulty);
    return dis(gen);
}
/**
 * @brief Update the window by vector<vector<StoneLabel*>> stones
 */
void Game::update(){
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
                StoneLabel* pic = stones.at(i).at(j);
                pic->resize(48,48);
                std::string pixStr=":/"+StoneLabel::stoneMode+std::to_string(pic->getIndex())+".png";
                pic->setPixmap(QPixmap(QString::fromStdString(pixStr)).scaled(48,48));
                pic->setAlignment(Qt::AlignCenter);
                mainWidget->addWidget(pic, i, j);
        }
    }
}

Game::Game(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Game)
{
    ui->setupUi(this);
    connect(this, &Game::eliminateAgainSignal, this, &Game::onEliminateAgain);
    connect(this, &Game::initEndSignal, this, &Game::initEnd);
    init();
    initing=true;
    progressDialog = new QProgressDialog("正在初始化中，请稍后...", "取消", 0, 0, this);
    progressDialog->setWindowModality(Qt::WindowModal);
    progressDialog->setValue(0);
    progressDialog->show();
    this->swapReturn=std::vector<int>(4,0);
    if (checkFormatches()) {
        eliminateMatches();
    }else{
        progressDialog->setValue(100);
        progressDialog->hide();
    }
}

Game::~Game()
{
    delete ui;
}
Game* Game::instance(QWidget *parent){
    if(gameInstance==nullptr){
        gameInstance=new Game(parent);
    }
    return gameInstance;
}
/**
 * @brief init labels on the ui
 */
void Game::init(){
    /**
     * Test code*/
    QWidget* centralWidget = new QWidget(this);
    mainWidget = new QGridLayout();
    mainWidget->setSpacing(0);
    mainWidget->setContentsMargins(0, 0, 0, 0);
    centralWidget->setLayout(mainWidget);
    centralWidget->setGeometry(leftSpacer,upSpacer,384,384);
    centralWidget->setParent(this);
    for (int row = 0; row < 8; row++) {
        for (int col = 0; col < 8; col++) {
            StoneLabel* imgLabel = new StoneLabel(this);
            stones[row][col]=imgLabel;
            imgLabel->setrow(row);
            imgLabel->setcol(col);
            imgLabel->resize(48,48);
            imgLabel->setIndex(genRandom());
            std::string pixStr=":/"+StoneLabel::stoneMode+std::to_string(imgLabel->getIndex())+".png";
            imgLabel->setPixmap(QPixmap(QString::fromStdString(pixStr)).scaled(48,48));
            mainWidget->addWidget(imgLabel, row, col); // 使用addWidget()来将QLabel添加到布局中
        }
    }
    change=false;
    waitLabel=nullptr;

}
/**
 * @brief Game::mousePressEvent
 * @param event
 */
void Game::mousePressEvent(QMouseEvent *event) {
    QPoint clickPoint = event->pos();
    int x = clickPoint.x(), y = clickPoint.y();
    if (x <= leftSpacer || y <= upSpacer || x >= leftSpacer + 8 * 48 || y >= upSpacer + 8 * 48)
        return;

    int col = (x - leftSpacer) / 48, row = (y - upSpacer) / 48;
    StoneLabel* curLabel = stones[row][col];

    if (!change) {
        waitLabel = curLabel;
        waitLabel->setStyle(1);
        change = true;
    } else {
        int row1 = waitLabel->getrow(), col1 = waitLabel->getcol();
        int row2 = curLabel->getrow(), col2 = curLabel->getcol();

        if (std::abs(row1 + col1 - row2 - col2) != 1)
            return;

        // 创建动画
        QPropertyAnimation *animation1 = new QPropertyAnimation(stones[row1][col1], "pos");
        QPropertyAnimation *animation2 = new QPropertyAnimation(stones[row2][col2], "pos");

        // 设置动画时长和目标位置
        animation1->setDuration(300); // 动画持续时间300ms
        animation2->setDuration(300);

        // 计算目标位置
        QPoint targetPos1 = stones[row2][col2]->pos();
        QPoint targetPos2 = stones[row1][col1]->pos();

        animation1->setEndValue(targetPos1);
        animation2->setEndValue(targetPos2);

        // 启动动画
        animation1->start(QAbstractAnimation::DeleteWhenStopped);
        animation2->start(QAbstractAnimation::DeleteWhenStopped);

        // 动画结束后交换
        connect(animation1, &QPropertyAnimation::finished, [=]() {
            // 交换数据
            waitLabel->setStyle();
            std::swap(stones[row1][col1], stones[row2][col2]);
            stones[row1][col1]->setrow(row1);
            stones[row1][col1]->setcol(col1);
            stones[row2][col2]->setrow(row2);
            stones[row2][col2]->setcol(col2);

            update();

            if (checkFormatches()) {
                eliminateMatches();
            } else {
                //Animation Shaked
                QPoint originalPos = stones[row2][col2]->pos();
                QPropertyAnimation *animationShake = new QPropertyAnimation(stones[row2][col2], "pos");
                animationShake->setDuration(300);
                QList<QPair<double, QVariant>> keyframes;

                keyframes.append(qMakePair(0.0, QVariant::fromValue(originalPos + QPoint(8, 0))));  // 向右移动
                keyframes.append(qMakePair(0.1, QVariant::fromValue(originalPos - QPoint(8, 0))));  // 向左移动
                keyframes.append(qMakePair(0.2, QVariant::fromValue(originalPos + QPoint(8, 0))));  // 向右移动
                keyframes.append(qMakePair(0.3, QVariant::fromValue(originalPos - QPoint(8, 0))));  // 向左移动
                keyframes.append(qMakePair(0.4, QVariant::fromValue(originalPos)));                  // 恢复原位置

                // 设置关键帧
                animationShake->setKeyValues(keyframes);
                animationShake->start(QAbstractAnimation::DeleteWhenStopped);
                //Animation Shaked2
                QPoint originalPos2 = stones[row1][col1]->pos();
                QPropertyAnimation *animationShake2 = new QPropertyAnimation(stones[row1][col1], "pos");
                animationShake2->setDuration(300);
                QList<QPair<double, QVariant>> keyframes2;

                keyframes2.append(qMakePair(0.0, QVariant::fromValue(originalPos2 + QPoint(8, 0))));  // 向右移动
                keyframes2.append(qMakePair(0.1, QVariant::fromValue(originalPos2 - QPoint(8, 0))));  // 向左移动
                keyframes2.append(qMakePair(0.2, QVariant::fromValue(originalPos2 + QPoint(8, 0))));  // 向右移动
                keyframes2.append(qMakePair(0.3, QVariant::fromValue(originalPos2 - QPoint(8, 0))));  // 向左移动
                keyframes2.append(qMakePair(0.4, QVariant::fromValue(originalPos2)));                  // 恢复原位置

                // 设置关键帧
                animationShake2->setKeyValues(keyframes2);
                animationShake2->start(QAbstractAnimation::DeleteWhenStopped);

                connect(animationShake, &QPropertyAnimation::finished, [=](){

                QPropertyAnimation *reverseAnim1 = new QPropertyAnimation(stones[row1][col1], "pos");
                QPropertyAnimation *reverseAnim2 = new QPropertyAnimation(stones[row2][col2], "pos");

                reverseAnim1->setDuration(200);
                reverseAnim2->setDuration(200);

                // 计算回退的目标位置
                reverseAnim1->setEndValue(targetPos1); // 原位置
                reverseAnim2->setEndValue(targetPos2); // 原位置

                reverseAnim1->start(QAbstractAnimation::DeleteWhenStopped);
                reverseAnim2->start(QAbstractAnimation::DeleteWhenStopped);

                // 动画完成后恢复交换
                connect(reverseAnim1, &QPropertyAnimation::finished, [=]() {
                    // 换回去
                    std::swap(stones[row1][col1], stones[row2][col2]);
                    stones[row1][col1]->setrow(row1);
                    stones[row1][col1]->setcol(col1);
                    stones[row2][col2]->setrow(row2);
                    stones[row2][col2]->setcol(col2);

                    update();
                });
                });
            }

            change = false;
        });
    }
}

//判断
bool Game::checkFormatches(){
     bool hasMatch = false;
    for (int row = 0; row < 8; ++row) {
        for (int col = 0; col < 6; ++col) {  // 检查每行的前6列
            if (stones[row][col]->getIndex() == stones[row][col + 1]->getIndex() &&
                stones[row][col]->getIndex() == stones[row][col + 2]->getIndex()) {
                hasMatch = true;

                // 标记这些棋子为待消除
                stones[row][col]->setMatched(true);
                stones[row][col + 1]->setMatched(true);
                stones[row][col + 2]->setMatched(true);
            }
        }
    }

    // 纵向检查
    for (int col = 0; col < 8; ++col) {
        for (int row = 0; row < 6; ++row) {  // 检查每列的前6行
            if (stones[row][col]->getIndex() == stones[row + 1][col]->getIndex() &&
                stones[row][col]->getIndex() == stones[row + 2][col]->getIndex()) {
                hasMatch = true;

                // 标记这些棋子为待消除
                stones[row][col]->setMatched(true);
                stones[row + 1][col]->setMatched(true);
                stones[row + 2][col]->setMatched(true);
            }
        }
    }

    return hasMatch;
}
//消除
void Game::eliminateMatches() {
    for (int row = 0; row < 8; ++row) {
        for (int col = 0; col < 8; ++col) {
            if (stones[row][col] != nullptr && stones[row][col]->isMatched()) {
                //删除棋子
                delete stones[row][col];
                stones[row][col] = nullptr;  // 清空位置
            }
        }
    }


    dropStones();
    resetMatchedFlags();

}
//生成新子
//生成一个新子
void Game::generateNewStone(int row, int col){
    // 初始化
    StoneLabel* imgLabel = new StoneLabel(this);
    imgLabel->setrow(row);
    imgLabel->setcol(col);
    imgLabel->resize(48, 48);
    imgLabel->setIndex(genRandom());
    std::string pixStr = ":/" + StoneLabel::stoneMode + std::to_string(imgLabel->getIndex()) + ".png";
    imgLabel->setPixmap(QPixmap(QString::fromStdString(pixStr)).scaled(48, 48));

    // 显示添加
    mainWidget->addWidget(imgLabel, row, col);

    // 逻辑添加
    stones[row][col] = imgLabel;

}
//遍历空白位置，生成全部新子
void Game::creatstones(){
    int sum=0;
    int tmpRow=-1;
    for(int row=7;row>=0;--row){// 行从下到上
        for(int col=7;col>=0;--col){//列从下到上

            if(stones[row][col]==nullptr && tmpRow!=row){
                sum++;
                tmpRow=row;
            }
        }
    }
    for(int row=7;row>=0;--row){// 行从下到上
        for(int col=7;col>=0;--col){//列从下到上
            if(stones[row][col]==nullptr){
                generateNewStone(row,col);
                int time=sum*200;
                dropLabel(stones[row][col],col*48,(row-sum)*48,col*48,row*48,time);
            }
        }
    }
    update();
    emit eliminateAgainSignal();
}

//棋子下落动画
//duration should set to x/v
void Game::dropLabel(StoneLabel* stoneLabel, int startX,int startY,int targetX, int targetY, int duration) {
    this->initing=true;
    duration=1000*(targetY-startY)/192;
    QPropertyAnimation* animation = new QPropertyAnimation(stoneLabel, "pos");
    animation->setStartValue(QPoint(startX,startY));// 起始位置NO
    animation->setEndValue(QPoint(targetX, targetY)); // 目标位置
    animation->setDuration(duration); // 持续时间
    // 连接动画完成的信号
    connect(animation, &QPropertyAnimation::finished, this, &Game::onDropAnimationFinished);
    // 启动动画
    animation->start(QAbstractAnimation::DeleteWhenStopped);  // 动画完成后自动删除
}
//下落并生成新子
void Game::dropStones() {
    animationsLeft = 0;  // 重置动画计数器
    bool drop=false;

    // 让上面的棋子填补下方空位
    for (int col = 0; col < 8; ++col) {
        // 从底部开始检查每一列
        for (int row = 7; row >= 0; --row) {
            if (stones[row][col] == nullptr) {  // 如果当前这个位置为空
                // 查找上面第一个非空的位置
                int emptyRow = row;//空位置
                for (int checkRow = row - 1; checkRow >= 0; --checkRow) {
                    if (stones[checkRow][col] != nullptr) {
                        // 这个位置有棋子，交换
                        // 计算目标位置的坐标
                        int targetX = col * 48;
                        int targetY = emptyRow * 48;
                        stones[checkRow][col]->targetX=targetX;
                        stones[checkRow][col]->targetY=targetY;
                        dropLabel(stones[checkRow][col],col*48,checkRow*48,targetX,targetY,1000);//下落动画
                        drop=true;

                        stones[emptyRow][col] = stones[checkRow][col];//逻辑交换
                        stones[emptyRow][col]->setrow(emptyRow);
                        stones[emptyRow][col]->setcol(col);
                        stones[checkRow][col] = nullptr;  // 清空原位置

                        // 更新动画计数器
                        animationsLeft++;
                        break;
                    }
                }
            }
        }
    }
   // 若无子下落，遍历前三行，找到空位生成新子
    if(!drop){
        creatstones();
        // for(int row=0;row<=6;++row){
        //     for(int col=0;col<=7;++col){
        //         if(stones[row][col]==nullptr){
        //             generateNewStone(row,col);
        //         }
        //     }
        // }
         //emit eliminateAgainSignal();
    }

    resetMatchedFlags();
}

void Game::resetMatchedFlags(){
    for (int row = 0; row < 8; ++row) {
        for (int col = 0; col < 8; ++col) {
            if (stones[row][col] != nullptr) {
                stones[row][col]->setMatched(false);
            }
        }
    }
}

void Game::on_pushButton_clicked()
{
    emit returnMainwindow();
}

