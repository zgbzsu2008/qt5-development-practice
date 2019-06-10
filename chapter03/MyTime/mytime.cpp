#include "mytime.h"
#include <qdebug.h>

MyTime::MyTime(QWidget *parent)
    : QWidget(parent)
{
    // ui.setupUi(this);
    QTime ti = QTime(6, 24, 55, 432);
    ti.addMSecs(3);
    ti.addSecs(4);

    QTime ti2 = QTime::currentTime();
    qte = new QTimeEdit(ti2, this);
    qte->setDisplayFormat("HH:mm:ss");
    qte->setGeometry(10, 30, 250, 30);

    QTime ti3;
    ti3.start();
    long long sum = 0;
    for (int i = 0; i < 10000; ++i) {
        for (int j = 0; j < 10000; ++j) {
            sum += i * j;
        }
    }
    qDebug() << sum << ti3.elapsed();

    QTime ti4 = QTime::fromString("03:32", "hh:mm");
    qDebug() << ti4;
}
