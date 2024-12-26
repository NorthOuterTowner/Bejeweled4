/********************************************************************************
** Form generated from reading UI file 'Login.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Login
{
public:
    QWidget *centralwidget;
    QLabel *label_image;
    QLabel *label_2;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QLineEdit *lineEdit_username;
    QLineEdit *lineEdit_password;
    QPushButton *btn_signin;
    QPushButton *btn_signup;

    void setupUi(QMainWindow *Login)
    {
        if (Login->objectName().isEmpty())
            Login->setObjectName("Login");
        Login->resize(780, 520);
        Login->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"\n"
""));
        centralwidget = new QWidget(Login);
        centralwidget->setObjectName("centralwidget");
        label_image = new QLabel(centralwidget);
        label_image->setObjectName("label_image");
        label_image->setGeometry(QRect(390, 0, 391, 521));
        label_image->setStyleSheet(QString::fromUtf8("border-radius:7px;padding:0px 0px;"));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(10, 30, 351, 91));
        label_2->setStyleSheet(QString::fromUtf8(" font: bold 18pt \"Comic Sans MS\"; /* \344\275\277\347\224\250\346\233\264\345\245\275\347\234\213\347\232\204\345\255\227\344\275\223\357\274\214\344\276\213\345\246\202 Comic Sans MS */\n"
"    color: rgb(255, 182, 193); /* \346\265\205\347\262\211\350\211\262\345\255\227\344\275\223 */"));
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(40, 150, 291, 111));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        lineEdit_username = new QLineEdit(layoutWidget);
        lineEdit_username->setObjectName("lineEdit_username");
        lineEdit_username->setMinimumSize(QSize(0, 45));
        lineEdit_username->setStyleSheet(QString::fromUtf8("background-color: rgb(247, 247, 247);\n"
"border:1px groove gray;border-radius:\n"
"7px;padding:2px 4px;\n"
"font: 10pt \"Candara\";"));

        verticalLayout->addWidget(lineEdit_username);

        lineEdit_password = new QLineEdit(layoutWidget);
        lineEdit_password->setObjectName("lineEdit_password");
        lineEdit_password->setMinimumSize(QSize(0, 45));
        lineEdit_password->setStyleSheet(QString::fromUtf8("background-color: rgb(247, 247, 247);\n"
"border:1px groove gray;border-radius:\n"
"7px;padding:2px 4px;\n"
"font: 10pt \"Candara\";"));
        lineEdit_password->setEchoMode(QLineEdit::EchoMode::Password);

        verticalLayout->addWidget(lineEdit_password);

        btn_signin = new QPushButton(centralwidget);
        btn_signin->setObjectName("btn_signin");
        btn_signin->setGeometry(QRect(20, 330, 121, 61));
        btn_signin->setMinimumSize(QSize(50, 40));
        btn_signin->setStyleSheet(QString::fromUtf8(""));
        btn_signup = new QPushButton(centralwidget);
        btn_signup->setObjectName("btn_signup");
        btn_signup->setGeometry(QRect(210, 330, 121, 61));
        btn_signup->setMinimumSize(QSize(50, 40));
        btn_signup->setStyleSheet(QString::fromUtf8(""));
        Login->setCentralWidget(centralwidget);

        retranslateUi(Login);

        QMetaObject::connectSlotsByName(Login);
    } // setupUi

    void retranslateUi(QMainWindow *Login)
    {
        Login->setWindowTitle(QCoreApplication::translate("Login", "MainWindow", nullptr));
        label_image->setText(QString());
        label_2->setText(QCoreApplication::translate("Login", "<html><head/><body><p><span style=\" font-size:26pt;\">LOGIN INTO</span></p></body></html>", nullptr));
        lineEdit_username->setPlaceholderText(QCoreApplication::translate("Login", "Places input your Id", nullptr));
        lineEdit_password->setPlaceholderText(QCoreApplication::translate("Login", "Please input your password", nullptr));
        btn_signin->setText(QCoreApplication::translate("Login", "Sign in", nullptr));
        btn_signup->setText(QCoreApplication::translate("Login", "Sign up", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Login: public Ui_Login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
