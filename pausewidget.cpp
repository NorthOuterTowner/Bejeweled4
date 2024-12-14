#include "pausewidget.h"

PauseWidget::PauseWidget(QWidget *parent) : QWidget(parent)
{
    // 创建布局
    layout = new QVBoxLayout(this);

    // 创建提示标签
    label = new QLabel("游戏已暂停", this);
    layout->addWidget(label);

    // 创建恢复游戏按钮
    resumeButton = new QPushButton("恢复游戏", this);
    connect(resumeButton, &QPushButton::clicked, this, &PauseWidget::on_resumeButton_clicked);
    layout->addWidget(resumeButton);

    // 设置布局
    setLayout(layout);

    // 可以根据喜好设置样式，这里简单设置背景色和文字颜色等
    setStyleSheet("QWidget { background-color: rgba(0, 0, 0, 0.5); color: white; }"
                  "QPushButton { background-color: #008CBA; border: none; color: white; padding: 10px 20px; }"
                  "QPushButton:hover { background-color: #007B9A; }");
}

void PauseWidget::on_resumeButton_clicked()
{
    close();  // 关闭暂停界面
}

