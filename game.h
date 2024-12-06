#ifndef GAME_H
#define GAME_H

#include "stonelabel.h"
#include <QWidget>
#include <QMouseEvent>
#include <QLabel>

namespace Ui {
class Game;
}

class Game : public QWidget
{

public:
    ~Game();
    static Game* instance(QWidget* parent = nullptr);
    void init();
    void update();

private:
    explicit Game(QWidget *parent = nullptr);
    static Game* gameInstance;
    void mousePressEvent(QMouseEvent *event) override;
    bool waitforchage=false;
    StoneLabel *firstLabel=nullptr;
    StoneLabel *secondLabel=nullptr;
    Ui::Game *ui;
};

#endif // GAME_H
