#include "mydatetime.h"

MyDateTime::MyDateTime(QWidget *parent)
    : QWidget(parent)
{
    //ui.setupUi(this);
    qde = new QDateTimeEdit(QDateTime::currentDateTime(), this);
    qde->setDisplayFormat("yyyy-MM-dd hh:mm:ss:zzz");
    qde->setGeometry(10, 30, 250, 50);
}
