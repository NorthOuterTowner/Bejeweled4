#include "rankdialog.h"
#include "ui_rankdialog.h"

RankDialog::RankDialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::RankDialog)
{
    ui->setupUi(this);
}

RankDialog::~RankDialog()
{
    delete ui;
}

void RankDialog::on_pushButton_clicked()
{
    close();
}

