#include "adddriver.h"
#include "ui_adddriver.h"
#include <QRegularExpression>



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
    QString LastName = ui->lineEditLastname->text();
    QString Name = ui->lineEditName->text();
    QString Middlename = ui->lineEditMiddlename->text();
    QString Birthday = ui->dateEditBirthday->text();
    QString Licencenumber = ui->lineEditLicencenumber->text();


    if (LastName.isEmpty() || Name.isEmpty() || Middlename.isEmpty() || Licencenumber.isEmpty()) {
        // Один или несколько LineEdit не заполнены
        QMessageBox::warning(this, "Ошибка", "Заполните все поля");
        return;
    }

    static QRegularExpression regExp("^[а-яА-ЯёЁ]+([- ]?[-а-яА-ЯёЁ]+)*$");

    if (!regExp.match(LastName).hasMatch()) {
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
        QMessageBox::warning(this, "Ошибка", "Поле 'Номер водительского удостоверения' должно содержать только цифры");
        return;
    }

    QSqlQuery *query = new QSqlQuery();
    query->prepare("select public.add_driver(:lastname,:name,:middlename,:birthday,:licencenumber)");
    query->bindValue(":lastname",LastName);
    query->bindValue(":name", Name);
    query->bindValue(":middlename",Middlename);
    query->bindValue(":birthday", Birthday);
    query->bindValue(":licencenumber",Licencenumber);




    msg = new QMessageBox();

    if (!query->exec()) {
        msg->setText("Запись НЕ добавлена");
        msg->show();
        qDebug() << "Произошла ошибка при выполнении запроса: " << query->lastError().text();
    }
    else{close();}

    emit refreshTableDriver();


}

