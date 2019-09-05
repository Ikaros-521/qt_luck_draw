#include "thread.h"
#include <stdio.h>

Thread::Thread(QObject *parent) :
    QThread(parent)
{
}

void Thread::run()
{
    while(true)
    {
        emit show_image();
        usleep(100000);
    }

}
