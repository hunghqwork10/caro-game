#ifndef MAINMENU_H
#define MAINMENU_H

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
};

#endif // MAINMENU_H
