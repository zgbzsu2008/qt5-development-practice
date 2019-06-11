#include "myfontcombobox.h"

#include <qdebug.h>

MyFontComboBox::MyFontComboBox(QWidget *parent)
    : QWidget(parent)
{
    // ui.setupUi(this);

    int ypos = 30;
    for (int i = 0; i < 5; ++i) {
        fontcombo[i] = new QFontComboBox(this);
        fontcombo[i]->setGeometry(10, ypos, 300, 30);
        ypos += 40;
    }

    fontcombo[0]->setFontFilters(QFontComboBox::AllFonts);
    fontcombo[1]->setFontFilters(QFontComboBox::ScalableFonts);
    fontcombo[2]->setFontFilters(QFontComboBox::NonScalableFonts);
    fontcombo[3]->setFontFilters(QFontComboBox::MonospacedFonts);
    fontcombo[4]->setFontFilters(QFontComboBox::ProportionalFonts);

    label = new QLabel("I love Qt programming", this);
    label->setGeometry(10, ypos, 200, 30);

    connect(fontcombo[0], (void (QFontComboBox::*)(int))(&QFontComboBox::currentIndexChanged), this,
            &MyFontComboBox::changedIndex);

    connect(fontcombo[0], (&QFontComboBox::currentFontChanged), this, &MyFontComboBox::changedFont);
}

void MyFontComboBox::changedIndex(int idx) {

    qDebug() << "changed index : " << idx;
}

void MyFontComboBox::changedFont(const QFont &f) {

    label->setFont(f);
}
