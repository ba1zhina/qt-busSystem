#include "updateautomobiles.h"
#include "ui_updateautomobiles.h"

updateAutomobiles::updateAutomobiles(int id_bus,QWidget *parent) :
    QWidget(parent),
    ui(new Ui::updateAutomobiles)
{
    ui->setupUi(this);
    this->id_bus = id_bus;
    obtainData();
}

updateAutomobiles::~updateAutomobiles()
{
    delete ui;
}

void updateAutomobiles::obtainData(){

    QSqlQuery *query = new QSqlQuery();

    query->prepare("select id, maker, model, year, number from automobiles where id = :ID");
    query->bindValue(":ID", id_bus);

    if (query->exec()){
        query->next();

        ui->lineEditMaker->setText(query->value(1).toString());
        ui->lineEditModel->setText(query->value(2).toString());
        ui->lineEditYear->setText(query->value(3).toString());
        ui->lineEditNumber->setText(query->value(4).toString());
    }

}


void updateAutomobiles::on_pushButton_clicked()
{
    QString Maker = ui->lineEditMaker->text();
    QString Model = ui->lineEditModel->text();
    QString YearString = ui->lineEditYear->text();
    QString Number = ui->lineEditNumber->text();

    QSqlQuery *query = new QSqlQuery();

    if (Maker.isEmpty() || Model.isEmpty() || YearString.isEmpty() || Number.isEmpty()) {
        QMessageBox::warning(this, "Ошибка", "Заполните все поля");
        return;
    }


    static QRegularExpression regExp("^([a-zA-Z]+|\\d+|[a-zA-Z0-9 ]+)$");

    if (!regExp.match(Maker).hasMatch()) {
        QMessageBox::warning(this, "Ошибка", "Поле 'Производитель' должно содержать только цифры или латиницу");
        return;
    }

    if (!regExp.match(Model).hasMatch()) {
        QMessageBox::warning(this, "Ошибка", "Поле 'Модель' должно содержать только цифры или латиницу");
        return;
    }

    static QRegularExpression regExpYear("^(19[0-9]{2}|20[0-1][0-9]|202[0-3])$");

    if (!regExpYear.match(YearString).hasMatch()) {
        QMessageBox::warning(this, "Ошибка", "Поле 'Год' должно быть годом от 1900 до 2023");
        return;
    }

    static QRegularExpression regExpNumber("[ABEKMHOPCTYXАВЕКМНОРСТУХ]{1}\\d{3}[ABEKMHOPCTYXАВЕКМНОРСТУХ]{2}\\d{2,3}+");

    if (!regExpNumber.match(Number).hasMatch()) {
        QMessageBox::warning(this, "Ошибка", "Поле 'Номер' должно содержать только цифры и буквы А, В, Е, К, М, Н, О, Р, С, Т, У и Х. \nИ иметь вид A777AA77");
        return;
    }

    query->prepare("select public.update_automobiles(:ID,:maker,:model,:year,:number)");
    query->bindValue(":ID",id_bus);
    query->bindValue(":maker",Maker);
    query->bindValue(":model",Model);
    query->bindValue(":year",YearString);
    query->bindValue(":number",Number);

    msg = new QMessageBox();

    if (!query->exec()) {
        msg->setText("Запись НЕ изменена. У вас нет прав на совершение этого действия.");
        msg->show();
        qDebug() << "Произошла ошибка при выполнении запроса: " << query->lastError().text();
    }
    else{close();}

    emit refreshTableAutomobiles();
}

