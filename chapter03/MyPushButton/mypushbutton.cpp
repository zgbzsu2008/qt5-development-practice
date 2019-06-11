#include "mypushbutton.h"
#include <qdebug.h>

MyPushButton::MyPushButton(QWidget *parent)
    : QWidget(parent)
{
    // ui.setupUi(this);

    int ypos = 30;
    for (int i = 0; i < 3; ++i) {
        btn[i] = new QPushButton(QString("Frame's button %1").arg(i), this);
        btn[i]->setGeometry(10, ypos, 300, 40);
        ypos += 50;
    }

    connect(btn[0], &QPushButton::clicked, this, &MyPushButton::clicked);
    connect(btn[0], &QPushButton::pressed, this, &MyPushButton::pressed);
    connect(btn[0], &QPushButton::released, this, &MyPushButton::released);

    btn_frame = new QFocusFrame(this);
    btn_frame->setWidget(btn[2]);
    btn_frame->setAutoFillBackground(true);
}

void MyPushButton::clicked()
{
    qDebug() << "clicked";
}

void MyPushButton::pressed()
{
    qDebug() << "pressed";
}

void MyPushButton::released()
{
    qDebug() << "released";
}
