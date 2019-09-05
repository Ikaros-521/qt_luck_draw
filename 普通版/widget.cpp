#include "widget.h"
#include "ui_widget.h"

#include <iostream>
#include <stdio.h>
#include <time.h>
#include <unistd.h>

using namespace std;

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    num = 1;
    pressed = false;
    ui->setupUi(this);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_pushButton_clicked()
{
    if(pressed)
    {
        pressed = false;
        ui->label->setText(QString::number(num));
    }
    else
    {
        pressed = true;
        while(pressed)
        {
            if(num > 9) num = 1; // 1-10
            //cout << num << endl;
            num++;
            ui->label->setText(QString::number(num));
            QApplication::processEvents();
        }
    }
}
