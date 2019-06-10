#include "mytime.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MyTime w;
    w.show();
    return a.exec();
}
