#ifndef END_H
#define END_H

#include <QWidget>
#include "game.h"
#include "ui_end.h"

class End : public QWidget
{
    Q_OBJECT
public:
    explicit End(Game* game, QWidget* parent = nullptr);
    ~End();
    void showEndUI();// 外部可调用的函数，用于更新并显示结束界面，设置得分等信息

private slots:
    void onReturnButtonClicked();// 处理返回主菜单按钮点击的槽函数，发送返回主菜单信号给游戏类，并关闭当前结束界面

private:
    Ui::End ui;
    Game* gameInfo;
};

#endif // END_H
