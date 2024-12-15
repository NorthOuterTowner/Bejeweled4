#ifndef GAME_H
#define GAME_H

#include "globalvalue.h"
#include "stonelabel.h"
#include "gametimer.h"
#include "pause.h"
#include <QWidget>
#include <QMouseEvent>
#include <QLabel>
#include <iostream>
#include <QProgressDialog>
#include <QProgressBar>
QT_BEGIN_NAMESPACE
namespace Ui {
class Game;
}
QT_END_NAMESPACE
class Game : public QWidget
{
    Q_OBJECT

public:
    ~Game();
    static Game* instance(QWidget* parent = nullptr);
    void init();
    void update();
    void handleStoneSwap(int row, int col, StoneLabel* curLabel);
    static void delInstance(){
        gameInstance=nullptr;
    }
    bool isPaused=false;
    static int jewelNum;
    QWidget* parent;
    /*void resetGameState();
    void on_returnFromPauseToMainMenu();*/
signals:
    void eliminateAgainSignal();
    void returnMainwindow();
    void initEndSignal();
private slots:
    void initEnd(){
        this->progressDialog->setValue(100);
        this->progressDialog->hide();
    }
    void onDropAnimationFinished() {
        // 每完成一个动画，减小计数器
        animationsLeft--;

        // 所有动画完成后，执行 creatstones
        if (animationsLeft == 0) {
            qDebug()<<"OK";
            creatstones();
            this->initing=false;

        }
    }
    void onEliminateAgain(){
        {
            if(checkFormatches()){
                eliminateMatches();
            }else{
                int row1=swapReturn[0],col1=swapReturn[1],row2=swapReturn[2],col2=swapReturn[3];
                std::cout<<"row1:"<<row1<<",row2:"<<row2<<",col1:"<<col1<<",col2:"<<col2<<std::endl;
                std::swap(stones[row1][col1], stones[row2][col2]);
                stones[row1][col1]->setrow(row1);
                stones[row1][col1]->setcol(col1);
                stones[row2][col2]->setrow(row2);
                stones[row2][col2]->setcol(col2);
                emit initEndSignal();
            }
        }
    }
    void on_pushButton_3_clicked();
    void resume();//处理继续游戏信号
    void on_returnFromPauseToMainMenu();  //处理从暂停界面返回主菜单的信号
    void on_pushButton_4_clicked();
    void on_pushButton_5_clicked();

private:
    explicit Game(QWidget *parent = nullptr);
    static Game* gameInstance;
    void mousePressEvent(QMouseEvent *event) override;
    bool checkFormatches();//判断哪些棋子将要被消去
    void eliminateMatches() ;
    void dropStones();//棋子下落，创建新子
    void dropLabel(StoneLabel* stoneLabel, int startX,int startY,int targetX, int targetY, int duration) ;//棋子下落动画
    void resetMatchedFlags();//重置所有棋子为不可消除
    void generateNewStone(int row, int col);//创建一个新子
    void creatstones();//创建所有需要的子
    void shuffleStones();//重排布
    GameTimer *gameTimer;//计时器
    QProgressBar *progressBar;  //计时进度条
    void onTimeExpired();//倒计时结束时的处理
    void updateTimerDisplay();//更新界面上显示倒计时的QLabel的文本内容
    int  animationsLeft;  // 重置动画计数器
    Pause *pause;  // 暂停界面指针
    void resetGameState();//用于重置游戏状态
    bool change=false;
    bool eliminateAgain=true;
    std::vector<int> swapReturn;
    QProgressDialog *progressDialog;
    bool initing;
    Ui::Game *ui;
    int score;
    int winScore;
};

#endif // GAME_H
