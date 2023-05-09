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
    model->setQuery("select name from s_automobiles_drivers");
    return model;
}


int AddAD::IdBusComboBox(QString BusNumber)
{
    int id_bus = 0;
    QSqlQuery query;
    query.prepare("SELECT id FROM automobiles WHERE number = :bus");
    query.bindValue(":bus", BusNumber);
    if (query.exec() && query.next())
    {
        id_bus = query.value(0).toInt();
    }

    return id_bus;
}


int AddAD::IdDriverComboBox(QString DriverNumber){
    int id_driver = 0;
    QSqlQuery query;
    query.prepare("select id from drivers where (name||' '||lastname) = :driver");
    query.bindValue(":driver", DriverNumber);
    if (query.exec() && query.next())
    {
        id_driver = query.value(0).toInt();
    }

    return id_driver;
}

void AddAD::on_pushButton_clicked()
{
    QString selectedBus = ui->comboBoxBus->currentText();
    int id_bus = NewModel->IdBusComboBox(selectedBus);
    QString selectedDriver = ui->comboBoxDriver->currentText();
    int id_driver = NewModel->IdDriverComboBox(selectedDriver);

    QSqlQuery query;
    query.prepare("select public.add_automobiles_drivers(:bus,:driver)");
    query.bindValue(":bus", id_bus);
    query.bindValue(":driver", id_driver);

    msg = new QMessageBox();

    if (!query.exec()) {
        msg->setText("Запись НЕ добавлена");
        qDebug() << "Произошла ошибка при выполнении запроса: " << query.lastError().text();
    }
    else{
        msg->setText("Запись добавлена");
        close();
    }
    msg->show();

}

