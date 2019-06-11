#pragma once

#include <QtWidgets/QWidget>
//#include "ui_mysizegrip.h"
#include <qsizegrip.h>
#include <qlayout.h>
#include <qtextedit.h>

class SubWindow : public QWidget
{
    Q_OBJECT

public:
    SubWindow(QWidget *parent = nullptr);
    QSize sizeHint() const { return QSize(200, 100); }
};

class MySizeGrip : public QWidget
{
    Q_OBJECT

public:
    MySizeGrip(QWidget *parent = Q_NULLPTR);

private:
    // Ui::MySizeGripClass ui;
};
