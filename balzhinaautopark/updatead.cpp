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
    int id_bus = NewModel->IdBusComboBox(selectedBus);
    QString selectedDriver = ui->comboBoxDriver->currentText();
    int id_driver = NewModel->IdDriverComboBox(selectedDriver);

    QSqlQuery query;
    query.prepare("select public.update_automobiles_drivers(:id,:bus,:driver)");
    query.bindValue(":id",id_ad);
    query.bindValue(":bus", id_bus);
    query.bindValue(":driver", id_driver);

    msg = new QMessageBox();

    if (!query.exec()) {
        msg->setText("Запись НЕ добавлена");
        qDebug() << "Произошла ошибка при выполнении запроса: " << query.lastError().text();
    }
    else{
        msg->setText("Запись изменена. Обновите данные.");
        close();
    }
    msg->show();
}


int updateAD::IdBusComboBox(QString BusNumber)
{
    int id_bus = 0;
    QSqlQuery query;
    query.prepare("select get_bus_id(:bus)");
    query.bindValue(":bus", BusNumber);
    if (query.exec() && query.next())
    {
        id_bus = query.value(0).toInt();
    }

    return id_bus;
}


int updateAD::IdDriverComboBox(QString DriverNumber){
    int id_driver = 0;
    QSqlQuery query;
    query.prepare("select get_drivers_id(:driver)");
    query.bindValue(":driver", DriverNumber);
    if (query.exec() && query.next())
    {
        id_driver = query.value(0).toInt();
    }

    return id_driver;
}

