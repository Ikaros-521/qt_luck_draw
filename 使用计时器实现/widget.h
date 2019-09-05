#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QTimer>

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT
    QTimer *timer;
public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();
    bool press;
    int time;
    
private slots:
    void on_pushButton_clicked();
    void run(void);
    void on_pushButton_2_clicked();

private:
    Ui::Widget *ui;
};

#endif // WIDGET_H
