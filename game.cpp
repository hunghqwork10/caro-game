#include "game.h"
#include "square.h"
#include "global.h"

Game::Game(QWidget* parent) : QGraphicsView(parent)
{
    // tao GraphicsScene
    scene = new QGraphicsScene();
    setScene(scene);
    Global::is_current_X = true;

    size = 30;

    // ve ban co
    drawBoard();

    // hien thi QGraphicsScene
    show();
}

void Game::drawBoard()
{
    for(int i = 0; i < 15; i++) {
        for(int j = 0; j < 15; j++) {
            Square* square = new Square(i*size, j*size, size);
            scene->addItem(square);
        }
    }
}


