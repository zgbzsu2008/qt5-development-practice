#pragma once

#include <QtWidgets/QWidget>
//#include "ui_mylineedit.h"

#include <qlineedit.h>
#include <qlabel.h>

class MyLineEdit : public QWidget
{
    Q_OBJECT

public:
    MyLineEdit(QWidget *parent = Q_NULLPTR);

private slots:
    void textChanged(QString str);

private:
    // Ui::MyLineEditClass ui;
    QLineEdit *edit[5];
    QLabel *label;
};
