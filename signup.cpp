// 在 Signup.cpp 文件开头加上这个声明
void sqlite_Init();  // 在这里声明 sqlite_Init()

#include "signup.h"
#include "ui_signup.h"
#include "Login.h"
#include "utils.h"
#include <QDebug>

// 以下代码不变
Signup::Signup(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Signup)
{
    ui->setupUi(this);
    QPixmap *pix = new QPixmap(":/girl1.png");
    QSize sz = ui->label_image->size();
    ui->label_image->setPixmap(pix->scaled(sz));
}

Signup::~Signup()
{
    delete ui;
}

// 返回登录按钮
void Signup::on_btn_return_clicked()
{
    Login *w = new Login;
    w->show();
    this->close();
}

// 注册按钮
void Signup::on_pushButton_2_clicked()
{
    sqlite_Init();  // 正常调用 sqlite_Init()
    QString username = ui->lineEdit_username->text();
    QString password = utils::hashPassword(ui->lineEdit_passwd->text());
    QString surepass = utils::hashPassword(ui->lineEdit_surepasswd->text());

    if(password == surepass)
    {
        QString sql=QString("insert into user(username,password) values('%1','%2');")
        .arg(username).arg(password);
        QSqlQuery query;
        if(!query.exec(sql))
        {
            qDebug()<<"insert into error";
            QMessageBox::information(this,"注册认证","插入失败！");
        }
        else
        {
            qDebug()<<"insert into success";
            QMessageBox::information(this,"注册认证","插入成功！");
            Login *w = new Login;
            w->show();
            this->close();
        }
    } else {
        QMessageBox::information(this,"注册认证","两次密码输入不一致");
    }
}
