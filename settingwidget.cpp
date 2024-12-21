#include "settingwidget.h"
#include <QPushButton>
#include <hoverbutton.h>
#include <stonelabel.h>
#include<globalvalue.h>
#include"mainwindow.h"
#include <QPainter>


settingwidget::settingwidget(QWidget *parent) : QDialog(parent), difficulty(4), stoneMode("gemstone")
{
    ui = new Ui::settingwidget();  // 使用 new 初始化 ui 指针
    ui->setupUi(this);
    this->resize(600, 500);  // 设置窗口大小

    // 设置背景图片
    /* QPixmap pixmap(":/Settingpage/dialogbox.png");
     if (pixmap.isNull()) {
         qDebug() << "Failed to load image!";
     }
    pixmap = pixmap.scaled(this->size(), Qt::KeepAspectRatioByExpanding);  // 保持图片的纵横比并扩展填充整个窗口
    QPalette palette(this->palette());
    palette.setBrush(QPalette::Window, QBrush(pixmap));
    this->setPalette(palette);*/

    // 使窗口无边框且不透明
    this->setWindowFlags(Qt::FramelessWindowHint);
    this->setAttribute(Qt::WA_TranslucentBackground);  // 去掉透明背景，看是否能显示图片


    // 创建并设置 HoverButton，直接设置位置
    /*  HoverButton *easyButton = new HoverButton(this);
    easyButton->setImage(":/icons/easy_normal.png", ":/icons/easy_hover.png", 100, 45);
    easyButton->setLabel("Easy", 13);
    easyButton->setSound(":/music/button/button_mouseover.wav", ":/music/button/button_mouseleave.wav", ":/music/button/button_press.wav", ":/music/button/button_release.wav");
    easyButton->move(ui->Easy->geometry().topLeft()); // 使用几何矩形的位置来设置
    connect(easyButton, &QPushButton::clicked, this, &settingwidget::on_Easy_clicked);
    ui->Easy->hide();  // 隐藏原按钮

    HoverButton *mediumButton = new HoverButton(this);
    mediumButton->setImage(":/icons/medium_normal.png", ":/icons/medium_hover.png", 150, 50);
    mediumButton->setLabel("Medium", 13);
    mediumButton->setSound(":/music/button/button_mouseover.wav", ":/music/button/button_mouseleave.wav", ":/music/button/button_press.wav", ":/music/button/button_release.wav");
    mediumButton->move(ui->Medium->geometry().topLeft()); // 使用几何矩形的位置来设置
    connect(mediumButton, &QPushButton::clicked, this, &settingwidget::on_Medium_clicked);
    ui->Medium->hide();  // 隐藏原按钮

    HoverButton *hardButton = new HoverButton(this);
    hardButton->setImage(":/icons/hard_normal.png", ":/icons/hard_hover.png", 150, 50);
    hardButton->setLabel("Hard", 13);
    hardButton->setSound(":/music/button/button_mouseover.wav", ":/music/button/button_mouseleave.wav", ":/music/button/button_press.wav", ":/music/button/button_release.wav");
    hardButton->move(ui->Hard->geometry().topLeft()); // 使用几何矩形的位置来设置
    connect(hardButton, &QPushButton::clicked, this, &settingwidget::on_Hard_clicked);
    ui->Hard->hide();  // 隐藏原按钮

    HoverButton *veryHardButton = new HoverButton(this);
    veryHardButton->setImage(":/icons/veryhard_normal.png", ":/icons/veryhard_hover.png", 150, 50);
    veryHardButton->setLabel("Very Hard", 13);
    veryHardButton->setSound(":/music/button/button_mouseover.wav", ":/music/button/button_mouseleave.wav", ":/music/button/button_press.wav", ":/music/button/button_release.wav");
    veryHardButton->move(ui->hell->geometry().topLeft()); // 使用几何矩形的位置来设置
    connect(veryHardButton, &QPushButton::clicked, this, &settingwidget::on_hell_clicked);
    ui->hell->hide();  // 隐藏原按钮

    HoverButton *jewelButton = new HoverButton(this);
    jewelButton->setImage(":/icons/fruit_normal.png", ":/icons/fruit_hover.png", 150, 50);
    jewelButton->setLabel("Jewel Mode", 13);
    jewelButton->setSound(":/music/button/button_mouseover.wav", ":/music/button/button_mouseleave.wav", ":/music/button/button_press.wav", ":/music/button/button_release.wav");
    jewelButton->move(ui->Jewel->geometry().topLeft()); // 使用几何矩形的位置来设置
    connect(jewelButton, &QPushButton::clicked, this, &settingwidget::on_Jewel_clicked);
    ui->Jewel->hide();  // 隐藏原按钮

    HoverButton *fruitButton = new HoverButton(this);
    fruitButton->setImage(":/icons/fruit_normal.png", ":/icons/fruit_hover.png", 150, 50);
    fruitButton->setLabel("Fruit Mode", 13);
    fruitButton->setSound(":/music/button/button_mouseover.wav", ":/music/button/button_mouseleave.wav", ":/music/button/button_press.wav", ":/music/button/button_release.wav");
    fruitButton->move(ui->Fruit->geometry().topLeft()); // 使用几何矩形的位置来设置
    connect(fruitButton, &QPushButton::clicked, this, &settingwidget::on_Fruit_clicked);
    ui->Fruit->hide();  // 隐藏原按钮

    HoverButton *vegetableButton = new HoverButton(this);
    vegetableButton->setImage(":/icons/vegetable_normal.png", ":/icons/vegetable_hover.png", 150, 50);
    vegetableButton->setLabel("Vegetable Mode", 13);
    vegetableButton->setSound(":/music/button/button_mouseover.wav", ":/music/button/button_mouseleave.wav", ":/music/button/button_press.wav", ":/music/button/button_release.wav");
    vegetableButton->move(ui->Vegetable->geometry().topLeft()); // 使用几何矩形的位置来设置
    connect(vegetableButton, &QPushButton::clicked, this, &settingwidget::on_Vegetable_clicked);
    ui->Vegetable->hide();  // 隐藏原按钮*/
}


