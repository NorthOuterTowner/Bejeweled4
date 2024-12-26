/********************************************************************************
** Form generated from reading UI file 'shopwidget.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SHOPWIDGET_H
#define UI_SHOPWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ShopWidget
{
public:
    QPushButton *bomb;
    QPushButton *horizon;
    QPushButton *vertical;
    QPushButton *Buy;
    QLabel *label_2;
    QLabel *label_4;
    QLabel *introduction;
    QLabel *picture;
    QLabel *score;
    QLabel *bombLabel;
    QLabel *horizonLabel;
    QLabel *verticalLabel;
    QPushButton *hammer;
    QLabel *hammerLabel;

    void setupUi(QWidget *ShopWidget)
    {
        if (ShopWidget->objectName().isEmpty())
            ShopWidget->setObjectName("ShopWidget");
        ShopWidget->resize(764, 666);
        bomb = new QPushButton(ShopWidget);
        bomb->setObjectName("bomb");
        bomb->setGeometry(QRect(70, 140, 61, 61));
        bomb->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background: transparent; /* \350\203\214\346\231\257\351\200\217\346\230\216 */\n"
"    border: none; /* \346\227\240\350\276\271\346\241\206 */\n"
"    background-image: url(:/bomb.png); /* \350\256\276\347\275\256\350\203\214\346\231\257\345\233\276\347\211\207 */\n"
"    background-repeat: no-repeat; /* \351\230\262\346\255\242\345\233\276\347\211\207\351\207\215\345\244\215 */\n"
"    background-position: center; /* \346\260\264\345\271\263\345\222\214\345\236\202\347\233\264\345\261\205\344\270\255 */\n"
"    background-size: contain; /* \345\233\276\347\211\207\347\274\251\346\224\276\344\273\245\351\200\202\345\272\224\346\214\211\351\222\256\345\244\247\345\260\217 */\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background: qlineargradient(\n"
"        x1: 0, y1: 0, x2: 0, y2: 1,\n"
"        stop: 0 rgba(220, 220, 255, 0.9),\n"
"        stop: 0.5 rgba(180, 180, 255, 0.7),\n"
"        stop: 1 rgba(130, 130, 255, 0.9)\n"
"    ); /* \346\202\254\345\201\234\346\227\266\350\203\214\346\231"
                        "\257\346\270\220\345\217\230 */\n"
"    border: 2px solid rgba(80, 80, 255, 0.9); /* \346\202\254\345\201\234\346\227\266\350\276\271\346\241\206\351\242\234\350\211\262 */\n"
"    box-shadow: 5px 5px 12px rgba(0, 0, 0, 0.3); /* \346\233\264\346\230\216\346\230\276\347\232\204\351\230\264\345\275\261 */  \n"
"  background-image: url(:/bomb.png); /* \350\256\276\347\275\256\350\203\214\346\231\257\345\233\276\347\211\207 */\n"
"\n"
"    background-repeat: no-repeat;\n"
"    background-position: center;\n"
"    background-size: contain;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background: qlineargradient(\n"
"        x1: 0, y1: 0, x2: 0, y2: 1,\n"
"        stop: 0 rgba(150, 150, 255, 0.9),\n"
"        stop: 1 rgba(100, 100, 200, 1.0)\n"
"    ); /* \346\214\211\344\270\213\346\227\266\350\203\214\346\231\257\346\270\220\345\217\230 */\n"
"    border: 2px solid rgba(50, 50, 200, 1.0); /* \346\214\211\344\270\213\346\227\266\350\276\271\346\241\206\351\242\234\350\211\262 */\n"
"    box-shadow: inset 2px 2px 5p"
                        "x rgba(0, 0, 0, 0.3); /* \345\206\205\345\207\271\351\230\264\345\275\261 */\n"
"    background-image: url(:/bomb.png); /* \350\256\276\347\275\256\350\203\214\346\231\257\345\233\276\347\211\207 */\n"
"    background-repeat: no-repeat;\n"
"    background-position: center;\n"
"    background-size: contain;\n"
"}\n"
""));
        horizon = new QPushButton(ShopWidget);
        horizon->setObjectName("horizon");
        horizon->setGeometry(QRect(70, 230, 61, 61));
        horizon->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background: transparent; /* \350\203\214\346\231\257\351\200\217\346\230\216 */\n"
