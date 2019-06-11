#include "myscrollarea.h"

MyScrollArea::MyScrollArea(QWidget *parent)
    : QWidget(parent)
{
    //ui.setupUi(this);

    label = new QLabel(this);
    QImage image("resources/2.jpg");
    label->setPixmap(QPixmap::fromImage(image));

    area = new QScrollArea(this);
    area->setWidget(label);
    area->setBackgroundRole(QPalette::Dark);
    area->setGeometry(0, 0, image.width(), image.height()-60);
}
