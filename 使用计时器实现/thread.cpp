#include "thread.h"

Thread::Thread(QObject *parent) :
    QThread(parent)
{
}

/*void Thread::run(void)
{
    timer = new QTimer;
    timer->start();
    qDebug("----------%d----run",time++);
    ui->label->setText(QString::number(time));
}
*/
