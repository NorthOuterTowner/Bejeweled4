#ifndef PAUSE_H
#define PAUSE_H

#include <QWidget>

namespace Ui {
class Pause;
}

class Pause : public QWidget
{
    Q_OBJECT
public:
    explicit Pause(QWidget *parent = nullptr);
    ~Pause();
signals:
    void resumeGame();  // 新增的信号，用于通知恢复游戏
    void returnToMainMenu();  // 新增的信号，用于通知返回主菜单
private slots:
    void on_resumeButton_clicked();  // 新增的槽函数，对应恢复游戏按钮点击事件
    void on_returnButton_clicked();  // 新增的槽函数，对应返回主菜单按钮点击事件
private:
    Ui::Pause *ui;
};

#endif // PAUSE_H
