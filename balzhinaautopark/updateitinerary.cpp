#include "updateitinerary.h"
#include "ui_updateitinerary.h"

updateItinerary::updateItinerary(int id_itenerary, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::updateItinerary)
{
    ui->setupUi(this);
    this->id_itenerary = id_itenerary;

    QSqlQueryModel *RouteModel = NewModel->ComboBoxRoutes();
    ui->comboBoxRoutes->setModel(RouteModel);
    QSqlQueryModel *ADModel = NewModel->ComboBoxAD();
    ui->comboBoxAutomobiles->setModel(ADModel);

    obtainData();
}

updateItinerary::~updateItinerary()
{
    delete ui;
}

void updateItinerary::obtainData(){
    QSqlQuery *query = new QSqlQuery();

    QDateTime StartDate;
    QDateTime EndDate;
    QString Routes;
    QString NameNumber;


    query->prepare("select id,start_date, end_date,routes, (name||' '||number) as name_number from s_itinerary where id = :ID");
    query->bindValue(":ID",id_itenerary);

    if(query->exec()){
        query->next();
        StartDate = query->value(1).toDateTime();
        EndDate = query->value(2).toDateTime();
        Routes = query->value(3).toString();
        NameNumber = query->value(4).toString();
    }

    ui->dateTimeEditStart->setDateTime(StartDate);
    ui->dateTimeEditEnd->setDateTime(EndDate);
    ui->comboBoxRoutes->setCurrentText(Routes);
    ui->comboBoxAutomobiles->setCurrentText(NameNumber);

}



QSqlQueryModel *updateItinerary::ComboBoxRoutes(){
    QSqlQueryModel *model = new QSqlQueryModel();
    model->setQuery("select * from get_routes_locality()");
    return model;
}

QSqlQueryModel *updateItinerary::ComboBoxAD(){
    QSqlQueryModel *model = new QSqlQueryModel();
    model->setQuery("select concat(name,' ',number) from s_automobiles_drivers");
    return model;
}


int updateItinerary::IdRoutesComboBox(QString RoutesStartEnd){
    int id_routes = 0;
    QSqlQuery query;
    query.prepare("select id from routes where concat(start_locality,' - ',end_locality) = :route");
    query.bindValue(":route", RoutesStartEnd);
    if (query.exec() && query.next())
    {
        id_routes = query.value(0).toInt();
    }

    return id_routes;
 }


int updateItinerary::IdAutoComboBox(QString AutoDriver){
    int id_ad = 0;
    QSqlQuery query;
    query.prepare("select id from s_automobiles_drivers where concat(name,' ',number) = :AutoDriver");
    query.bindValue(":AutoDriver", AutoDriver);

    if (query.exec() && query.next())
    {
        id_ad = query.value(0).toInt();
    }

    return id_ad;

}

void updateItinerary::on_pushButton_clicked()
{
    QString selectedRoute = ui->comboBoxRoutes->currentText();
    int id_route = NewModel->IdRoutesComboBox(selectedRoute);
    QString selectedAD = ui->comboBoxAutomobiles->currentText();
    int id_ad = NewModel2->IdAutoComboBox(selectedAD);

    QDateTime StartTime = ui->dateTimeEditStart->dateTime();
    QDateTime EndTime = ui->dateTimeEditEnd->dateTime();


    QSqlQuery query;
    query.prepare("select public.update_itinerary(:id,:StartTime, :EndTime, :route, :ad)");
    query.bindValue(":id",id_itenerary);
    query.bindValue(":StartTime", StartTime);
    query.bindValue(":EndTime",EndTime);
    query.bindValue(":route", id_route);
    query.bindValue(":ad", id_ad);

    msg = new QMessageBox();

    if (!query.exec()) {
        msg->setText("Запись НЕ изменена");
        msg->show();
        qDebug() << "Произошла ошибка при выполнении запроса: " << query.lastError().text();
    }
    else{close();}

    emit refreshTableItinerary();
}

