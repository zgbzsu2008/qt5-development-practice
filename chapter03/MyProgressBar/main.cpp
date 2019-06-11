#include "myprogressbar.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MyProgressBar w;
    w.show();
    return a.exec();
}