settingwidget::~settingwidget()
{
}

void settingwidget::on_Easy_clicked()
{
    difficulty = 4;
    ::difficulty = difficulty; // 更新全局变量
    // StoneLabel::stoneMode = "Fruit"; // Easy difficulty
}

void settingwidget::on_Medium_clicked()
{
    difficulty = 6;
    ::difficulty = difficulty; // 更新全局变量
}

void settingwidget::on_Hard_clicked()
{
    difficulty = 8;
    ::difficulty = difficulty; // 更新全局变量
}

void settingwidget::on_hell_clicked()
{
    difficulty = 10;
    ::difficulty = difficulty; // 更新全局变量
}

void settingwidget::on_Jewel_clicked()
{
    StoneLabel::stoneMode = "gemstone";
}

void settingwidget::on_Fruit_clicked()
{
    StoneLabel::stoneMode = "Fruit";
}

void settingwidget::on_Vegetable_clicked()
{
    StoneLabel::stoneMode = "Vegetable";
}

void settingwidget::on_pushButton_clicked()
{//设置返回游戏界面按钮
    //gameDlg->show();
    this->hide();
}

void settingwidget::paintEvent(QPaintEvent *)
{
    QPainter p(this);

    // 获取窗口的大小
    QSize windowSize = this->size();

    // 计算要绘制的图片的大小，例如将其缩放到窗口的 80% 大小
    QPixmap pixmap(":/Settingpage/dialogbox.png");
    if (pixmap.isNull()) {
        qDebug() << "Failed to load image!";
        return;
    }

    // 缩放图片到新的大小
    pixmap = pixmap.scaled(windowSize.width() * 0.9, windowSize.height() * 0.9, Qt::KeepAspectRatio);

    // 计算绘制位置
    int x = (windowSize.width() - pixmap.width()) / 2;  // 水平居中
    int y = (windowSize.height() - pixmap.height()) / 2;  // 垂直居中

    // 绘制图片
    p.drawPixmap(x, y, pixmap);
}
