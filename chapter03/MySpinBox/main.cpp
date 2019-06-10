#include "myspinbox.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MySpinBox w;
    w.show();
    return a.exec();
}
