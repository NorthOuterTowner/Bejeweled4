#include "end.h"

// 构造函数，初始化界面相关元素并设置布局
End::End(Game* game, QWidget* parent) : QWidget(parent), gameInfo(game)
{
    ui.setupUi(this);
    setWindowTitle("游戏结束");

    // 连接返回主菜单按钮的点击信号到对应的槽函数
    connect(ui.returnButton, &QPushButton::clicked, this, &End::onReturnButtonClicked);
}

// 析构函数，释放相关资源（这里如果有其他资源需要释放可添加代码）
End::~End()
{
}

void End::onReturnButtonClicked()
{
    emit gameInfo->returnMainwindow();
    close();
}

void End::showEndUI()
{
    // 获取游戏最终得分并设置到得分标签上显示
    int finalScore = gameInfo->getScore();
    ui.scoreLabel->setText(QString("游戏结束啦，你的最终得分是: %1").arg(finalScore));

    // 显示结束界面
    show();
}

void End::showAdventureWinUI()
{
    // 设置不同的提示信息
    int finalScore = gameInfo->getScore();
    ui.scoreLabel->setText(QString("恭喜你，闯关成功！你的最终得分是: %1").arg(finalScore));

    // 显示结束界面
    show();
}

void End::showAdventureLoseUI()
{
    // 设置不同的提示信息
    int finalScore = gameInfo->getScore();
    ui.scoreLabel->setText(QString("很遗憾，闯关失败！你的最终得分是: %1").arg(finalScore));

    // 显示结束界面
    show();
}
