#pragma once

#include <QtWidgets/QWidget>
//#include "ui_mytablewidget.h"
#include <qtabwidget.h>

class MyTableWidget : public QWidget
{
    Q_OBJECT

public:
    MyTableWidget(QWidget *parent = Q_NULLPTR);

private slots:
    void currentTab(int index);

private:
    //Ui::MyTableWidgetClass ui;
    QTabWidget *tab;
};
