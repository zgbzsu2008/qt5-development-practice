#include "mysizegrip.h"

SubWindow::SubWindow(QWidget *parent)
    : QWidget(parent, Qt::SubWindow)
{
    QSizeGrip *sizegrip = new QSizeGrip(this);
    sizegrip->setFixedSize(sizegrip->sizeHint());
    this->setLayout(new QVBoxLayout);
    this->layout()->setMargin(0);
    layout()->addWidget(new QTextEdit);

    sizegrip->setWindowFlag(Qt::WindowStaysOnTopHint);
    sizegrip->raise();
}

MySizeGrip::MySizeGrip(QWidget *parent)
    : QWidget(parent)
{
    //ui.setupUi(this);
}
