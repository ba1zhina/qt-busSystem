#include "updateroutes.h"
#include "ui_updateroutes.h"

updateRoutes::updateRoutes(int id_route, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::updateRoutes)
{
    ui->setupUi(this);
    this->id_route = id_route;
    obtainData();
}

updateRoutes::~updateRoutes()
{
    delete ui;
}

void updateRoutes::obtainData(){

    QSqlQuery *query = new QSqlQuery();

    query->prepare("select id, start_locality, end_locality, distance from routes where id = :ID");
    query->bindValue(":ID", id_route);

    if(query->exec()){
        query->next();
        ui->lineEditStartLoc->setText(query->value(1).toString());
        ui->lineEditEndLoc->setText(query->value(2).toString());
        ui->lineEditDistance->setText(query->value(3).toString());
    }
}


void updateRoutes::on_pushButton_clicked()
{
    QSqlQuery *query = new QSqlQuery;
    QString StartLoc = ui->lineEditStartLoc->text();
    QString EndLoc = ui->lineEditEndLoc->text();
    QString DistanceString = ui->lineEditDistance->text();

    static QRegularExpression regEx("^[а-яА-ЯёЁ]+([- ]?[-а-яА-ЯёЁ]+)*$");

    if (!regEx.match(StartLoc).hasMatch()) {
        QMessageBox::warning(this, "Ошибка", "Поле 'Начальный пункт' должно содержать только кириллицу");
        return;
    }

    if (!regEx.match(EndLoc).hasMatch()) {
        QMessageBox::warning(this, "Ошибка", "Поле 'Конечный пункт' должно содержать только кириллицу");
        return;
    }

    bool ok;
    int Distance = DistanceString.toInt(&ok);

    if (!ok) {
        QMessageBox::warning(this, "Ошибка", "Поле 'Дистанция' должно быть числом");
        return;
    }

    query->prepare("select  public.update_routes(:ID, :start_locality, :end_locality, :distance)");
    query->bindValue(":ID",id_route);
    query->bindValue(":start_locality",StartLoc);
    query->bindValue(":end_locality", EndLoc);
    query->bindValue(":distance",Distance);

    msg = new QMessageBox();

    if (!query->exec()) {
        msg->setText("Запись НЕ изменена");
        msg->show();
        qDebug() << "Произошла ошибка при выполнении запроса: " << query->lastError().text();
    }
    else{close();}

    emit refreshTableRoutes();
}

