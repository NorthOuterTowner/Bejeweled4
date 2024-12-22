/********************************************************************************
** Form generated from reading UI file 'shopwidget.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
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
    QLabel *label;
    QPushButton *Buy;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;

    void setupUi(QWidget *ShopWidget)
    {
        if (ShopWidget->objectName().isEmpty())
            ShopWidget->setObjectName("ShopWidget");
        ShopWidget->resize(614, 551);
        bomb = new QPushButton(ShopWidget);
        bomb->setObjectName("bomb");
        bomb->setGeometry(QRect(100, 170, 61, 61));
        horizon = new QPushButton(ShopWidget);
        horizon->setObjectName("horizon");
        horizon->setGeometry(QRect(80, 240, 91, 71));
        vertical = new QPushButton(ShopWidget);
        vertical->setObjectName("vertical");
        vertical->setGeometry(QRect(90, 320, 91, 71));
        label = new QLabel(ShopWidget);
        label->setObjectName("label");
        label->setGeometry(QRect(0, 110, 521, 301));
        label->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    background-image: url(:/button/Level_back.png);  /* \350\256\276\347\275\256\350\203\214\346\231\257\345\233\276\347\211\207 */\n"
"    background-position: center;  /* \345\233\276\347\211\207\345\261\205\344\270\255 */\n"
"    background-repeat: no-repeat;  /* \347\246\201\346\255\242\351\207\215\345\244\215 */\n"
"    background-size: cover;  /* \347\241\256\344\277\235\350\203\214\346\231\257\345\233\276\347\211\207\350\246\206\347\233\226\346\225\264\344\270\252\346\240\207\347\255\276\357\274\214\350\243\201\345\211\252\345\244\232\344\275\231\351\203\250\345\210\206 */\n"
"    border: none;  /* \345\217\257\351\200\211\357\274\232\345\216\273\351\231\244\350\276\271\346\241\206 */\n"
"}\n"
""));
        Buy = new QPushButton(ShopWidget);
        Buy->setObjectName("Buy");
        Buy->setGeometry(QRect(290, 280, 91, 61));
        label_2 = new QLabel(ShopWidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(40, 410, 431, 41));
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
        label_3 = new QLabel(ShopWidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(90, 10, 331, 101));
        label_3->setStyleSheet(QString::fromUtf8("background-image: url(:/Level.png);"));
        label_4 = new QLabel(ShopWidget);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(49, 31, 41, 81));
        label->raise();
        bomb->raise();
        horizon->raise();
        vertical->raise();
        Buy->raise();
        label_2->raise();
        label_3->raise();
        label_4->raise();

        retranslateUi(ShopWidget);

        QMetaObject::connectSlotsByName(ShopWidget);
    } // setupUi

    void retranslateUi(QWidget *ShopWidget)
    {
        ShopWidget->setWindowTitle(QCoreApplication::translate("ShopWidget", "Form", nullptr));
        bomb->setText(QCoreApplication::translate("ShopWidget", "bomb", nullptr));
        horizon->setText(QCoreApplication::translate("ShopWidget", "horizon", nullptr));
        vertical->setText(QCoreApplication::translate("ShopWidget", "vertical", nullptr));
        label->setText(QString());
        Buy->setText(QCoreApplication::translate("ShopWidget", "Buy", nullptr));
        label_2->setText(QCoreApplication::translate("ShopWidget", "<html><head/><body><p align=\"center\">SHOP</p></body></html>", nullptr));
        label_3->setText(QString());
        label_4->setText(QCoreApplication::translate("ShopWidget", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ShopWidget: public Ui_ShopWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SHOPWIDGET_H
