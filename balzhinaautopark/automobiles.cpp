#include "automobiles.h"
#include "ui_automobiles.h"

automobiles::automobiles(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::automobiles)
{
    ui->setupUi(this);
}

automobiles::~automobiles()
{
    delete ui;
}
