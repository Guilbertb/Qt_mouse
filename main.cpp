#include "testmouse.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    testMouse w;
    w.show();

    return a.exec();
}
