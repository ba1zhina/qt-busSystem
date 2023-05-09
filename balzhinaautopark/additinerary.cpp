#include "additinerary.h"
#include "ui_additinerary.h"

AddItinerary::AddItinerary(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::AddItinerary)
{
    ui->setupUi(this);

    QSqlQueryModel *RouteModel = NewModel->ComboBoxRoutes();
    ui->comboBoxRoutes->setModel(RouteModel);
    QSqlQueryModel *ADModel = NewModel->ComboBoxAD();
    ui->comboBoxAutomobiles->setModel(ADModel);
}

AddItinerary::~AddItinerary()
{
    delete ui;
}


QSqlQueryModel *AddItinerary::ComboBoxRoutes(){
    QSqlQueryModel *model = new QSqlQueryModel();
    model->setQuery("select routes from s_itinerary");
    return model;
}

QSqlQueryModel *AddItinerary::ComboBoxAD(){
    QSqlQueryModel *model = new QSqlQueryModel();
    model->setQuery("select (name||' '|| number) from s_itinerary");
    return model;
}


int AddItinerary::IdRoutesComboBox(QString RoutesStartEnd){
    int id_routes = 0;
    QSqlQuery query;
    query.prepare("select id from routes where (start_locality||' - '||end_locality) = :route");
    query.bindValue(":route", RoutesStartEnd);
    if (query.exec() && query.next())
    {
        id_routes = query.value(0).toInt();
    }

    return id_routes;
 }


int AddItinerary::IdAutoComboBox(QString AutoDriver)
{
    int id_ad = 0;
    QSqlQuery query;
    query.prepare("select id from s_itinerery_a_d where name_number = :AutoDriver");
    query.bindValue(":AutoDriver",AutoDriver);

    if (query.exec() && query.next())
    {
        id_ad = query.value(0).toInt();
    }

    return id_ad;

}

void AddItinerary::on_pushButton_clicked()
{
    QString selectedRoute = ui->comboBoxRoutes->currentText();
    int id_route = NewModel->IdRoutesComboBox(selectedRoute);
    QString selectedAD = ui->comboBoxAutomobiles->currentText();
    int id_ad = NewModel->IdAutoComboBox(selectedAD);

    QDateTime StartTime = ui->dateTimeEditStart->dateTime();
    QDateTime EndTime = ui->dateTimeEditEnd->dateTime();


    QSqlQuery query;
    query.prepare("select public.add_itinerary(:StartTime, :EndTime, :route, :ad)");
    query.bindValue(":StartTime", StartTime);
    query.bindValue(":EndTime",EndTime);
    query.bindValue(":route", id_route);
    query.bindValue(":ad", id_ad);

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



