#ifndef MOUSE_H
#define MOUSE_H

#include <QWidget>

class mouse : public QWidget
{
    Q_OBJECT
public:
    explicit mouse(QWidget *parent = 0);

signals:

public slots:

protected slots:
    void mousePressEvent(QMouseEvent *);
};

#endif // MOUSE_H
