#ifndef GAME_H
#define GAME_H

#include "globalvalue.h"
#include "stonelabel.h"
#include <QWidget>
#include <QMouseEvent>
#include <QLabel>
#include <iostream>
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
signals:
    void eliminateAgainSignal();
    void returnMainwindow();
private slots:
    // 动画完成时调用此槽函数
    void onDropAnimationFinished() {
        // 每完成一个动画，减小计数器
        animationsLeft--;

        // 所有动画完成后，执行 creatstones
        if (animationsLeft == 0) {
            qDebug()<<"OK";
            creatstones();
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
            }
        }
    }
    void on_pushButton_clicked();

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
    int  animationsLeft;  // 重置动画计数器
    bool change=false;
    bool eliminateAgain=true;
    std::vector<int> swapReturn;
    Ui::Game *ui;
};

#endif // GAME_H
