#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QTimer>
#include "thread.h"

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT
    Thread* thread;
    QTimer* timer;
public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();

private slots:
    void on_start_clicked();
    void slots_timeout();
    void show_image();

private:
    Ui::Widget *ui;
};

#endif // WIDGET_H
