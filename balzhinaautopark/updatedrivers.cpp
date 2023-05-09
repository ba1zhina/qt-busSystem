#include "updatedrivers.h"
#include "ui_updatedrivers.h"

updateDrivers::updateDrivers(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::updateDrivers)
{
    ui->setupUi(this);
}

updateDrivers::~updateDrivers()
{
    delete ui;
}
