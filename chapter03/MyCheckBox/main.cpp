#include "mycheckbox.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MyCheckBox w;
    w.show();
    return a.exec();
}
