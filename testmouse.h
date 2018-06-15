#ifndef TESTMOUSE_H
#define TESTMOUSE_H

#include <QMainWindow>

namespace Ui {
class testMouse;
}

class testMouse : public QMainWindow
{
    Q_OBJECT

public:
    explicit testMouse(QWidget *parent = 0);
    ~testMouse();

private:
    Ui::testMouse *ui;
};

#endif // TESTMOUSE_H
