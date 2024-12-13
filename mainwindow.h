#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMouseEvent>
#include <QLabel>
#include <QPushButton>
#include <QSoundEffect>
#include <QCursor>
#include <QGraphicsOpacityEffect>
#include <qpropertyanimation.h>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);

    QPropertyAnimation *ShowBackground();

    void setBkImg(QString path, QLabel *label);

    ~MainWindow();

private:
    Ui::MainWindow *ui;
    QSoundEffect* sound;


    // 添加悬停效果和点击效果的函数
    void setupButtonHoverEffect(QPushButton *button);

private slots:
    void on_pushButton_clicked();
    void onReturnMainwindow();
    void on_pushButton_3_clicked();
    void on_pushButton_2_clicked();
    void on_pushButton_5_clicked();
    void on_pushButton_4_clicked();
    void on_pushButton_7_clicked();
    void on_pushButton_6_clicked();
    void on_pushButton_8_clicked();
};

#endif // MAINWINDOW_H
