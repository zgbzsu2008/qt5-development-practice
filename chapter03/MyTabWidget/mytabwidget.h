#pragma once

#include <QtWidgets/QWidget>
#include "ui_mytabwidget.h"

#include <qtabwidget.h>
#include <qtabbar.h>

class MyTabWidget : public QWidget
{
    Q_OBJECT

public:
    MyTabWidget(QWidget *parent = Q_NULLPTR);

private slots:
    void currentTab(int index);

private:
    Ui::MyTabWidgetClass ui;

    QTabWidget *tab;
    QTabBar *tabbar;
};
