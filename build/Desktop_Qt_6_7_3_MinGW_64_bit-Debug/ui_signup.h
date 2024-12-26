/********************************************************************************
** Form generated from reading UI file 'signup.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIGNUP_H
#define UI_SIGNUP_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Signup
{
public:
    QLabel *label_image;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *lineEdit_username;
    QLabel *label_4;
    QLabel *label_5;
    QLineEdit *lineEdit_passwd;
    QLineEdit *lineEdit_surepasswd;
    QPushButton *pushButton_2;
    QPushButton *btn_return;

    void setupUi(QWidget *Signup)
    {
        if (Signup->objectName().isEmpty())
            Signup->setObjectName("Signup");
        Signup->resize(745, 486);
        Signup->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        label_image = new QLabel(Signup);
        label_image->setObjectName("label_image");
        label_image->setGeometry(QRect(0, 0, 741, 481));
        label = new QLabel(Signup);
        label->setObjectName("label");
        label->setGeometry(QRect(200, 30, 161, 31));
        label->setStyleSheet(QString::fromUtf8(" font: bold 18pt \"Comic Sans MS\"; /* \344\275\277\347\224\250\346\233\264\345\245\275\347\234\213\347\232\204\345\255\227\344\275\223\357\274\214\344\276\213\345\246\202 Comic Sans MS */\n"
