#include <QApplication>
#include <QGraphicsView>
#include <QGraphicsScene>
#include <QGraphicsRectItem>

#include "game.h"

int main(int argc, char* argv[]) {
    QApplication a(argc, argv);

    // tao game
    Game game;

    return a.exec();
}
