#include "client.h"
#include "login.h"
#include "ui_client.h"
#include <QDebug>
#include <QMessageBox>
Client::Client(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::Client) {
    ui->setupUi(this);
    tcpSocket = new QTcpSocket(this);

    /*
    // 网络通信的槽函数
    connect(tcpSocket, &QTcpSocket::readyRead, this, &Client::onReadyRead);
    connect(tcpSocket, &QTcpSocket::disconnected, this, &Client::onDisconnected);
*/
}

Client::~Client() {

    delete ui;
}

/*
void Client::onSendData() {
    QString username = ui->usernameEdit->text();
    QString password = ui->passwordEdit->text();

    if (username.isEmpty() || password.isEmpty()) {
        ui->logText->append("用户名和密码不能为空");
        return;
    }

    QString data = username + ";" + password;
    tcpSocket->write(data.toUtf8());
    ui->logText->append("发送数据：" + data);
}


void Client::onReadyRead() {
    QByteArray data = tcpSocket->readAll();
    ui->logText->append("收到服务器消息：" + QString::fromUtf8(data));
}

void Client::onDisconnected() {
    ui->logText->append("与服务器断开连接");
}
*/
void Client::on_pushButton_clicked()
{
    QString host = ui->hostEdit->text();
    quint16 port = ui->portEdit->text().toUInt();

    tcpSocket->connectToHost(host, port);
    connect(tcpSocket,&QTcpSocket::connected,[this]()
    {
        QMessageBox::information(this,"服务器连接成功","连接服务器成功");
        Login *w=new Login(tcpSocket);
        w->show();
        this->close();
    });
    /*
    if (tcpSocket->waitForConnected(3000)) {
        QMessageBox::information(this, "服务器连接失败", "进入离线模式");
        Login *w=new Login(nullptr);
        w->show();
        this->close();
    } else {
        QString data = "a "+username;
        tcpSocket->write(data.toUtf8());
        QMessageBox::information(this, "服务器连接成功", "进入在线模式");
        Login *w=new Login(tcpSocket);
        w->show();
        this->close();
    }
*/
}//尝试连接服务器


void Client::on_pushButton_2_clicked()
{
    Login *w=new Login(nullptr);
    w->show();
    this->close();
}//进行离线游戏

