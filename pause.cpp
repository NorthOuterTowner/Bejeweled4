#include "pause.h"
#include "ui_pause.h"

Pause::Pause(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Pause)
{
    ui->setupUi(this);
    // 样式相关设置（与前面类似，可根据实际需求调整）
    ui->label->setStyleSheet("QLabel { color: white; font-size: 20px; }");
    // 连接恢复游戏按钮的点击信号到对应的槽函数
    connect(ui->resumeButton, &QPushButton::clicked, this, &Pause::on_resumeButton_clicked);
    // 连接返回主菜单按钮的点击信号到对应的槽函数
    connect(ui->returnButton, &QPushButton::clicked, this, &Pause::on_returnButton_clicked);
}

Pause::~Pause()
{
    delete ui;
}

void Pause::on_resumeButton_clicked()
{
    close();
    emit resumeGame();
}

void Pause::on_returnButton_clicked()
{
    close();
    emit returnToMainMenu();  // 点击返回主菜单按钮后，发射信号通知游戏主界面进行相应操作
}
