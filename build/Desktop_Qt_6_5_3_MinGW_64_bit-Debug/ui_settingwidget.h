/********************************************************************************
** Form generated from reading UI file 'settingwidget.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTINGWIDGET_H
#define UI_SETTINGWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_settingwidget
{
public:
    QPushButton *Easy;
    QPushButton *Medium;
    QPushButton *Hard;
    QPushButton *Jewel;
    QPushButton *Fruit;
    QPushButton *Vegetable;
    QPushButton *hell;
    QPushButton *pushButton;
    QLabel *label_settings;

    void setupUi(QWidget *settingwidget)
    {
        if (settingwidget->objectName().isEmpty())
            settingwidget->setObjectName("settingwidget");
        settingwidget->resize(1024, 768);
        Easy = new QPushButton(settingwidget);
        Easy->setObjectName("Easy");
        Easy->setGeometry(QRect(120, 180, 56, 18));
        Medium = new QPushButton(settingwidget);
        Medium->setObjectName("Medium");
        Medium->setGeometry(QRect(210, 180, 56, 18));
        Hard = new QPushButton(settingwidget);
        Hard->setObjectName("Hard");
        Hard->setGeometry(QRect(300, 180, 56, 18));
        Jewel = new QPushButton(settingwidget);
        Jewel->setObjectName("Jewel");
        Jewel->setGeometry(QRect(160, 250, 56, 18));
        Fruit = new QPushButton(settingwidget);
        Fruit->setObjectName("Fruit");
        Fruit->setGeometry(QRect(260, 250, 56, 18));
        Vegetable = new QPushButton(settingwidget);
        Vegetable->setObjectName("Vegetable");
        Vegetable->setGeometry(QRect(360, 250, 56, 18));
        hell = new QPushButton(settingwidget);
        hell->setObjectName("hell");
        hell->setGeometry(QRect(390, 180, 56, 18));
        pushButton = new QPushButton(settingwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(210, 310, 101, 41));
        label_settings = new QLabel(settingwidget);
        label_settings->setObjectName("label_settings");
        label_settings->setGeometry(QRect(210, 80, 131, 51));
        label_settings->setStyleSheet(QString::fromUtf8("font: 18pt \"Broadway\";\n"
"color: rgb(255, 255, 255);"));

        retranslateUi(settingwidget);

        QMetaObject::connectSlotsByName(settingwidget);
    } // setupUi

    void retranslateUi(QWidget *settingwidget)
    {
        settingwidget->setWindowTitle(QCoreApplication::translate("settingwidget", "Form", nullptr));
        Easy->setText(QCoreApplication::translate("settingwidget", "PushButton", nullptr));
        Medium->setText(QCoreApplication::translate("settingwidget", "PushButton", nullptr));
        Hard->setText(QCoreApplication::translate("settingwidget", "PushButton", nullptr));
        Jewel->setText(QCoreApplication::translate("settingwidget", "PushButton", nullptr));
        Fruit->setText(QCoreApplication::translate("settingwidget", "PushButton", nullptr));
        Vegetable->setText(QCoreApplication::translate("settingwidget", "PushButton", nullptr));
        hell->setText(QCoreApplication::translate("settingwidget", "PushButton", nullptr));
        pushButton->setText(QCoreApplication::translate("settingwidget", "RETURN", nullptr));
        label_settings->setText(QCoreApplication::translate("settingwidget", "Settings", nullptr));
    } // retranslateUi

};

namespace Ui {
    class settingwidget: public Ui_settingwidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTINGWIDGET_H
