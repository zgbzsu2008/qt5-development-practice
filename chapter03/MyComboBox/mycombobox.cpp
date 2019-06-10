#include "mycombobox.h"
#include <qdebug.h>

MyComboBox::MyComboBox(QWidget *parent)
    : QWidget(parent)
{
    // ui.setupUi(this);

    combo = new QComboBox(this);
    combo->setGeometry(50, 50, 150, 30);
    combo->addItem("Application");
    combo->addItem("Graphics");
    combo->addItem("Database");
    combo->addItem("Network");

    combo->addItem(QIcon("resources/1.jpg"), "Application");
    combo->addItem(QIcon("resources/2.jpg"), "Graphics");
    combo->addItem(QIcon("resources/3.jpg"), "Database");

    connect(combo, (void (QComboBox::*)(int))(&QComboBox::currentIndexChanged), this, &MyComboBox::valueChanged);
}

void MyComboBox::valueChanged()
{
    int current_index = combo->currentIndex();
    qDebug() << "current combobox index : " << current_index;
    qDebug() << "current combobox text : " << combo->currentText();
    qDebug() << "Total Items : " << combo->count();
}
