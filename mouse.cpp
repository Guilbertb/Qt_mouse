#include "mouse.h"
#include <QMouseEvent>
#include <QDebug>

mouse::mouse(QWidget *parent) :
    QWidget(parent)
{
}


void mouse::mousePressEvent(QMouseEvent *)

{
qDebug() << "clic souris";
}
