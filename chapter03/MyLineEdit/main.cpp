#include "mylineedit.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MyLineEdit w;
    w.show();
    return a.exec();
}
