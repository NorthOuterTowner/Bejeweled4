#include "gametimer.h"

// GameTimer类的构造函数实现
// 函数接受一个QObject类型的指针parent作为父对象，默认值为nullptr，用于在对象树结构中指定父对象
GameTimer::GameTimer(QObject *parent) : QObject(parent)
{
    // 创建一个新的QTimer对象，并将其所属父对象设置为当前的GameTimer对象（this指针指向当前对象）
    // 这样当GameTimer对象被销毁时，它所包含的QTimer对象也会被自动销毁
    timer = new QTimer(this);

    // 将QTimer对象的timeout信号连接到GameTimer类的updateTime槽函数上
    // 意味着每当QTimer的计时达到设定时间间隔并触发timeout信号时，就会自动调用updateTime函数
    connect(timer, &QTimer::timeout, this, &GameTimer::updateTime);
}

// 开始计时的函数，参数seconds表示倒计时的总秒数
void GameTimer::start(int seconds)
{
    // 将剩余秒数变量remainingSeconds设置为传入的倒计时总秒数，记录下开始计时时的总时长
    remainingSeconds = seconds;

    // 启动QTimer计时器，设置时间间隔为1000毫秒（即1秒），这样每过1秒就会触发一次timeout信号
    timer->start(1000);
}

// 停止计时的函数
void GameTimer::stop()
{
    // 调用QTimer对象的stop方法，停止计时器计时，使其不再触发timeout信号
    timer->stop();
}

// 用于更新剩余时间的私有槽函数，会在QTimer的timeout信号触发时被调用
void GameTimer::updateTime()
{
    // 判断剩余秒数是否大于0，如果大于0，说明计时还未结束
    if (remainingSeconds > 0) {
        // 将剩余秒数减1，模拟每过一秒时间减少的情况
        remainingSeconds--;
    } else {
        // 如果剩余秒数等于0，说明计时已经结束

        // 停止QTimer计时器，防止它继续触发timeout信号
        timer->stop();

        // 发射自定义的timeExpired信号，向外告知计时已经结束，以便其他关联的对象可以接收到这个信号并进行相应的处理，比如结束游戏等操作
        emit timeExpired();
    }
}
