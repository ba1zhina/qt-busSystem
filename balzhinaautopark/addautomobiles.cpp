#include "addautomobiles.h"
#include "ui_addautomobiles.h"

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
    int Year = ui->lineEditYear->text().toInt();
    QString Number = ui->lineEditNumber->text();

    query->prepare("select public.add_automobiles(:maker,:model,:year,:number)");
    query->bindValue(":maker",Maker);
    query->bindValue(":model",Model);
    query->bindValue(":year",Year);
    query->bindValue(":number",Number);

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

