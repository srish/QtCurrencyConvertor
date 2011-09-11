#include "money.h"
#include "ui_money.h"

Money::Money(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Money)
{
    ui->setupUi(this);
}

Money::~Money()
{
    delete ui;
}
