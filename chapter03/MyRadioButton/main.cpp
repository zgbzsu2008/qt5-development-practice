#include "myradiobutton.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MyRadioButton w;
    w.show();
    return a.exec();
}
