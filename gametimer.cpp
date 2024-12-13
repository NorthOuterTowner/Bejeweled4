#include "gametimer.h"

GameTimer::GameTimer(QObject *parent) : QObject(parent)
{
    timer = new QTimer(this);
    connect(timer, &QTimer::timeout, this, &GameTimer::updateTime);
}

void GameTimer::start(int seconds)
{
    remainingSeconds = seconds;
    timer->start(1000);
}

void GameTimer::stop()
{
    timer->stop();
}

void GameTimer::updateTime()
{
    if (remainingSeconds > 0) {
        remainingSeconds--;
    } else {
        timer->stop();
        emit timeExpired();
    }
}
//lplp
