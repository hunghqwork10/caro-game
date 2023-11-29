#include "mainmenu.h"
#include "game.h"
#include <QVBoxLayout>
#include <QMainWindow>

MainMenu::MainMenu(QWidget* parent) : QWidget(parent)
{
    QPushButton* playButton = new QPushButton("Play");
    QPushButton* exitButton = new QPushButton("Exit");

    playButton->setStyleSheet(
        "QPushButton { background-color: #2ecc71; color: white; font-size: 20px; } QPushButton:hover { background-color: #27ae60; }"
        );
    exitButton->setStyleSheet(
        "QPushButton { background-color: #e47c3c; color: white; font-size: 20px; } QPushButton:hover { background-color: #c0392b; }"
        );

    QVBoxLayout* layout = new QVBoxLayout;
    layout->addWidget(playButton);
    layout->addWidget(exitButton);

    setLayout(layout);

    connect(playButton, SIGNAL(clicked()), this, SLOT(handlePlayButton()));
    connect(exitButton, SIGNAL(clicked()), this, SLOT(handleExitButton()));
}

void MainMenu::handlePlayButton()
{
    Game* game = new Game();
    game->setAttribute(Qt::WA_DeleteOnClose);
    connect(game, SIGNAL(destroyed(QObject*)), this, SLOT(showMainMenu()));
    game->show();

    hide();
}

void MainMenu::handleExitButton()
{
    close();
}

void MainMenu::showMainMenu()
{
    qDebug() << "Is MainMenu visible? " << isVisible();
    show();
}
