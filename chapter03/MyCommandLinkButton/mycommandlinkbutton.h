#pragma once

#include <QtWidgets/QWidget>
//#include "ui_mycommandlinkbutton.h"
#include <qcommandlinkbutton.h>

class MyCommandLinkButton : public QWidget
{
    Q_OBJECT

public:
    MyCommandLinkButton(QWidget *parent = Q_NULLPTR);

private slots:
    void clickFunc();

private:
    //Ui::MyCommandLinkButtonClass ui;

    QCommandLinkButton *cmmBtn;
};
