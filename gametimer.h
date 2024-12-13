#ifndef GAMETIMER_H
#define GAMETIMER_H

#include <QObject>
#include <QTimer>

class GameTimer : public QObject
{
    Q_OBJECT
public:
    explicit GameTimer(QObject *parent = nullptr);
    void start(int seconds);
    void stop();

signals:
    void timeExpired();

private slots:
    void updateTime();

private:
    QTimer *timer;
    int remainingSeconds;
};

#endif // GAMETIMER_H
