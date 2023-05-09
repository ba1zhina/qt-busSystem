#include "drivers.h"
#include "ui_drivers.h"

drivers::drivers(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::drivers)
{
    ui->setupUi(this);
}

drivers::~drivers()
{
    delete ui;
}
