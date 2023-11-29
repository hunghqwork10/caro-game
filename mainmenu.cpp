#include "mainmenu.h"
#include "game.h"
#include <QVBoxLayout>
#include <QMainWindow>

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
