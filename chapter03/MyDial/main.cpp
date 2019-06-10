#include "mydial.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MyDial w;
    w.show();
    return a.exec();
}
