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
StoneLabel* waitLabel;
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
            imgLabel->setIndex(genRandom(4));
            std::string pixStr=":/"+imgLabel->getMode()+std::to_string(imgLabel->getIndex())+".png";
            imgLabel->setPixmap(QPixmap(QString::fromStdString(pixStr)).scaled(48,48));
            mainWidget->addWidget(imgLabel, row, col); // 使用addWidget()来将QLabel添加到布局中
        }
    }
    change=false;
    waitLabel=nullptr;
    //secondLabel=nullptr;
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
        change = false;
        update();
    }
}

