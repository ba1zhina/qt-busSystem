#include "updatead.h"
#include "ui_updatead.h"

updateAD::updateAD(int id_ad, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::updateAD)
{
    ui->setupUi(this);
    this->id_ad = id_ad;

    QSqlQueryModel *BusModel = NewModel->ComboboxModelBus();
    ui->comboBoxBus->setModel(BusModel);
    QSqlQueryModel *DriversModel = NewModel->ComboboxModelDrivers();
    ui->comboBoxDriver->setModel(DriversModel);

    obtainData();

}

updateAD::~updateAD()
{
    delete ui;
}

void updateAD::obtainData(){
    QSqlQuery *query = new QSqlQuery();
    QString busCombobox;
    QString driverCombobox;

    query->prepare("select id, name, number from  s_automobiles_drivers where id = :ID");
    query->bindValue(":ID",id_ad);

    if (query->exec()){
        query->next();
        busCombobox = query->value(2).toString();
        driverCombobox =  query->value(1).toString();
    }

    ui->comboBoxBus->setCurrentText(busCombobox);
    ui->comboBoxDriver->setCurrentText(driverCombobox);

}


QSqlQueryModel* updateAD::ComboboxModelBus()
{
    QSqlQueryModel *model = new QSqlQueryModel();
    model->setQuery("select number from automobiles");
    return model;
}

QSqlQueryModel* updateAD::ComboboxModelDrivers()
{
    QSqlQueryModel *model = new QSqlQueryModel();
    model->setQuery("SELECT * FROM get_driver_names();");
    return model;
}


void updateAD::on_pushButton_clicked()
{
    QString selectedBus = ui->comboBoxBus->currentText();
    QString selectedDriver = ui->comboBoxDriver->currentText();

    QSqlQuery query;
    query.prepare("select public.update_s_automobiles_drivers(:id, :name, :bus)");
    query.bindValue(":id",id_ad);
    query.bindValue(":bus", selectedBus);
    query.bindValue(":name", selectedDriver);

    msg = new QMessageBox();

    if (!query.exec()) {
        msg->setText("Запись НЕ изменена");
        msg->show();
        qDebug() << "Произошла ошибка при выполнении запроса: " << query.lastError().text();
    }
    else{close();}

    emit refreshTableAD();
}



