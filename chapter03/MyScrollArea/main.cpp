#include "myscrollarea.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MyScrollArea w;
    w.show();
    return a.exec();
}
