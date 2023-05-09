#include "updatead.h"
#include "ui_updatead.h"

updateAD::updateAD(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::updateAD)
{
    ui->setupUi(this);
}

updateAD::~updateAD()
{
    delete ui;
}
