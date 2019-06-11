#include "mypushbutton.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MyPushButton w;
    w.show();
    return a.exec();
}
