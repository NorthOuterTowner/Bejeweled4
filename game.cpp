#include "game.h"
#include "qevent.h"
#include "ui_game.h"
#include "stonelabel.h"
#include "globalvalue.h"
#include <QLabel>
#include <random>
#include <vector>
#include <QGridLayout>

/*Space between Window and Labels*/
#define upSpacer 80
#define leftSpacer 100

/*The Widget of game district*/
QGridLayout* mainWidget;
Game* Game::gameInstance = nullptr;
/**
 * @brief generate random digit from 1 to 10
 * @return random digit
 */
int genRandom(int difficulty=4){
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
            std::string pixStr=":/"+pic->getMode()+std::to_string(pic->getIndex())+".png";
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
    mainWidget->setSpacing(0);  // 控制网格单元之间的间距
    mainWidget->setContentsMargins(0, 0, 0, 0);  // 控制布局的外边距
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
            imgLabel->setIndex(genRandom(4));
            std::string pixStr=":/"+imgLabel->getMode()+std::to_string(imgLabel->getIndex())+".png";
            imgLabel->setPixmap(QPixmap(QString::fromStdString(pixStr)).scaled(48,48));
            mainWidget->addWidget(imgLabel, row, col); // 使用addWidget()来将QLabel添加到布局中
        }
    }
    waitforchage=false;
    firstLabel=nullptr;
    secondLabel=nullptr;
}
/**
 * @brief Game::mousePressEvent
 * @param event
 */
void Game::mousePressEvent(QMouseEvent *event){
    QWidget* clickedWidget=this->childAt(event->pos());
    StoneLabel* label=qobject_cast<StoneLabel*>(clickedWidget);
    if(clickedWidget&&clickedWidget->inherits("QLabel")){
        if(!waitforchage&&firstLabel==nullptr){
            firstLabel = qobject_cast<StoneLabel*>(clickedWidget);
            firstLabel->setStyleSheet("background-color: lightblue;");
            waitforchage = true;

        }else if(waitforchage&&secondLabel==nullptr){
            //满足消除条件可交换？
            /**
             * A method to decide whether it is adjacent
             */

            secondLabel = qobject_cast<StoneLabel*>(clickedWidget);
            secondLabel->setStyleSheet("background-color: lightblue;");

            // 交换位置
            QPoint temp = firstLabel->pos();
            firstLabel->move(secondLabel->pos());
            secondLabel->move(temp);

            //高亮消除
            firstLabel->setStyleSheet("");
            secondLabel->setStyleSheet("");

            int row1=firstLabel->getrow();
            int col1=firstLabel->getcol();
            int row2=secondLabel->getrow();
            int col2=secondLabel->getcol();
            StoneLabel* tmp=stones[row1][col1];
            stones[row1][col1]=stones[row2][col2];
            stones[row2][col2]=tmp;

            update();

            firstLabel = nullptr;
            secondLabel = nullptr;
            waitforchage = false;
        }
    }
}

/**
 * Whether it could eliminate?
 * */
