#include "addad.h"
#include "ui_addad.h"

AddAD::AddAD(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::AddAD)
{
    ui->setupUi(this);
    QSqlQueryModel *BusModel = NewModel->ComboboxModelBus();
    ui->comboBoxBus->setModel(BusModel);
    QSqlQueryModel *DriversModel = NewModel->ComboboxModelDrivers();
    ui->comboBoxDriver->setModel(DriversModel);
}

AddAD::~AddAD()
{
    delete ui;
}



QSqlQueryModel* AddAD::ComboboxModelBus()
{
    QSqlQueryModel *model = new QSqlQueryModel();
    model->setQuery("select number from automobiles");
    return model;
}

QSqlQueryModel* AddAD::ComboboxModelDrivers()
{
    QSqlQueryModel *model = new QSqlQueryModel();
    model->setQuery("SELECT * FROM get_driver_names();");
    return model;
}



void AddAD::on_pushButton_clicked()
{
    QString selectedBus = ui->comboBoxBus->currentText();
    QString selectedDriver = ui->comboBoxDriver->currentText();

    QSqlQuery query;
    query.prepare("select public.add_s_automobiles_drivers(:name,:number)");
    query.bindValue(":number", selectedBus);
    query.bindValue(":name", selectedDriver);

    msg = new QMessageBox();

    if (!query.exec()) {
        msg->setText("Запись НЕ добавлена.");
        msg->show();
        qDebug() << "Произошла ошибка при выполнении запроса: " << query.lastError().text();
    }
    else{close();}

    emit refreshTableAD();
}

