#ifndef MOUSE_H
#define MOUSE_H

#include <QWidget>

class mouse : public QWidget
{
    Q_OBJECT
public:
    explicit mouse(QWidget *parent = 0);

protected:
    int cx;
    int cy;

signals:

public slots:

protected slots:
    void mouseMoveEvent(QMouseEvent *);
    void paintEvent(QPaintEvent *);
};

#endif // MOUSE_H
