#include "connectiondialog.h"
#include "ui_connectiondialog.h"

connectionDialog::connectionDialog(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::connectionDialog)
{
    ui->setupUi(this);
}

connectionDialog::~connectionDialog()
{
    delete ui;
}

void connectionDialog::on_pushButtonConnection_clicked()
{
    db = QSqlDatabase::addDatabase("QPSQL");

    db.setHostName("localhost");
    db.setDatabaseName("autopark");
    db.setUserName(ui->lineEditUsername->text());
    db.setPassword(ui->lineEditPassword->text());

    msg = new QMessageBox();
    if (db.open()) {
        close();
        emit connectedSignal();
    }
    else
    {
       msg->setText("Соединение НЕ установлено");
       msg->show();

    }

}

