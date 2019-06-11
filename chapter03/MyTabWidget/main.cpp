#include "mytabwidget.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MyTabWidget w;
    w.show();
    return a.exec();
}
