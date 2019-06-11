#include "myslider.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MySlider w;
    w.show();
    return a.exec();
}
