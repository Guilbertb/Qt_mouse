#include "mouse.h"
#include <QMouseEvent>
#include <QDebug>
#include <QPainter>

mouse::mouse(QWidget *parent) :
    QWidget(parent)
{
}


void mouse::mouseMoveEvent(QMouseEvent * mouse_ev)

{
qDebug() << mouse_ev->pos();
cx=mouse_ev->pos().x();
cy=mouse_ev->pos().y();
update();
}


void mouse::paintEvent(QPaintEvent *)
{
    QPainter painter(this);
    QPen pen(Qt::red,10);
    painter.setPen(pen);

    painter.drawPoint(cx,cy);

}
