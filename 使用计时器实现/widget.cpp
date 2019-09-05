#include "widget.h"
#include "ui_widget.h"
#include "thread.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    press = false;
    time = 0;
    timer = new QTimer;
    // 连接timeout信号，调用run()函数
    connect(timer,SIGNAL(timeout()),this,SLOT(run()));
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_pushButton_clicked()
{
    if(press == false)
        time = 0;

    press = true;
    timer->start(10); // 10毫秒发送一个timeout信号
    //sleep(1);
}

void Widget::run(void)
{
    if(time > 9)    // 设置数字的范围
        time = 0;
    qDebug("----%d----",time);
    ui->label->setText(QString::number(time++));    // 设置控件的text
}

void Widget::on_pushButton_2_clicked()
{
    timer->stop();  // 停止计时器
    press = false;
}
