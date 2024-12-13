#ifndef GAMETIMER_H
#define GAMETIMER_H

#include <QObject>
#include <QTimer>

class GameTimer : public QObject
{
    Q_OBJECT
public:
    // 构造函数，初始化GameTimer对象
    // 参数parent是父对象指针，默认为nullptr
    explicit GameTimer(QObject *parent = nullptr);

    // 开始计时函数
    // 参数seconds是倒计时的总秒数
    void start(int seconds);

    // 停止计时函数
    void stop();

signals:
    // 自定义信号，当计时结束时发出
    void timeExpired();

private slots:
    // 私有槽函数，用于更新剩余时间
    void updateTime();

private:
    // QTimer对象指针，用于实现计时功能
    QTimer *timer;
    // 剩余的秒数
    int remainingSeconds;
};

#endif // GAMETIMER_H
