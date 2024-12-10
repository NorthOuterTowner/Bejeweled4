#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "game.h"
#include <QLabel>
#include <QPushButton>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    StoneLabel::stoneMode="gemstone";
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    Game* gameDlg=Game::instance();//new Game();
    connect(gameDlg,&Game::returnMainwindow,this,&MainWindow::onReturnMainwindow);
    gameDlg->show();
    //gameDlg->init();
    this->hide();
}
void MainWindow::onReturnMainwindow(){
    this->show();
    Game::instance()->hide();
}

/*medium*/
void MainWindow::on_pushButton_3_clicked()
{
    difficulty=6;
}

/*easy*/
void MainWindow::on_pushButton_2_clicked()
{
    difficulty=4;
}

/*difficult*/
void MainWindow::on_pushButton_4_clicked()
{
    difficulty=8;
}


void MainWindow::on_pushButton_7_clicked()
{
    StoneLabel::stoneMode="Fruit";
}


void MainWindow::on_pushButton_6_clicked()
{
    StoneLabel::stoneMode="Vegetable";
}


void MainWindow::on_pushButton_8_clicked()
{
    difficulty=10;
}

