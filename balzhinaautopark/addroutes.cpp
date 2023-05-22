#include "addroutes.h"
#include "ui_addroutes.h"
#include <QRegularExpression>

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
        msg->setText("Запись изменена. Обновите данные.");
        close();
    }
    msg->show();


}

