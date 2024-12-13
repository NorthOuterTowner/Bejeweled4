#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "game.h"
#include "hoverbutton.h"  // 引入 HoverButton 类
#include <QLabel>
#include <QPushButton>
#include <QSoundEffect>
#include <QCoreApplication>
#include <QDebug>
#include <QCursor>
#include <QPropertyAnimation>
#include <QGraphicsOpacityEffect>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    StoneLabel::stoneMode = "gemstone";
    // 设置背景并启动动画
    QPropertyAnimation *backgroundAnimation = ShowBackground();
    backgroundAnimation->start(QAbstractAnimation::DeleteWhenStopped);


    // 循环播放背景音乐
    sound = new QSoundEffect(this);
    sound->setSource(QUrl("qrc:/music/background/music-1.wav"));  // 使用 qrc 路径
    sound->setLoopCount(QSoundEffect::Infinite);
    sound->setVolume(1.0f);  // 最大音量
    sound->play();

    // 设置鼠标-普通
    setCursor(QCursor(QPixmap(":/mouse1.png")));

    // 使用 HoverButton 替换原有按钮
    HoverButton *startButton = new HoverButton(this);
    startButton->setImage(":/icons/start_normal.png", ":/icons/start_hover.png", 100, 25);
    startButton->setLabel("Start Game", 13);
    startButton->setSound(":/music/button/button_mouseover.wav", ":/music/button/button_mouseleave.wav", ":/music/button/button_press.wav", ":/music/button/button_release.wav");
    startButton->move(ui->pushButton->pos());  // 将新按钮放置在原按钮的位置
    connect(startButton, &QPushButton::clicked, this, &MainWindow::on_pushButton_clicked);

    // 隐藏原始的 QPushButton
    ui->pushButton->hide();

    // 创建其他 HoverButton 按钮
    HoverButton *easyButton = new HoverButton(this);
    easyButton->setImage(":/icons/easy_normal.png", ":/icons/easy_hover.png", 100, 45);
    easyButton->setLabel("Easy", 13);
    easyButton->setSound(":/music/button/button_mouseover.wav", ":/music/button/button_mouseleave.wav", ":/music/button/button_press.wav", ":/music/button/button_release.wav");
    easyButton->move(ui->pushButton_2->pos());  // 设置位置与原按钮相同
    connect(easyButton, &QPushButton::clicked, this, &MainWindow::on_pushButton_2_clicked);
    ui->pushButton_2->hide();  // 隐藏原按钮

    HoverButton *mediumButton = new HoverButton(this);
    mediumButton->setImage(":/icons/medium_normal.png", ":/icons/medium_hover.png", 150, 50);
    mediumButton->setLabel("Medium", 13);
    mediumButton->setSound(":/music/button/button_mouseover.wav", ":/music/button/button_mouseleave.wav", ":/music/button/button_press.wav", ":/music/button/button_release.wav");
    mediumButton->move(ui->pushButton_3->pos());
    connect(mediumButton, &QPushButton::clicked, this, &MainWindow::on_pushButton_3_clicked);
    ui->pushButton_3->hide();

    HoverButton *hardButton = new HoverButton(this);
    hardButton->setImage(":/icons/hard_normal.png", ":/icons/hard_hover.png", 150, 50);
    hardButton->setLabel("Hard", 13);
    hardButton->setSound(":/music/button/button_mouseover.wav", ":/music/button/button_mouseleave.wav", ":/music/button/button_press.wav", ":/music/button/button_release.wav");
    hardButton->move(ui->pushButton_4->pos());
    connect(hardButton, &QPushButton::clicked, this, &MainWindow::on_pushButton_4_clicked);
    ui->pushButton_4->hide();

    HoverButton *jewelButton = new HoverButton(this);
    jewelButton->setImage(":/icons/hard_normal.png", ":/icons/hard_hover.png", 150, 50);
    jewelButton->setLabel("Hard", 13);
    jewelButton->setSound(":/music/button/button_mouseover.wav", ":/music/button/button_mouseleave.wav", ":/music/button/button_press.wav", ":/music/button/button_release.wav");
    jewelButton->move(ui->pushButton_4->pos());
    connect(jewelButton, &QPushButton::clicked, this, &MainWindow::on_pushButton_5_clicked);
    ui->pushButton_5->hide();

    HoverButton *fruitButton = new HoverButton(this);
    fruitButton->setImage(":/icons/fruit_normal.png", ":/icons/fruit_hover.png", 150, 50);
    fruitButton->setLabel("Fruit Mode", 13);
    fruitButton->setSound(":/music/button/button_mouseover.wav", ":/music/button/button_mouseleave.wav", ":/music/button/button_press.wav", ":/music/button/button_release.wav");
    fruitButton->move(ui->pushButton_7->pos());
    connect(fruitButton, &QPushButton::clicked, this, &MainWindow::on_pushButton_7_clicked);
    ui->pushButton_7->hide();

    HoverButton *vegetableButton = new HoverButton(this);
    vegetableButton->setImage(":/icons/vegetable_normal.png", ":/icons/vegetable_hover.png", 150, 50);
    vegetableButton->setLabel("Vegetable Mode", 13);
    vegetableButton->setSound(":/music/button/button_mouseover.wav", ":/music/button/button_mouseleave.wav", ":/music/button/button_press.wav", ":/music/button/button_release.wav");
    vegetableButton->move(ui->pushButton_6->pos());
    connect(vegetableButton, &QPushButton::clicked, this, &MainWindow::on_pushButton_6_clicked);
    ui->pushButton_6->hide();

    HoverButton *veryHardButton = new HoverButton(this);
    veryHardButton->setImage(":/icons/veryhard_normal.png", ":/icons/veryhard_hover.png", 150, 50);
    veryHardButton->setLabel("Very Hard", 13);
    veryHardButton->setSound(":/music/button/button_mouseover.wav", ":/music/button/button_mouseleave.wav", ":/music/button/button_press.wav", ":/music/button/button_release.wav");
    veryHardButton->move(ui->pushButton_8->pos());
    connect(veryHardButton, &QPushButton::clicked, this, &MainWindow::on_pushButton_8_clicked);
    ui->pushButton_8->hide();
}

