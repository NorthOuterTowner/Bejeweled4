#ifndef SETTING_H
#define SETTING_H

#include <QDialog>
#include <QPushButton>
#include <QString>
#include<ui_settingwidget.h>
#include<QWidget>
#include<stonelabel.h>
#include "globalValue.h" // 引入 globalValue 的头文件

class settingwidget : public QDialog {
    Q_OBJECT

public:
    explicit settingwidget(QWidget *parent = nullptr);
    ~settingwidget();

    int getDifficulty() const { return difficulty; }
    std::string getMode() const { return stoneMode; }
 Ui::settingwidget * ui;  // 实例化 Ui::settingwidget
private slots:
    // void onEasyClicked();
    // void onMediumClicked();
    // void onHardClicked();
    // void onVeryHardClicked();
    // void onFruitModeClicked();
    // void onVegetableModeClicked();


    void on_Easy_clicked();

    void on_Medium_clicked();

    void on_Hard_clicked();

    void on_hell_clicked();

    void on_Jewel_clicked();

    void on_Fruit_clicked();

    void on_Vegetable_clicked();

    void on_pushButton_clicked();

    void paintEvent(QPaintEvent *);

private:
    int difficulty;  // 选择的难度
    std::string stoneMode;    // 选择的模式

    int imageX;
    int imageY;
    QSize imageSize;
    QPixmap pixmap;

    void updateImageSizeAndPosition();  // 更新图片位置和大小

    // 保存窗体的大小和位置
    QSize lastWindowSize;
    int lastWindowX, lastWindowY;
};

#endif // SETTING_H
