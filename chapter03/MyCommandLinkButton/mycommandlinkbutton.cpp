#include "mycommandlinkbutton.h"

MyCommandLinkButton::MyCommandLinkButton(QWidget *parent)
    : QWidget(parent)
{
    //ui.setupUi(this);

    cmmBtn = new QCommandLinkButton("Vision", "Vision Project", this);
    cmmBtn->setGeometry(50, 50, 200, 60);

    connect(cmmBtn, &QCommandLinkButton::clicked, this, &MyCommandLinkButton::clickFunc);
}

void MyCommandLinkButton::clickFunc() {}
