#include "mainmenu.h"
#include "game.h"
#include <QVBoxLayout>

MainMenu::MainMenu(QWidget* parent) : QWidget(parent)
{
    QPushButton* playButton = new QPushButton("Play");
    QPushButton* exitButton = new QPushButton("Exit");

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
    game->show();

    close();
}

void MainMenu::handleExitButton()
{
    close();
}
