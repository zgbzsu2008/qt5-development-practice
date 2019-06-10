#pragma once

#include <QtWidgets/QWidget>
//#include "ui_mycombobox.h"
#include <qcombobox.h>

class MyComboBox : public QWidget
{
    Q_OBJECT

public:
    MyComboBox(QWidget *parent = Q_NULLPTR);

private slots:
    void valueChanged();

private:
    //Ui::MyComboBoxClass ui;
    QComboBox *combo;
};
