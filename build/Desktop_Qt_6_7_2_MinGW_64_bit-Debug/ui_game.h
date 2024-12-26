/********************************************************************************
** Form generated from reading UI file 'game.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GAME_H
#define UI_GAME_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Game
{
public:
    QPushButton *pushButton_2;
    QLabel *timerLabel;
    QProgressBar *progressBar;
    QPushButton *pauseButton;
    QLCDNumber *lcdNumber;
    QLabel *scoreLabel;
    QPushButton *pushButton_5;
    QPushButton *horizon;
    QPushButton *vertical;
    QPushButton *bombButton;
    QPushButton *Tips;
    QLabel *hintRemain;
    QPushButton *Shop;
    QLabel *bombLabel;
    QLabel *horizonLabel;
    QLabel *verticalLabel;
    QLabel *passScoreLabel;
    QTextBrowser *textBrowser;
    QLabel *levelNumLabel;
    QPushButton *hammer;
    QLabel *hammerLabel;
    QLabel *iceNumLabel;

    void setupUi(QWidget *Game)
    {
        if (Game->objectName().isEmpty())
            Game->setObjectName("Game");
        Game->resize(800, 601);
        pushButton_2 = new QPushButton(Game);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(660, 10, 101, 31));
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
        timerLabel = new QLabel(Game);
        timerLabel->setObjectName("timerLabel");
        timerLabel->setGeometry(QRect(480, 490, 41, 21));
        timerLabel->setTabletTracking(false);
        timerLabel->setFocusPolicy(Qt::FocusPolicy::NoFocus);
        timerLabel->setStyleSheet(QString::fromUtf8("QLabel {\n"
"        font: italic 18pt \"Monotype Corsiva\";\n"
"    border: 1px solid #ddd;         /* \350\276\271\346\241\206\351\242\234\350\211\262 */\n"
"    border-radius: 5px;             /* \350\276\271\346\241\206\345\234\206\350\247\222 */\n"
"}\n"
"\n"
"QLabel[alignment=\"center\"] {\n"
"    text-align: center;             /* \346\226\207\346\234\254\345\261\205\344\270\255\345\257\271\351\275\220 */\n"
"}"));
        timerLabel->setScaledContents(true);
        timerLabel->setWordWrap(true);
        progressBar = new QProgressBar(Game);
        progressBar->setObjectName("progressBar");
        progressBar->setGeometry(QRect(97, 490, 381, 23));
        progressBar->setStyleSheet(QString::fromUtf8("QProgressBar {\n"
"    border: 1px solid #ccc;         /* \350\277\233\345\272\246\346\235\241\350\276\271\346\241\206\351\242\234\350\211\262 */\n"
"    border-radius: 5px;             /* \350\277\233\345\272\246\346\235\241\345\234\206\350\247\222 */\n"
"    background: #eee;               /* \350\277\233\345\272\246\346\235\241\350\203\214\346\231\257\351\242\234\350\211\262 */\n"
"    padding: 2px;                   /* \345\206\205\350\276\271\350\267\235 */\n"
"}\n"
"\n"
"QProgressBar::chunk {\n"
"    background: #3498db;            /* \350\277\233\345\272\246\346\235\241\345\241\253\345\205\205\351\242\234\350\211\262 */\n"
"    width: 20px;                    /* \345\241\253\345\205\205\345\235\227\345\256\275\345\272\246 */\n"
"    border-radius: 5px;             /* \345\241\253\345\205\205\345\235\227\345\234\206\350\247\222 */\n"
"}"));
        progressBar->setValue(100);
        pauseButton = new QPushButton(Game);
        pauseButton->setObjectName("pauseButton");
        pauseButton->setGeometry(QRect(0, 60, 91, 41));
        pauseButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        lcdNumber = new QLCDNumber(Game);
        lcdNumber->setObjectName("lcdNumber");
        lcdNumber->setGeometry(QRect(650, 90, 111, 41));
        lcdNumber->setStyleSheet(QString::fromUtf8(""));
        scoreLabel = new QLabel(Game);
        scoreLabel->setObjectName("scoreLabel");
        scoreLabel->setGeometry(QRect(610, 100, 69, 19));
        scoreLabel->setStyleSheet(QString::fromUtf8("font: 12pt \"Elephant\";\n"
"color: rgb(255, 255, 255);"));
        pushButton_5 = new QPushButton(Game);
        pushButton_5->setObjectName("pushButton_5");
        pushButton_5->setGeometry(QRect(660, 50, 101, 31));
        pushButton_5->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        horizon = new QPushButton(Game);
        horizon->setObjectName("horizon");
        horizon->setGeometry(QRect(710, 340, 51, 41));
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
        vertical = new QPushButton(Game);
        vertical->setObjectName("vertical");
        vertical->setGeometry(QRect(710, 390, 51, 41));
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
        bombButton = new QPushButton(Game);
        bombButton->setObjectName("bombButton");
        bombButton->setGeometry(QRect(710, 290, 51, 41));
        bombButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        bombButton->setIconSize(QSize(100, 100));
        Tips = new QPushButton(Game);
        Tips->setObjectName("Tips");
        Tips->setGeometry(QRect(650, 230, 111, 41));
        Tips->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        hintRemain = new QLabel(Game);
        hintRemain->setObjectName("hintRemain");
        hintRemain->setGeometry(QRect(650, 190, 111, 31));
        hintRemain->setStyleSheet(QString::fromUtf8(""));
        Shop = new QPushButton(Game);
        Shop->setObjectName("Shop");
        Shop->setGeometry(QRect(650, 510, 111, 41));
        Shop->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        bombLabel = new QLabel(Game);
        bombLabel->setObjectName("bombLabel");
        bombLabel->setGeometry(QRect(660, 290, 51, 41));
        bombLabel->setStyleSheet(QString::fromUtf8(" QLabel {\n"
"            background-color: rgba(255, 255, 255, 0.7); /* \345\215\212\351\200\217\346\230\216\347\231\275\350\211\262\350\203\214\346\231\257 */\n"
"            border: 1px solid rgba(200, 200, 200, 0.8); /* \346\237\224\345\222\214\350\276\271\346\241\206 */\n"
"            border-radius: 10px; /* \345\234\206\350\247\222\346\225\210\346\236\234 */\n"
"            font-size: 18px; /* \345\255\227\344\275\223\345\244\247\345\260\217 */\n"
"            font-family: \"Arial\", sans-serif; /* \345\255\227\344\275\223\346\240\267\345\274\217 */\n"
"            color: rgba(50, 50, 50, 0.9); /* \345\255\227\344\275\223\351\242\234\350\211\262 */\n"
"            padding: 5px; /* \345\206\205\350\276\271\350\267\235 */\n"
"        }"));
        horizonLabel = new QLabel(Game);
        horizonLabel->setObjectName("horizonLabel");
        horizonLabel->setGeometry(QRect(660, 340, 51, 41));
        horizonLabel->setStyleSheet(QString::fromUtf8(" QLabel {\n"
"            background-color: rgba(255, 255, 255, 0.7); /* \345\215\212\351\200\217\346\230\216\347\231\275\350\211\262\350\203\214\346\231\257 */\n"
"            border: 1px solid rgba(200, 200, 200, 0.8); /* \346\237\224\345\222\214\350\276\271\346\241\206 */\n"
"            border-radius: 10px; /* \345\234\206\350\247\222\346\225\210\346\236\234 */\n"
"            font-size: 18px; /* \345\255\227\344\275\223\345\244\247\345\260\217 */\n"
"            font-family: \"Arial\", sans-serif; /* \345\255\227\344\275\223\346\240\267\345\274\217 */\n"
"            color: rgba(50, 50, 50, 0.9); /* \345\255\227\344\275\223\351\242\234\350\211\262 */\n"
"            padding: 5px; /* \345\206\205\350\276\271\350\267\235 */\n"
"        }"));
        verticalLabel = new QLabel(Game);
        verticalLabel->setObjectName("verticalLabel");
        verticalLabel->setGeometry(QRect(660, 390, 51, 41));
        verticalLabel->setStyleSheet(QString::fromUtf8(" QLabel {\n"
"            background-color: rgba(255, 255, 255, 0.7); /* \345\215\212\351\200\217\346\230\216\347\231\275\350\211\262\350\203\214\346\231\257 */\n"
"            border: 1px solid rgba(200, 200, 200, 0.8); /* \346\237\224\345\222\214\350\276\271\346\241\206 */\n"
"            border-radius: 10px; /* \345\234\206\350\247\222\346\225\210\346\236\234 */\n"
"            font-size: 18px; /* \345\255\227\344\275\223\345\244\247\345\260\217 */\n"
"            font-family: \"Arial\", sans-serif; /* \345\255\227\344\275\223\346\240\267\345\274\217 */\n"
"            color: rgba(50, 50, 50, 0.9); /* \345\255\227\344\275\223\351\242\234\350\211\262 */\n"
"            padding: 5px; /* \345\206\205\350\276\271\350\267\235 */\n"
"        }"));
        passScoreLabel = new QLabel(Game);
        passScoreLabel->setObjectName("passScoreLabel");
        passScoreLabel->setGeometry(QRect(590, 150, 51, 20));
        passScoreLabel->setStyleSheet(QString::fromUtf8("font: 12pt \"Elephant\";\n"
"color: rgb(255, 255, 255);"));
        textBrowser = new QTextBrowser(Game);
        textBrowser->setObjectName("textBrowser");
        textBrowser->setGeometry(QRect(650, 140, 111, 41));
        textBrowser->setStyleSheet(QString::fromUtf8("font: 700 12pt \"Microsoft YaHei UI\";"));
        levelNumLabel = new QLabel(Game);
        levelNumLabel->setObjectName("levelNumLabel");
        levelNumLabel->setGeometry(QRect(90, 20, 71, 31));
        levelNumLabel->setStyleSheet(QString::fromUtf8("font: 700 12pt \"Microsoft YaHei UI\";"));
        hammer = new QPushButton(Game);
        hammer->setObjectName("hammer");
        hammer->setGeometry(QRect(710, 440, 51, 41));
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
        hammer->setIconSize(QSize(450, 450));
        hammer->setAutoRepeatDelay(500);
        hammerLabel = new QLabel(Game);
        hammerLabel->setObjectName("hammerLabel");
        hammerLabel->setGeometry(QRect(660, 440, 51, 41));
        hammerLabel->setStyleSheet(QString::fromUtf8(" QLabel {\n"
"            background-color: rgba(255, 255, 255, 0.7); /* \345\215\212\351\200\217\346\230\216\347\231\275\350\211\262\350\203\214\346\231\257 */\n"
"            border: 1px solid rgba(200, 200, 200, 0.8); /* \346\237\224\345\222\214\350\276\271\346\241\206 */\n"
"            border-radius: 10px; /* \345\234\206\350\247\222\346\225\210\346\236\234 */\n"
"            font-size: 18px; /* \345\255\227\344\275\223\345\244\247\345\260\217 */\n"
"            font-family: \"Arial\", sans-serif; /* \345\255\227\344\275\223\346\240\267\345\274\217 */\n"
"            color: rgba(50, 50, 50, 0.9); /* \345\255\227\344\275\223\351\242\234\350\211\262 */\n"
"            padding: 5px; /* \345\206\205\350\276\271\350\267\235 */\n"
"        }"));
        iceNumLabel = new QLabel(Game);
        iceNumLabel->setObjectName("iceNumLabel");
        iceNumLabel->setGeometry(QRect(250, 20, 121, 31));
        iceNumLabel->setStyleSheet(QString::fromUtf8("font: 700 12pt \"Microsoft YaHei UI\";"));
        pushButton_2->raise();
        timerLabel->raise();
        progressBar->raise();
        pauseButton->raise();
        lcdNumber->raise();
        scoreLabel->raise();
        pushButton_5->raise();
        horizon->raise();
        vertical->raise();
        bombButton->raise();
        Tips->raise();
        hintRemain->raise();
        Shop->raise();
        bombLabel->raise();
        horizonLabel->raise();
        verticalLabel->raise();
        passScoreLabel->raise();
        textBrowser->raise();
        levelNumLabel->raise();
        hammerLabel->raise();
        hammer->raise();
        iceNumLabel->raise();

        retranslateUi(Game);

        QMetaObject::connectSlotsByName(Game);
    } // setupUi

    void retranslateUi(QWidget *Game)
    {
        Game->setWindowTitle(QCoreApplication::translate("Game", "GameDlg", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Game", "\346\216\222\350\241\214\346\246\234", nullptr));
        timerLabel->setText(QCoreApplication::translate("Game", "--", nullptr));
        progressBar->setFormat(QString());
        pauseButton->setText(QCoreApplication::translate("Game", "\346\232\202\345\201\234", nullptr));
        scoreLabel->setText(QCoreApplication::translate("Game", "\345\210\206\346\225\260\357\274\232", nullptr));
        pushButton_5->setText(QCoreApplication::translate("Game", "\351\207\215\347\275\256", nullptr));
        horizon->setText(QString());
        vertical->setText(QString());
        bombButton->setText(QString());
        Tips->setText(QCoreApplication::translate("Game", "Tips", nullptr));
        hintRemain->setText(QCoreApplication::translate("Game", "\345\211\251\344\275\231\357\274\232", nullptr));
        Shop->setText(QCoreApplication::translate("Game", "Shop", nullptr));
        bombLabel->setText(QString());
        horizonLabel->setText(QString());
        verticalLabel->setText(QString());
        passScoreLabel->setText(QCoreApplication::translate("Game", "\347\233\256\346\240\207\345\276\227\345\210\206\357\274\232", nullptr));
        textBrowser->setHtml(QCoreApplication::translate("Game", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Microsoft YaHei UI'; font-size:12pt; font-weight:700; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:9pt; font-weight:400;\">\342\200\224\342\200\224 \342\200\224\342\200\224</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
        levelNumLabel->setText(QCoreApplication::translate("Game", "\345\205\263\345\215\241 -- --", nullptr));
        hammer->setText(QString());
        hammerLabel->setText(QString());
        iceNumLabel->setText(QCoreApplication::translate("Game", "\345\206\260\345\235\227 -- --/-- --", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Game: public Ui_Game {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GAME_H
