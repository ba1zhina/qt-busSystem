#include "addautomobiles.h"
#include "ui_addautomobiles.h"
#include <QRegularExpression>

AddAutomobiles::AddAutomobiles(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::AddAutomobiles)
{
    ui->setupUi(this);
}

AddAutomobiles::~AddAutomobiles()
{
    delete ui;
}

void AddAutomobiles::on_pushButton_clicked()
{
    QSqlQuery *query = new QSqlQuery();
    QString Maker = ui->lineEditMaker->text();
    QString Model = ui->lineEditModel->text();
    QString YearString = ui->lineEditYear->text();
    QString Number = ui->lineEditNumber->text();

    if (Maker.isEmpty() || Model.isEmpty() || YearString.isEmpty() || Number.isEmpty()) {
        QMessageBox::warning(this, "Ошибка", "Заполните все поля");
        return;
    }


    static QRegularExpression regExp("^[a-zA-Zа-яА-Я0-9 ]+$");

    if (!regExp.match(Maker).hasMatch()) {
        QMessageBox::warning(this, "Ошибка", "Поле 'Производитель' должно содержать только цифры или латиницу или кириллицу");
        return;
    }

    if (!regExp.match(Model).hasMatch()) {
        QMessageBox::warning(this, "Ошибка", "Поле 'Модель' должно содержать только цифры или латиницу или кириллицу");
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

    query->prepare("select public.add_automobiles(:maker,:model,:year,:number)");
    query->bindValue(":maker",Maker);
    query->bindValue(":model",Model);
    query->bindValue(":year",YearString);
    query->bindValue(":number",Number);

    msg = new QMessageBox();

    if (!query->exec()) {
        msg->setText("Запись НЕ добавлена");
        msg->show();
        qDebug() << "Произошла ошибка при выполнении запроса: " << query->lastError().text();
    }
    else{close();}

    emit refreshTableAutomobiles();

}

