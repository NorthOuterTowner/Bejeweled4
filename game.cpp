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
    init();
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
void Game::mousePressEvent(QMouseEvent *event){
    QPoint clickPoint=event->pos();
    int x=clickPoint.x(),y=clickPoint.y();
    if(x<=leftSpacer||y<=upSpacer||x>=leftSpacer+8*48||y>=upSpacer+8*48)
        return;
    int col=(x-leftSpacer)/48,row=(y-upSpacer)/48;
    StoneLabel* curLabel=stones[row][col];
    if(!change){
        waitLabel=curLabel;
        waitLabel->setStyle(1);
        change=true;
    }else{
        int row1 =waitLabel->getrow(),col1=waitLabel->getcol();
        int row2=curLabel->getrow(),col2=curLabel->getcol();
        if(std::abs(row1+col1-row2-col2)!=1)
            return;
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
            // 如果不能消除，恢复交换
            std::swap(stones[row1][col1], stones[row2][col2]);
            stones[row1][col1]->setrow(row1);
            stones[row1][col1]->setcol(col1);
            stones[row2][col2]->setrow(row2);
            stones[row2][col2]->setcol(col2);
        }

        change = false;

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

    for(int row=7;row>=0;--row){// 行从下到上
        for(int col=7;col>=0;--col){//列从下到上
            if(stones[row][col]==nullptr){
                generateNewStone(row,col);
            }
        }
    }
    update();
    emit eliminateAgainSignal();
}

//棋子下落动画
void Game::dropLabel(StoneLabel* stoneLabel, int targetX, int targetY, int duration) {
    QPropertyAnimation* animation = new QPropertyAnimation(stoneLabel, "pos");
    animation->setStartValue(stoneLabel->pos());// 起始位置
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
                        dropLabel(stones[checkRow][col],targetX,targetY,1000);//下落动画
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
        for(int row=0;row<=6;++row){
            for(int col=0;col<=7;++col){
                if(stones[row][col]==nullptr){
                    generateNewStone(row,col);
                }
            }
        }
    }

    resetMatchedFlags();
}

//重置是否可消除标志
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

