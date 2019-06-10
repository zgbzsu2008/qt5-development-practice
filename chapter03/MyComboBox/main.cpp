#include "mycombobox.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MyComboBox w;
    w.show();
    return a.exec();
}
