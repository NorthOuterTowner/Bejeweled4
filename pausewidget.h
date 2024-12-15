#ifndef PAUSEWIDGET_H
#define PAUSEWIDGET_H

#include <QWidget>
#include <QVBoxLayout>
#include <QPushButton>
#include <QLabel>

class PauseWidget : public QWidget
{
    Q_OBJECT
public:
    PauseWidget(QWidget *parent = nullptr);

private slots:
    void on_resumeButton_clicked();

private:
    QVBoxLayout *layout;
    QPushButton *resumeButton;
    QLabel *label;
};

#endif // PAUSEWIDGET_H
