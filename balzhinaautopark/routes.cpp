#include "routes.h"
#include "ui_routes.h"

routes::routes(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::routes)
{
    ui->setupUi(this);
}

routes::~routes()
{
    delete ui;
}
