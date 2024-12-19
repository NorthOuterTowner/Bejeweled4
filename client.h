#ifndef CLIENT_H
#define CLIENT_H

#include <QMainWindow>
#include <QTcpSocket>

QT_BEGIN_NAMESPACE
namespace Ui { class Client; }
QT_END_NAMESPACE

class Client : public QMainWindow {
    Q_OBJECT

public:
    explicit Client(QWidget *parent = nullptr);
    ~Client();

private slots:
    /*
    void onSendData();         // 发送账户和密码
    void onReadyRead();        // 接收服务器消息
    void onDisconnected();     // 服务器断开
*/
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::Client *ui;
    QTcpSocket *tcpSocket;
    QString username;
};

#endif // CLIENT_H
