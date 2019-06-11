#pragma once

#include <QtWidgets/QWidget>
//#include "ui_myfontcombobox.h"

#include <qfontcombobox.h>
#include <qlabel.h>

class MyFontComboBox : public QWidget
{
    Q_OBJECT

public:
    MyFontComboBox(QWidget *parent = Q_NULLPTR);

private slots:
    void changedIndex(int idx);
    void changedFont(const QFont &f);

private:
    //Ui::MyFontComboBoxClass ui;
    QFontComboBox *fontcombo[5];
    QLabel *label;
};
