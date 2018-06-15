#include "testmouse.h"
#include "ui_testmouse.h"

testMouse::testMouse(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::testMouse)
{
    ui->setupUi(this);
}

testMouse::~testMouse()
{
    delete ui;
}