"    border: none; /* \346\227\240\350\276\271\346\241\206 */\n"
"    background-image: url(:/horizon.png); /* \350\256\276\347\275\256\350\203\214\346\231\257\345\233\276\347\211\207 */\n"
"    background-repeat: no-repeat; /* \351\230\262\346\255\242\345\233\276\347\211\207\351\207\215\345\244\215 */\n"
"    background-position: center; /* \346\260\264\345\271\263\345\222\214\345\236\202\347\233\264\345\261\205\344\270\255 */\n"
"    background-size: contain; /* \345\233\276\347\211\207\347\274\251\346\224\276\344\273\245\351\200\202\345\272\224\346\214\211\351\222\256\345\244\247\345\260\217 */\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background: qlineargradient(\n"
"        x1: 0, y1: 0, x2: 0, y2: 1,\n"
"        stop: 0 rgba(220, 220, 255, 0.9),\n"
"        stop: 0.5 rgba(180, 180, 255, 0.7),\n"
"        stop: 1 rgba(130, 130, 255, 0.9)\n"
"    ); /* \346\202\254\345\201\234\346\227\266\350\203\214\346"
                        "\231\257\346\270\220\345\217\230 */\n"
"    border: 2px solid rgba(80, 80, 255, 0.9); /* \346\202\254\345\201\234\346\227\266\350\276\271\346\241\206\351\242\234\350\211\262 */\n"
"    box-shadow: 5px 5px 12px rgba(0, 0, 0, 0.3); /* \346\233\264\346\230\216\346\230\276\347\232\204\351\230\264\345\275\261 */  \n"
"  background-image: url(:/horizon.png); /* \350\256\276\347\275\256\350\203\214\346\231\257\345\233\276\347\211\207 */\n"
"\n"
"    background-repeat: no-repeat;\n"
"    background-position: center;\n"
"    background-size: contain;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background: qlineargradient(\n"
"        x1: 0, y1: 0, x2: 0, y2: 1,\n"
"        stop: 0 rgba(150, 150, 255, 0.9),\n"
"        stop: 1 rgba(100, 100, 200, 1.0)\n"
"    ); /* \346\214\211\344\270\213\346\227\266\350\203\214\346\231\257\346\270\220\345\217\230 */\n"
"    border: 2px solid rgba(50, 50, 200, 1.0); /* \346\214\211\344\270\213\346\227\266\350\276\271\346\241\206\351\242\234\350\211\262 */\n"
"    box-shadow: inset 2px"
                        " 2px 5px rgba(0, 0, 0, 0.3); /* \345\206\205\345\207\271\351\230\264\345\275\261 */\n"
"    background-image: url(:/horizon.png); /* \350\256\276\347\275\256\350\203\214\346\231\257\345\233\276\347\211\207 */\n"
"    background-repeat: no-repeat;\n"
"    background-position: center;\n"
"    background-size: contain;\n"
"}\n"
""));
        vertical = new QPushButton(ShopWidget);
        vertical->setObjectName("vertical");
        vertical->setGeometry(QRect(70, 320, 61, 61));
        vertical->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background: transparent; /* \350\203\214\346\231\257\351\200\217\346\230\216 */\n"
"    border: none; /* \346\227\240\350\276\271\346\241\206 */\n"
"    background-image: url(:/vertical.png); /* \350\256\276\347\275\256\350\203\214\346\231\257\345\233\276\347\211\207 */\n"
"    background-repeat: no-repeat; /* \351\230\262\346\255\242\345\233\276\347\211\207\351\207\215\345\244\215 */\n"
"    background-position: center; /* \346\260\264\345\271\263\345\222\214\345\236\202\347\233\264\345\261\205\344\270\255 */\n"
"    background-size: contain; /* \345\233\276\347\211\207\347\274\251\346\224\276\344\273\245\351\200\202\345\272\224\346\214\211\351\222\256\345\244\247\345\260\217 */\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background: qlineargradient(\n"
"        x1: 0, y1: 0, x2: 0, y2: 1,\n"
"        stop: 0 rgba(220, 220, 255, 0.9),\n"
"        stop: 0.5 rgba(180, 180, 255, 0.7),\n"
"        stop: 1 rgba(130, 130, 255, 0.9)\n"
"    ); /* \346\202\254\345\201\234\346\227\266\350\203\214\346"
                        "\231\257\346\270\220\345\217\230 */\n"
