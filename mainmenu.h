#ifndef MAINMENU_H
#define MAINMENU_H

#include <QObject>
#include <QWidget>
#include <QPushButton>

class MainMenu : public QWidget
{
    Q_OBJECT

public:
    MainMenu(QWidget* parent = nullptr);

private slots:
    void handlePlayButton();
    void handleExitButton();
    void showMainMenu();
};

#endif // MAINMENU_H
