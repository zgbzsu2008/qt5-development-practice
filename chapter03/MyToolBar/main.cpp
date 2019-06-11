#include "mytoolbar.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MyToolBar w;
    w.show();
    return a.exec();
}
