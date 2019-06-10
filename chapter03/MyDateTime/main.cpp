#include "mydatetime.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MyDateTime w;
    w.show();
    return a.exec();
}
