#include "myscrollbar.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MyScrollBar w;
    w.show();
    return a.exec();
}
