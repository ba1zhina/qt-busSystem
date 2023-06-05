#include "updatedrivers.h"
#include "ui_updatedrivers.h"

updateDrivers::updateDrivers(int id_driver,QWidget *parent) :
    QWidget(parent),
    ui(new Ui::updateDrivers)
{
    ui->setupUi(this);
    this->id_driver = id_driver;
    obtainData();
}

updateDrivers::~updateDrivers()
{
    delete ui;
}

void updateDrivers::obtainData()
{
    QSqlQuery *query = new QSqlQuery;
    query->prepare("select id, lastname, name, middlename, birthday, licence_number from drivers where id = :ID");
    query->bindValue(":ID",this->id_driver);

    if (query->exec())
    {
        query->next();
        ui->lineEditLastname->setText(query->value(1).toString());
        ui->lineEditName->setText(query->value(2).toString());
        ui->lineEditMiddlename->setText(query->value(3).toString());
        ui->dateEditBirthday->setDate(query->value(4).toDate());
        ui->lineEditLicencenumber->setText(query->value(5).toString());
    }
}

void updateDrivers::on_pushButton_clicked()
{
    QString Lastname = ui->lineEditLastname->text();
    QString Name = ui->lineEditName->text();
    QString Middlename = ui->lineEditMiddlename->text();
    QString Birthday = ui->dateEditBirthday->text();
    QString Licencenumber = ui->lineEditLicencenumber->text();


    if (Lastname.isEmpty() || Name.isEmpty() || Middlename.isEmpty() || Licencenumber.isEmpty()) {
        // Один или несколько LineEdit не заполнены
        QMessageBox::warning(this, "Ошибка", "Заполните все поля");
        return;
    }

    static QRegularExpression regExp("^[а-яА-ЯёЁ]+([- ]?[-а-яА-ЯёЁ]+)*$");

    if (!regExp.match(Lastname).hasMatch()) {
        QMessageBox::warning(this, "Ошибка", "Поле 'Фамилия' должно содержать только кириллицу");
        return;
    }

    if (!regExp.match(Name).hasMatch()) {
        QMessageBox::warning(this, "Ошибка", "Поле 'Имя' должно содержать только кириллицу");
        return;
    }


    if (!regExp.match(Middlename).hasMatch()) {
        QMessageBox::warning(this, "Ошибка", "Поле 'Отчество' должно содержать только кириллицу");
        return;
    }

    static QRegularExpression regExpDate("^(0[1-9]|1[0-9]|2[0-9]|3[0-1])\\.(0[1-9]|1[0-2])\\.(19[2-9][4-9]|200[0-6])$");

    if (!regExpDate.match(Birthday).hasMatch()) {
        QMessageBox::warning(this, "Ошибка", "Поле 'День рождения' должно содержать дату рождения водителя");
        return;
    }

    static QRegularExpression regExpNumber("^\\d{10}$");
    if (!regExpNumber.match(Licencenumber).hasMatch()) {
        QMessageBox::warning(this, "Ошибка", "Поле 'Номер водительского удостоверения' должно содержать только цифры и иметь 10 символов");
        return;
    }

    QSqlQuery *query = new QSqlQuery();
    query->prepare("select public.update_drivers(:ID, :lastname,:name,:middlename,:birthday,:licencenumber)");
    query->bindValue(":ID",id_driver);
    query->bindValue(":lastname",Lastname);
    query->bindValue(":name", Name);
    query->bindValue(":middlename",Middlename);
    query->bindValue(":birthday", Birthday);
    query->bindValue(":licencenumber",Licencenumber);

    msg = new QMessageBox();

    if (!query->exec()) {
        msg->setText("Запись НЕ изменена. У вас нет прав на совершение этого действия.");
        msg->show();
        qDebug() << "Произошла ошибка при выполнении запроса: " << query->lastError().text();
    }
    else{close();}
    emit refreshTableDriver();

}

