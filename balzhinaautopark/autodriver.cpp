#include "autodriver.h"
#include "ui_autodriver.h"

autodriver::autodriver(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::autodriver)
{
    ui->setupUi(this);
}

autodriver::~autodriver()
{
    delete ui;
}