"    border: 2px solid rgba(80, 80, 255, 0.9); /* \346\202\254\345\201\234\346\227\266\350\276\271\346\241\206\351\242\234\350\211\262 */\n"
"    box-shadow: 5px 5px 12px rgba(0, 0, 0, 0.3); /* \346\233\264\346\230\216\346\230\276\347\232\204\351\230\264\345\275\261 */  \n"
"  background-image: url(:/vertical.png); /* \350\256\276\347\275\256\350\203\214\346\231\257\345\233\276\347\211\207 */\n"
"\n"
"    background-repeat: no-repeat;\n"
"    background-position: center;\n"
"    background-size: contain;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background: qlineargradient(\n"
"        x1: 0, y1: 0, x2: 0, y2: 1,\n"
"        stop: 0 rgba(150, 150, 255, 0.9),\n"
"        stop: 1 rgba(100, 100, 200, 1.0)\n"
"    ); /* \346\214\211\344\270\213\346\227\266\350\203\214\346\231\257\346\270\220\345\217\230 */\n"
"    border: 2px solid rgba(50, 50, 200, 1.0); /* \346\214\211\344\270\213\346\227\266\350\276\271\346\241\206\351\242\234\350\211\262 */\n"
"    box-shadow: inset 2p"
                        "x 2px 5px rgba(0, 0, 0, 0.3); /* \345\206\205\345\207\271\351\230\264\345\275\261 */\n"
"    background-image: url(:/vertical.png); /* \350\256\276\347\275\256\350\203\214\346\231\257\345\233\276\347\211\207 */\n"
"    background-repeat: no-repeat;\n"
"    background-position: center;\n"
"    background-size: contain;\n"
"}\n"
""));
        Buy = new QPushButton(ShopWidget);
        Buy->setObjectName("Buy");
        Buy->setGeometry(QRect(350, 380, 141, 51));
        Buy->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
"    padding: 10px 20px; /* \345\206\205\350\276\271\350\267\235 */\n"
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
"        s"
                        "top: 0 rgba(255, 182, 193, 0.9), /* \346\214\211\344\270\213\351\241\266\351\203\250 */\n"
"        stop: 1 rgba(255, 160, 176, 1.0) /* \346\214\211\344\270\213\345\272\225\351\203\250 */\n"
"    );\n"
"    border: 2px solid rgba(255, 105, 135, 1.0); /* \346\214\211\344\270\213\346\227\266\350\276\271\346\241\206\351\242\234\350\211\262 */\n"
"    box-shadow: inset 2px 2px 5px rgba(0, 0, 0, 0.3); /* \345\206\205\345\207\271\351\230\264\345\275\261 */\n"
"}\n"
""));
        label_2 = new QLabel(ShopWidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(10, 0, 751, 51));
        label_2->setStyleSheet(QString::fromUtf8("\n"
"\n"
"\n"
"QLabel {\n"
"    background-color: #3E2723;  /* \346\267\261\345\222\226\345\225\241\350\211\262\350\203\214\346\231\257 */\n"
"    color: white;  /* \347\231\275\350\211\262\346\226\207\345\255\227 */\n"
"    border: 2px solid #5D4037;  /* \350\276\271\346\241\206\351\242\234\350\211\262\344\270\272\347\250\215\346\265\205\347\232\204\345\222\226\345\225\241\350\211\262 */\n"
"    border-radius: 5px;  /* \345\234\206\350\247\222\346\225\210\346\236\234 */\n"
"    padding: 10px;  /* \345\206\205\350\276\271\350\267\235 */\n"
"    text-align: center;  /* \346\226\207\345\255\227\345\261\205\344\270\255 */\n"
"    font-size: 14px;  /* \345\255\227\344\275\223\345\244\247\345\260\217 */\n"
"font: 18pt \"Broadway\";\n"
"}\n"
"\n"
"\n"
"QLabel:pressed {\n"
"    background-color: #5D4037;  /* \347\202\271\345\207\273\346\227\266\350\203\214\346\231\257\350\211\262\345\217\230\344\270\272\346\233\264\346\267\261\347\232\204\345\222\226\345\225\241\350\211\262 */\n"
"    border-color: #3E2723;  /* \347\202"
                        "\271\345\207\273\346\227\266\350\276\271\346\241\206\351\242\234\350\211\262\345\217\230\346\267\261 */\n"
"}\n"
""));
        label_4 = new QLabel(ShopWidget);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(20, 40, 111, 51));
        introduction = new QLabel(ShopWidget);
        introduction->setObjectName("introduction");
        introduction->setGeometry(QRect(310, 230, 251, 131));
        picture = new QLabel(ShopWidget);
        picture->setObjectName("picture");
        picture->setGeometry(QRect(329, 91, 231, 121));
        score = new QLabel(ShopWidget);
        score->setObjectName("score");
        score->setGeometry(QRect(140, 70, 171, 31));
        bombLabel = new QLabel(ShopWidget);
        bombLabel->setObjectName("bombLabel");
        bombLabel->setGeometry(QRect(140, 150, 71, 41));
        horizonLabel = new QLabel(ShopWidget);
        horizonLabel->setObjectName("horizonLabel");
        horizonLabel->setGeometry(QRect(140, 240, 111, 41));
        verticalLabel = new QLabel(ShopWidget);
        verticalLabel->setObjectName("verticalLabel");
        verticalLabel->setGeometry(QRect(140, 330, 111, 41));
        hammer = new QPushButton(ShopWidget);
        hammer->setObjectName("hammer");
        hammer->setGeometry(QRect(70, 400, 61, 51));
        hammer->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background: transparent; /* \350\203\214\346\231\257\351\200\217\346\230\216 */\n"
