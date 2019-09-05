#include "widget.h"
#include "ui_widget.h"
#include <stdio.h>
#include <stdlib.h>

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);

    thread = new Thread;
    timer = new QTimer;
    connect(timer,SIGNAL(timeout()),this,SLOT(slots_timeout()));
    connect(thread,SIGNAL(show_image()),this,SLOT(show_image()));
}

Widget::~Widget()
{
    delete ui;
}

void Widget::show_image()
{
    char path[256] = {};
    sprintf(path,"border-image: url(:/new/prefix1/photo/%d.jpg)",rand()%6+1);
    ui->image->setStyleSheet(path);
}

void Widget::on_start_clicked()
{
    thread->start();
    timer->start(ui->time->value()*1000);
}

void Widget::slots_timeout()
{
    timer->stop();
    thread->terminate();
}
