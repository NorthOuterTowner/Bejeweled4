#include "gametimer.h"
#include "ui_game.h"

GameTimer::GameTimer(QObject *parent) : QObject(parent)
{
    timer = new QTimer(this); //创建定时器
    connect(timer, SIGNAL(timeout()), this, SLOT(updateTime()));  //关联槽函数
    timer->start(1000);  //1000毫秒
}

// 实现用于初始化倒计时的函数
void GameTimer::startCountdown(int seconds)
{
    remainingSeconds = seconds;
    // 也可以在这里添加一些额外的初始化相关逻辑（如果有的话）
}

void GameTimer::stop()
{
    timer->stop();
}

// 实现获取剩余秒数的函数
int GameTimer::getRemainingSeconds()
{
    return remainingSeconds;
}
void GameTimer::updateTime()
{
    if (remainingSeconds > 0) {
        remainingSeconds--;
        // 这里不再直接更新界面，改为发出信号通知外部（比如Game类）来更新界面（需要添加对应的信号定义和发射逻辑，这里暂未详细写）
        emit timeUpdated(remainingSeconds);
    } else {
        timer->stop();
        emit timeExpired();
    }
}
