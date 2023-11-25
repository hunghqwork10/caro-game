#ifndef SQUARE_H
#define SQUARE_H

#include <QGraphicsSceneMouseEvent>
#include "qgraphicsitem.h"
#include "global.h"

class Square : public QGraphicsRectItem
{
public:
    Square(int x, int y, int size);
    ~Square();

    void mousePressEvent(QGraphicsSceneMouseEvent *event) override;

private:
    bool is_Filled = false;
};

#endif // SQUARE_H