"    color: rgb(255, 182, 193); /* \346\265\205\347\262\211\350\211\262\345\255\227\344\275\223 */\n"
" background-color: transparent; /* \350\256\276\347\275\256\350\203\214\346\231\257\351\200\217\346\230\216 */"));
        label_2 = new QLabel(Signup);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(200, 60, 301, 51));
        label_2->setStyleSheet(QString::fromUtf8(" font: bold 18pt \"Comic Sans MS\"; /* \344\275\277\347\224\250\346\233\264\345\245\275\347\234\213\347\232\204\345\255\227\344\275\223\357\274\214\344\276\213\345\246\202 Comic Sans MS */\n"
"    color: rgb(255, 182, 193); /* \346\265\205\347\262\211\350\211\262\345\255\227\344\275\223 */\n"
" background-color: transparent; /* \350\256\276\347\275\256\350\203\214\346\231\257\351\200\217\346\230\216 */"));
        label_3 = new QLabel(Signup);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(170, 130, 379, 21));
        label_3->setStyleSheet(QString::fromUtf8(" font: bold 15pt \"Comic Sans MS\"; /* \344\275\277\347\224\250\346\233\264\345\245\275\347\234\213\347\232\204\345\255\227\344\275\223\357\274\214\344\276\213\345\246\202 Comic Sans MS */\n"
"    color: rgb(255, 182, 193); /* \346\265\205\347\262\211\350\211\262\345\255\227\344\275\223 */\n"
" background-color: transparent; /* \350\256\276\347\275\256\350\203\214\346\231\257\351\200\217\346\230\216 */"));
        lineEdit_username = new QLineEdit(Signup);
        lineEdit_username->setObjectName("lineEdit_username");
        lineEdit_username->setGeometry(QRect(170, 160, 379, 40));
        lineEdit_username->setMinimumSize(QSize(0, 40));
        label_4 = new QLabel(Signup);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(170, 210, 379, 21));
        label_4->setStyleSheet(QString::fromUtf8(" font: bold 15pt \"Comic Sans MS\"; /* \344\275\277\347\224\250\346\233\264\345\245\275\347\234\213\347\232\204\345\255\227\344\275\223\357\274\214\344\276\213\345\246\202 Comic Sans MS */\n"
"    color: rgb(255, 182, 193); /* \346\265\205\347\262\211\350\211\262\345\255\227\344\275\223 */\n"
" background-color: transparent; /* \350\256\276\347\275\256\350\203\214\346\231\257\351\200\217\346\230\216 */"));
        label_5 = new QLabel(Signup);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(170, 290, 379, 21));
        label_5->setStyleSheet(QString::fromUtf8(" font: bold 15pt \"Comic Sans MS\"; /* \344\275\277\347\224\250\346\233\264\345\245\275\347\234\213\347\232\204\345\255\227\344\275\223\357\274\214\344\276\213\345\246\202 Comic Sans MS */\n"
"    color: rgb(255, 182, 193); /* \346\265\205\347\262\211\350\211\262\345\255\227\344\275\223 */\n"
" background-color: transparent; /* \350\256\276\347\275\256\350\203\214\346\231\257\351\200\217\346\230\216 */"));
        lineEdit_passwd = new QLineEdit(Signup);
        lineEdit_passwd->setObjectName("lineEdit_passwd");
        lineEdit_passwd->setGeometry(QRect(170, 240, 379, 40));
        lineEdit_passwd->setMinimumSize(QSize(0, 40));
        lineEdit_surepasswd = new QLineEdit(Signup);
        lineEdit_surepasswd->setObjectName("lineEdit_surepasswd");
        lineEdit_surepasswd->setGeometry(QRect(170, 320, 379, 40));
        lineEdit_surepasswd->setMinimumSize(QSize(0, 40));
        pushButton_2 = new QPushButton(Signup);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(170, 370, 377, 40));
        pushButton_2->setMinimumSize(QSize(0, 40));
        pushButton_2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background: qlineargradient(\n"
"        x1: 0, y1: 0, x2: 0, y2: 1,\n"
"        stop: 0 rgba(255, 240, 245, 0.8), /* \346\265\205\347\262\211\351\241\266\351\203\250 */\n"
"        stop: 0.5 rgba(255, 220, 230, 0.6), /* \344\270\255\351\227\264\346\270\220\345\217\230 */\n"
"        stop: 1 rgba(255, 200, 215, 0.8) /* \346\265\205\347\262\211\345\272\225\351\203\250 */\n"
"    ); /* \347\216\273\347\222\203\350\264\250\346\204\237\346\270\220\345\217\230\350\203\214\346\231\257 */\n"
"    border: 2px solid rgba(255, 182, 193, 0.8); /* \346\237\224\345\222\214\350\276\271\346\241\206 */\n"
"    border-radius: 15px; /* \345\234\206\350\247\222\346\225\210\346\236\234 */\n"
"    color: rgba(50, 50, 50, 0.9); /* \345\255\227\344\275\223\351\242\234\350\211\262 */\n"
"    font-size: 20px; /* \345\255\227\344\275\223\345\244\247\345\260\217 */\n"
"    font-family: \"Arial\", sans-serif; /* \345\255\227\344\275\223\346\240\267\345\274\217 */\n"
"    font-weight: bold; /* \345\255\227\344\275\223"
                        "\345\212\240\347\262\227 */\n"
"    padding: 5px 5px; /* \345\206\205\350\276\271\350\267\235 */\n"
"    box-shadow: 3px 3px 8px rgba(0, 0, 0, 0.2); /* \346\214\211\351\222\256\351\230\264\345\275\261 */\n"
"}\n"
"QPushButton:hover {\n"
"    background: qlineargradient(\n"
"        x1: 0, y1: 0, x2: 0, y2: 1,\n"
"        stop: 0 rgba(255, 228, 238, 0.9), /* \346\202\254\345\201\234\351\241\266\351\203\250 */\n"
"        stop: 0.5 rgba(255, 200, 220, 0.7), /* \344\270\255\351\227\264\346\270\220\345\217\230 */\n"
"        stop: 1 rgba(255, 182, 193, 0.9) /* \346\202\254\345\201\234\345\272\225\351\203\250 */\n"
"    );\n"
"    border: 2px solid rgba(255, 160, 176, 0.9); /* \346\202\254\345\201\234\346\227\266\350\276\271\346\241\206\351\242\234\350\211\262 */\n"
"    box-shadow: 5px 5px 12px rgba(0, 0, 0, 0.3); /* \346\233\264\346\230\216\346\230\276\347\232\204\351\230\264\345\275\261 */\n"
"}\n"
"QPushButton:pressed {\n"
"    background: qlineargradient(\n"
"        x1: 0, y1: 0, x2: 0, y2: 1,\n"
"        sto"
                        "p: 0 rgba(255, 182, 193, 0.9), /* \346\214\211\344\270\213\351\241\266\351\203\250 */\n"
"        stop: 1 rgba(255, 160, 176, 1.0) /* \346\214\211\344\270\213\345\272\225\351\203\250 */\n"
"    );\n"
"    border: 2px solid rgba(255, 105, 135, 1.0); /* \346\214\211\344\270\213\346\227\266\350\276\271\346\241\206\351\242\234\350\211\262 */\n"
"    box-shadow: inset 2px 2px 5px rgba(0, 0, 0, 0.3); /* \345\206\205\345\207\271\351\230\264\345\275\261 */\n"
"}\n"
""));
        btn_return = new QPushButton(Signup);
        btn_return->setObjectName("btn_return");
        btn_return->setGeometry(QRect(170, 420, 377, 40));
        btn_return->setMinimumSize(QSize(0, 40));
        btn_return->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background: qlineargradient(\n"
"        x1: 0, y1: 0, x2: 0, y2: 1,\n"
"        stop: 0 rgba(255, 240, 245, 0.8), /* \346\265\205\347\262\211\351\241\266\351\203\250 */\n"
"        stop: 0.5 rgba(255, 220, 230, 0.6), /* \344\270\255\351\227\264\346\270\220\345\217\230 */\n"
"        stop: 1 rgba(255, 200, 215, 0.8) /* \346\265\205\347\262\211\345\272\225\351\203\250 */\n"
"    ); /* \347\216\273\347\222\203\350\264\250\346\204\237\346\270\220\345\217\230\350\203\214\346\231\257 */\n"
"    border: 2px solid rgba(255, 182, 193, 0.8); /* \346\237\224\345\222\214\350\276\271\346\241\206 */\n"
"    border-radius: 15px; /* \345\234\206\350\247\222\346\225\210\346\236\234 */\n"
"    color: rgba(50, 50, 50, 0.9); /* \345\255\227\344\275\223\351\242\234\350\211\262 */\n"
"    font-size: 20px; /* \345\255\227\344\275\223\345\244\247\345\260\217 */\n"
"    font-family: \"Arial\", sans-serif; /* \345\255\227\344\275\223\346\240\267\345\274\217 */\n"
"    font-weight: bold; /* \345\255\227\344\275\223"
                        "\345\212\240\347\262\227 */\n"
"    padding: 5px 5px; /* \345\206\205\350\276\271\350\267\235 */\n"
"    box-shadow: 3px 3px 8px rgba(0, 0, 0, 0.2); /* \346\214\211\351\222\256\351\230\264\345\275\261 */\n"
"}\n"
"QPushButton:hover {\n"
"    background: qlineargradient(\n"
"        x1: 0, y1: 0, x2: 0, y2: 1,\n"
"        stop: 0 rgba(255, 228, 238, 0.9), /* \346\202\254\345\201\234\351\241\266\351\203\250 */\n"
"        stop: 0.5 rgba(255, 200, 220, 0.7), /* \344\270\255\351\227\264\346\270\220\345\217\230 */\n"
"        stop: 1 rgba(255, 182, 193, 0.9) /* \346\202\254\345\201\234\345\272\225\351\203\250 */\n"
"    );\n"
"    border: 2px solid rgba(255, 160, 176, 0.9); /* \346\202\254\345\201\234\346\227\266\350\276\271\346\241\206\351\242\234\350\211\262 */\n"
"    box-shadow: 5px 5px 12px rgba(0, 0, 0, 0.3); /* \346\233\264\346\230\216\346\230\276\347\232\204\351\230\264\345\275\261 */\n"
"}\n"
"QPushButton:pressed {\n"
"    background: qlineargradient(\n"
"        x1: 0, y1: 0, x2: 0, y2: 1,\n"
"        sto"
                        "p: 0 rgba(255, 182, 193, 0.9), /* \346\214\211\344\270\213\351\241\266\351\203\250 */\n"
"        stop: 1 rgba(255, 160, 176, 1.0) /* \346\214\211\344\270\213\345\272\225\351\203\250 */\n"
"    );\n"
"    border: 2px solid rgba(255, 105, 135, 1.0); /* \346\214\211\344\270\213\346\227\266\350\276\271\346\241\206\351\242\234\350\211\262 */\n"
"    box-shadow: inset 2px 2px 5px rgba(0, 0, 0, 0.3); /* \345\206\205\345\207\271\351\230\264\345\275\261 */\n"
"}\n"
""));

        retranslateUi(Signup);

        QMetaObject::connectSlotsByName(Signup);
    } // setupUi

    void retranslateUi(QWidget *Signup)
    {
        Signup->setWindowTitle(QCoreApplication::translate("Signup", "Form", nullptr));
        label_image->setText(QString());
        label->setText(QCoreApplication::translate("Signup", "Hello", nullptr));
        label_2->setText(QCoreApplication::translate("Signup", "Welcome to us!", nullptr));
        label_3->setText(QCoreApplication::translate("Signup", "Username", nullptr));
        label_4->setText(QCoreApplication::translate("Signup", "Password", nullptr));
        label_5->setText(QCoreApplication::translate("Signup", "Ensure your password\357\274\232", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Signup", "Sure", nullptr));
        btn_return->setText(QCoreApplication::translate("Signup", "Return login", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Signup: public Ui_Signup {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIGNUP_H
