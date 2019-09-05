/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created: Thu Sep 5 11:52:00 2019
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QSpinBox>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QLabel *image;
    QPushButton *start;
    QSpinBox *time;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(704, 470);
        image = new QLabel(Widget);
        image->setObjectName(QString::fromUtf8("image"));
        image->setGeometry(QRect(60, 40, 571, 341));
        image->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"border-image: url(:/new/prefix1/photo/0.jpg);"));
        start = new QPushButton(Widget);
        start->setObjectName(QString::fromUtf8("start"));
        start->setGeometry(QRect(500, 410, 131, 41));
        time = new QSpinBox(Widget);
        time->setObjectName(QString::fromUtf8("time"));
        time->setGeometry(QRect(60, 410, 191, 41));
        time->setMinimum(1);
        time->setMaximum(10);

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", 0, QApplication::UnicodeUTF8));
        image->setText(QString());
        start->setText(QApplication::translate("Widget", "GO", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
