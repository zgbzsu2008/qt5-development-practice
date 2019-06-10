#include "mydate.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MyDate w;
    w.show();
    return a.exec();
}
