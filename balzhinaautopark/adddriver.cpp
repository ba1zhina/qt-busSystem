#include "adddriver.h"
#include "ui_adddriver.h"

AddDriver::AddDriver(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::AddDriver)
{
    ui->setupUi(this);
}

AddDriver::~AddDriver()
{
    delete ui;
}

void AddDriver::on_pushButton_clicked()
{

    QSqlQuery *query = new QSqlQuery();
    query->prepare("select public.add_driver(:lastname,:name,:middlename,:birthday,:licencenumber)");
    query->bindValue(":lastname",ui->lineEditLastname->text());
    query->bindValue(":name", ui->lineEditName->text());
    query->bindValue(":middlename",ui->lineEditMiddlename->text());
    query->bindValue(":birthday",ui->dateEditBirthday->date());
    query->bindValue(":licencenumber",ui->lineEditLicencenumber->text());




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

