#include "square.h"

Square::Square(int x, int y, int size) : QGraphicsRectItem(x, y, size, size)
{

}

Square::~Square() {

}

void Square::mousePressEvent(QGraphicsSceneMouseEvent *event)
{
    if(!is_Filled) {
        QGraphicsTextItem* text = new QGraphicsTextItem(this);
        if(event->button() == Qt::LeftButton) {
            if(Global::is_current_X) {
                text->setPlainText("X");
                Global::is_current_X = false;
            } else {
                text->setPlainText("O");
                Global::is_current_X = true;
            }
            text->setPos(this->rect().center() + QPointF(-7.5f, -12.0f));
        }

        is_Filled = true;
    }
}
