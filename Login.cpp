#include "login.h"
#include "ui_login.h"
#include "signup.h"
#include "mainwindow.h"
#include "hoverbutton.h"  // 引入 HoverButton

#include <QGraphicsDropShadowEffect>
#include <QMessageBox>
#include <QSqlQuery>
#include <QSqlDatabase>

Login::Login(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Login)
{
    ui->setupUi(this);
    // // 设置背景并启动动画
    // QPropertyAnimation *backgroundAnimation = ShowBackground();
    // backgroundAnimation->start(QAbstractAnimation::DeleteWhenStopped);

    // // 启动标题动画
    // QPropertyAnimation *titleAnimation = ShowTitle();
    // titleAnimation->start(QAbstractAnimation::DeleteWhenStopped);  // 启动标题动画

    // 设置鼠标-普通
    setCursor(QCursor(QPixmap(":/mouse1.png")));
    // 设置背景图片
    QPixmap *pix = new QPixmap(":/blue.png");
    QSize sz = ui->label_image->size();
    ui->label_image->setPixmap(pix->scaled(sz));

    // 设置阴影效果
    QGraphicsDropShadowEffect *shadow = new QGraphicsDropShadowEffect(this);
    shadow->setOffset(-3, 0);
    shadow->setColor(QColor("#888888"));
    shadow->setBlurRadius(30);
    ui->label_image->setGraphicsEffect(shadow);

    // 初始化数据库
    sqlite_Init();

    // 创建 HoverButton 按钮并设置属性
    HoverButton *signinButton = new HoverButton(this);
    signinButton->setImage(":/icons/signin_normal.png", ":/icons/signin_hover.png", 150, 40);
    signinButton->setLabel("登录", 14);
    signinButton->setSound(":/music/button/hover_sound.wav", ":/music/button/leave_sound.wav", ":/music/button/press_sound.wav", ":/music/button/release_sound.wav");
    signinButton->move(ui->btn_signin->pos());  // 将新按钮放置在原按钮位置
    connect(signinButton, &QPushButton::clicked, this, &Login::on_btn_signin_clicked);

    // 隐藏原有 QPushButton
    ui->btn_signin->hide();

    // 注册按钮
    HoverButton *signupButton = new HoverButton(this);
    signupButton->setImage(":/icons/signup_normal.png", ":/icons/signup_hover.png", 150, 40);
    signupButton->setLabel("注册", 14);
    signupButton->setSound(":/music/button/hover_sound.wav", ":/music/button/leave_sound.wav", ":/music/button/press_sound.wav", ":/music/button/release_sound.wav");
    signupButton->move(ui->btn_signup->pos());  // 将新按钮放置在原按钮位置
    connect(signupButton, &QPushButton::clicked, this, &Login::on_btn_signup_clicked);

    // 隐藏原有 QPushButton
    ui->btn_signup->hide();
}

Login::~Login()
{
    delete ui;
}

void sqlite_Init()
{
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("user.db");
    if (!db.open())
    {
        qDebug() << "打开数据库失败";
    }
    // 创建表格
    QString createsql = QString("create table if not exists user(id integer primary key autoincrement,"
                                "username ntext unique not NULL,"
                                "password ntext not NULL)");
    QSqlQuery query;
    if (!query.exec(createsql)) {
        qDebug() << "创建表格失败";
    }
    else {
        qDebug() << "创建表格成功";
    }
}

QPropertyAnimation *  Login::ShowBackground(){
    QPixmap pix;
    QLabel *background = new QLabel(this);
    bkAnim = new QPropertyAnimation(background, "geometry",this);
    setBkImg(":/StartPage/background.png",background);
    background->show();
    bkAnim->setDuration(2000);
    bkAnim->setStartValue(QRect(background->x(), background->y(), background->width(), background->height()));
    bkAnim->setEndValue(QRect(background->x(), this->height() - background->height(), background->width(), background->height()));
    bkAnim->setEasingCurve(QEasingCurve::InOutCubic);
    return bkAnim;
}
QPropertyAnimation * Login::ShowTitle(){
    QPixmap pix;
    QLabel *title = new QLabel(this);
    title->setGeometry(this->width()/2-903/2,-title->height(),903,200);
    setAdaptedImg(":/title.png",title);
    title->show();
    QPropertyAnimation *animation = new QPropertyAnimation(title, "geometry",this);
    animation->setDuration(2000);
    animation->setStartValue(QRect(title->x(), title->y(), title->width(), title->height()));
    animation->setEndValue(QRect(title->x(), 100, title->width(), title->height()));
    animation->setEasingCurve(QEasingCurve::OutExpo);
    return animation;

}
//将path的图片放置到label上，自适应label大小
void Login::setAdaptedImg(QString path,QLabel *label)
{
    QImage image(path);
    QSize size=label->size();
    QImage image2=image.scaled(size,Qt::IgnoreAspectRatio);//重新调整图像大小以适应label
    label->setPixmap(QPixmap::fromImage(image2));//显示
}
//将path的图片放置到label上，自适应label大小
void Login::setBkImg(QString path,QLabel *label)
{
    QImage image = QImage(path);
    if(image.isNull()){
        qDebug()<<"background:empty";
    }
    double ratio=(double)image.height()/(double)image.width();
    QImage image2=image.scaled(this->width(),ratio*this->width(),Qt::IgnoreAspectRatio);//重新调整图像大小以适应label
    label->setPixmap(QPixmap::fromImage(image2));//显示
    label->setGeometry(0,0,this->width(),ratio*this->width());
}

void Login::on_btn_signin_clicked()
{
    sqlite_Init();
    QString username = ui->lineEdit_username->text();
    QString password = ui->lineEdit_password->text();
    QString sql = QString("select * from user where username='%1' and password='%2'")
                      .arg(username).arg(password);
    // 创建执行语句对象
    QSqlQuery query(sql);
    // 判断执行结果
    if (!query.next()) {
        qDebug() << "登录失败";
        QMessageBox::information(this, "登录认证", "登录失败,账户或者密码错误");
    }
    else {
        qDebug() << "登录成功";
        QMessageBox::information(this, "登录认证", "登录成功");
        MainWindow *w = new MainWindow;
        w->show();
        this->close();
    }
}

void Login::on_btn_signup_clicked()
{
    this->close();
    Signup *s = new Signup;
    s->show();
}
