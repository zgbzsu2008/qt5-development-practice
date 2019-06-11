#include "mylable.h"

MyLable::MyLable(QWidget *parent)
    : QWidget(parent)
{
    //ui.setupUi(this);

    label[0] = new QLabel("I love Qt programming", this);
    label[0]->setGeometry(10, 30, 200, 40);

    label[1] = new QLabel(this);
    QPixmap pix = QPixmap("resources/1.png");
    label[1]->setPixmap(pix);
    label[1]->setGeometry(10, 70, 100, 100);

    lcd[0] = new QLCDNumber(2, this);
    lcd[0]->setSegmentStyle(QLCDNumber::Outline);
    lcd[0]->display(24);
    lcd[0]->setGeometry(150, 30, 200, 100);
   
    lcd[1] = new QLCDNumber(5, this);
    lcd[1]->setSegmentStyle(QLCDNumber::Flat);
    lcd[1]->display("10:34");
    lcd[1]->setGeometry(150, 140, 200, 100);
    
}