void setBkImg(const char * str, QLabel * label);

QPropertyAnimation* MainWindow::ShowBackground() {
    QLabel *background = new QLabel(this);
    QPropertyAnimation *bkAnim = new QPropertyAnimation(background, "geometry", this);

    // 设置背景图片
    setBkImg(":/StartPage/background.png", background);
    background->show();

    // 设置动画属性
    bkAnim->setDuration(2000);  // 动画持续时间
    bkAnim->setStartValue(QRect(background->x(), background->y(), background->width(), background->height()));
    bkAnim->setEndValue(QRect(background->x(), this->height() - background->height(), background->width(), background->height()));
    bkAnim->setEasingCurve(QEasingCurve::InOutCubic);  // 设置缓动效果

    return bkAnim;
}

void MainWindow::setBkImg(QString path, QLabel *label) {
    QImage image = QImage(path);
    if(image.isNull()) {
        qDebug() << "背景图片未找到。";
    }

    double ratio = (double)image.height() / (double)image.width();
    QImage resizedImage = image.scaled(this->width(), ratio * this->width(), Qt::IgnoreAspectRatio);
    label->setPixmap(QPixmap::fromImage(resizedImage));
    label->setGeometry(0, 0, this->width(), ratio * this->width());  // 调整标签的几何位置
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    Game* gameDlg = Game::instance();
    connect(gameDlg, &Game::returnMainwindow, this, &MainWindow::onReturnMainwindow);
    gameDlg->show();
    this->hide();
}

void MainWindow::onReturnMainwindow()
{
    this->show();
    Game::instance()->hide();
}

void MainWindow::on_pushButton_2_clicked()
{
    difficulty = 4;  // Easy difficulty
}

void MainWindow::on_pushButton_3_clicked()
{
    difficulty = 6;  // Medium difficulty
}

void MainWindow::on_pushButton_4_clicked()
{
    difficulty = 8;  // Hard difficulty
}

void MainWindow::on_pushButton_7_clicked()
{
    StoneLabel::stoneMode = "Fruit";  // Set stone mode to Fruit
}

void MainWindow::on_pushButton_6_clicked()
{
    StoneLabel::stoneMode = "Vegetable";  // Set stone mode to Vegetable
}

void MainWindow::on_pushButton_8_clicked()
{
    difficulty = 10;  // Very Hard difficulty
}void MainWindow::on_pushButton_5_clicked()
{

}
