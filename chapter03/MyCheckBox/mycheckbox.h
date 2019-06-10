#pragma once

#include <QtWidgets/QWidget>
//#include "ui_mycheckbox.h"
#include <qcheckbox.h>
#include <qbuttongroup.h>

class MyCheckBox : public QWidget
{
    Q_OBJECT

public:
    MyCheckBox(QWidget *parent = Q_NULLPTR);

private slots:
    void chkChanged();

private:
    // Ui::MyCheckBoxClass ui;
    QButtonGroup *chk_group[2];
    QCheckBox *execlusive[3];
    QCheckBox *non_execlusive[3];
};
