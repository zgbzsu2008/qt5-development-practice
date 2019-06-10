#include "mydate.h"
#include <qdebug.h>

MyDate::MyDate(QWidget *parent)
    : QWidget(parent)
{
    //ui.setupUi(this);

    QDate dt1 = QDate(2013, 11, 7);
    QDate dt2 = QDate::currentDate();

    dateEdit[0] = new QDateEdit(dt1.addYears(2), this);
    dateEdit[0]->setGeometry(10, 10, 140, 40);

    dateEdit[1] = new QDateEdit(dt1.addMonths(3), this);
    dateEdit[1]->setGeometry(160, 10, 140, 40);

    dateEdit[2] = new QDateEdit(dt1.addDays(10), this);
    dateEdit[2]->setGeometry(310, 10, 140, 40);

    dateEdit[3] = new QDateEdit(dt2, this);
    dateEdit[3]->setGeometry(10, 60, 140, 40);

    qDebug() << "Day of year: " << dt1.dayOfYear();
    qDebug() << "End Day : " << dt1.daysInMonth();
    qDebug() << "End Day : " << dt1.daysInYear();

    QDate dt3 = QDate::fromString("2002.06.26", "yyyy.MM.dd");
    qDebug() << dt3;

    QDate dt4 = QDate::fromString("06.26", "MM.dd"); // yyyy=1900
    qDebug() << dt4;

    if (QDate::isValid(2011, 6, 27)) {
        qDebug() << QDate(2011, 6, 27);
    }

    QDate dt5 = QDate(2012, 4, 26);
    QString longWeek = dt5.longDayName(dt5.dayOfWeek());
    QString longMonth = dt5.longMonthName(dt5.month());
    
    QString shortWeek = dt5.shortDayName(dt5.dayOfWeek());
    QString shortMonth = dt5.shortMonthName(dt5.month());

    qDebug() << longWeek << longMonth << shortWeek << shortMonth;

    QDate dt6 = QDate(2012, 7, 26);
    QString s1 = dt6.toString(Qt::TextDate);
    QString s2 = dt6.toString(Qt::ISODate);
    QString s3 = dt6.toString(Qt::SystemLocaleDate);

    qDebug() << s1 << s2 << s3;
}
