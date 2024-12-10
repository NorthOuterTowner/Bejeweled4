#ifndef GAME_H
#define GAME_H

#include "globalvalue.h"
#include "stonelabel.h"
#include <QWidget>
#include <QMouseEvent>
#include <QLabel>
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
    Ui::Game *ui;
};

#endif // GAME_H
