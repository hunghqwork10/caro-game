#include <QApplication>
#include "mainmenu.h"

int main(int argc, char* argv[]) {
    QApplication a(argc, argv);

    MainMenu menu;
    menu.resize(400, 200);
    menu.show();

    return a.exec();
}
