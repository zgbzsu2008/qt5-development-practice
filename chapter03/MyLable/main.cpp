#include "mylable.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MyLable w;
    w.show();
    return a.exec();
}
