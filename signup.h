#ifndef SIGNUP_H
#define SIGNUP_H

#include <QWidget>
#include <QPropertyAnimation>
#include <QParallelAnimationGroup>
#include <QTime>
#include <QKeyEvent>
#include "hoverbutton.h"


namespace Ui {
class Signup;
}

class Signup : public QWidget
{
    Q_OBJECT

public:
    explicit Signup(QWidget *parent = nullptr);
    ~Signup();
     QPropertyAnimation *bkAnim;

private slots:
    void on_pushButton_2_clicked();

    void on_btn_return_clicked();

private:
    Ui::Signup *ui;
};

#endif // SIGNUP_H
