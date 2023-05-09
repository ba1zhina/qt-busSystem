#include "updateitinerary.h"
#include "ui_updateitinerary.h"

updateItinerary::updateItinerary(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::updateItinerary)
{
    ui->setupUi(this);
}

updateItinerary::~updateItinerary()
{
    delete ui;
}
