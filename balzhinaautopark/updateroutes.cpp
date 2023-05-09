#include "updateroutes.h"
#include "ui_updateroutes.h"

updateRoutes::updateRoutes(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::updateRoutes)
{
    ui->setupUi(this);
}

updateRoutes::~updateRoutes()
{
    delete ui;
}
