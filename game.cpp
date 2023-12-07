#include "game.h"
#include "square.h"
#include "global.h"
#include <QGraphicsProxyWidget>
#include <QLabel>

Game::Game(QWidget* parent) : QGraphicsView(parent)
{
    // tao GraphicsScene
    scene = new QGraphicsScene();
    setScene(scene);
    Global::is_current_X = true;

    size = 30;

    // Tạo bảng tỉ số
    // tao QLabel
    QLabel *scoreLabel = new QLabel(this);
    scoreLabel->setGeometry(QRect(QPoint(50, 0), QSize(200, 50)));

    // Giả sử ban đầu tỉ số là 0-0
    int scorePlayer1 = 0;
    int scorePlayer2 = 0;

    // Cập nhật tỉ số lên QLabel
    QString scoreText = "Player 1: " + QString::number(scorePlayer1) + " - Player 2: " + QString::number(scorePlayer2);
    scoreLabel->setText(scoreText);

    // thêm QLabel vào QGraphicsScene
    QGraphicsProxyWidget *proxy = scene->addWidget(scoreLabel);

    // ve ban co
    drawBoard();

    // đặt kích thước cố định cho cửa sổ game
    setFixedSize(560, 560);

    // hien thi QGraphicsScene
//    show();
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


