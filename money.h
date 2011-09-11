#ifndef MONEY_H
#define MONEY_H

#include <QMainWindow>

namespace Ui {
    class Money;
}

class Money : public QMainWindow
{
    Q_OBJECT

public:
    explicit Money(QWidget *parent = 0);
    ~Money();

private:
    Ui::Money *ui;
};

#endif // MONEY_H
