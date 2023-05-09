#include "addroutes.h"
#include "ui_addroutes.h"

AddRoutes::AddRoutes(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::AddRoutes)
{
    ui->setupUi(this);
}

AddRoutes::~AddRoutes()
{
    delete ui;
}

void AddRoutes::on_pushButton_clicked()
{
    QString StartLoc = ui->lineEditStartLoc->text();
    QString EndLoc = ui->lineEditEndLoc->text();
    int Distance = ui->lineEditDistance->text().toInt();

    QSqlQuery *query = new QSqlQuery;

    query->prepare("select public.add_routes(:start_locality, :end_locality, :distance)");
    query->bindValue(":start_locality",StartLoc);
    query->bindValue(":end_locality", EndLoc);
    query->bindValue(":distance",Distance);

    msg = new QMessageBox();

    if (!query->exec()) {
        msg->setText("Запись НЕ добавлена");
        qDebug() << "Произошла ошибка при выполнении запроса: " << query->lastError().text();
    }
    else{
        msg->setText("Запись добавлена");
        close();
    }
    msg->show();


}

