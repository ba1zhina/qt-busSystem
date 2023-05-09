#include "itinerary.h"
#include "ui_itinerary.h"

itinerary::itinerary(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::itinerary)
{
    ui->setupUi(this);
}

itinerary::~itinerary()
{
    delete ui;
}
