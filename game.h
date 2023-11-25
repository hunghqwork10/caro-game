#ifndef GAME_H
#define GAME_H

#include <QApplication>
#include <QGraphicsView>
#include <QGraphicsScene>
#include <QGraphicsRectItem>

class Game : public QGraphicsView
{
public:
    Game(QWidget* parent = 0);

    // tao ban co caro 15x15
    void drawBoard();

private:
    QGraphicsScene* scene;
    int size;

public:
    bool is_current_X = true;
};

#endif // GAME_H
