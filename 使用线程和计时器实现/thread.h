#ifndef THREAD_H
#define THREAD_H

#include <QThread>

class Thread : public QThread
{
    Q_OBJECT
public:
    explicit Thread(QObject *parent = 0);
    void run();
signals:
    void show_image();
public slots:
    
};

#endif // THREAD_H
