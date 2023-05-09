#include "updateautomobiles.h"
#include "ui_updateautomobiles.h"

updateAutomobiles::updateAutomobiles(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::updateAutomobiles)
{
    ui->setupUi(this);
}

updateAutomobiles::~updateAutomobiles()
{
    delete ui;
}