"    border: none; /* \346\227\240\350\276\271\346\241\206 */\n"
"    background-image: url(:/hammer.png); /* \350\256\276\347\275\256\350\203\214\346\231\257\345\233\276\347\211\207 */\n"
"    background-repeat: no-repeat; /* \351\230\262\346\255\242\345\233\276\347\211\207\351\207\215\345\244\215 */\n"
"    background-position: center; /* \346\260\264\345\271\263\345\222\214\345\236\202\347\233\264\345\261\205\344\270\255 */\n"
"    background-size: contain; /* \345\233\276\347\211\207\347\274\251\346\224\276\344\273\245\351\200\202\345\272\224\346\214\211\351\222\256\345\244\247\345\260\217 */\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background: qlineargradient(\n"
"        x1: 0, y1: 0, x2: 0, y2: 1,\n"
"        stop: 0 rgba(220, 220, 255, 0.9),\n"
"        stop: 0.5 rgba(180, 180, 255, 0.7),\n"
"        stop: 1 rgba(130, 130, 255, 0.9)\n"
"    ); /* \346\202\254\345\201\234\346\227\266\350\203\214\346"
                        "\231\257\346\270\220\345\217\230 */\n"
"    border: 2px solid rgba(80, 80, 255, 0.9); /* \346\202\254\345\201\234\346\227\266\350\276\271\346\241\206\351\242\234\350\211\262 */\n"
"    box-shadow: 5px 5px 12px rgba(0, 0, 0, 0.3); /* \346\233\264\346\230\216\346\230\276\347\232\204\351\230\264\345\275\261 */\n"
"    background-image: url(:/hammer.png); /* \344\277\235\347\225\231\350\203\214\346\231\257\345\233\276\347\211\207 */\n"
"    background-repeat: no-repeat;\n"
"    background-position: center;\n"
"    background-size: contain;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background: qlineargradient(\n"
"        x1: 0, y1: 0, x2: 0, y2: 1,\n"
"        stop: 0 rgba(150, 150, 255, 0.9),\n"
"        stop: 1 rgba(100, 100, 200, 1.0)\n"
"    ); /* \346\214\211\344\270\213\346\227\266\350\203\214\346\231\257\346\270\220\345\217\230 */\n"
"    border: 2px solid rgba(50, 50, 200, 1.0); /* \346\214\211\344\270\213\346\227\266\350\276\271\346\241\206\351\242\234\350\211\262 */\n"
"    box-shadow: inset 2px 2px 5"
                        "px rgba(0, 0, 0, 0.3); /* \345\206\205\345\207\271\351\230\264\345\275\261 */\n"
"    background-image: url(:/hammer.png); /* \344\277\235\347\225\231\350\203\214\346\231\257\345\233\276\347\211\207 */\n"
"    background-repeat: no-repeat;\n"
"    background-position: center;\n"
"    background-size: contain;\n"
"}\n"
""));
        hammerLabel = new QLabel(ShopWidget);
        hammerLabel->setObjectName("hammerLabel");
        hammerLabel->setGeometry(QRect(150, 410, 111, 41));

        retranslateUi(ShopWidget);

        QMetaObject::connectSlotsByName(ShopWidget);
    } // setupUi

    void retranslateUi(QWidget *ShopWidget)
    {
        ShopWidget->setWindowTitle(QCoreApplication::translate("ShopWidget", "Form", nullptr));
        bomb->setText(QCoreApplication::translate("ShopWidget", "bomb", nullptr));
        horizon->setText(QString());
        vertical->setText(QString());
        Buy->setText(QCoreApplication::translate("ShopWidget", "Buy!!!", nullptr));
        label_2->setText(QCoreApplication::translate("ShopWidget", "<html><head/><body><p align=\"center\">SHOP</p></body></html>", nullptr));
        label_4->setText(QCoreApplication::translate("ShopWidget", "\346\214\211esc\350\277\224\345\233\236\346\270\270\346\210\217", nullptr));
        introduction->setText(QString());
        picture->setText(QString());
        score->setText(QString());
        bombLabel->setText(QString());
        horizonLabel->setText(QString());
        verticalLabel->setText(QString());
        hammer->setText(QString());
        hammerLabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class ShopWidget: public Ui_ShopWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SHOPWIDGET_H
