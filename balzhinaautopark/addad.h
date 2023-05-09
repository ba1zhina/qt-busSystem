#ifndef ADDAD_H
#define ADDAD_H

#include <QWidget>
#include <QSqlQueryModel>
#include <QSqlQuery>
#include <QString>
#include <QMessageBox>
#include <QSql>
#include <QSqlDatabase>
#include <QSqlError>


namespace Ui {
class AddAD;
}

class AddAD : public QWidget
{
    Q_OBJECT

public:
    explicit AddAD(QWidget *parent = nullptr);
    ~AddAD();
    AddAD *NewModel;

private slots:
    void on_pushButton_clicked();

private:
    Ui::AddAD *ui;
    QMessageBox *msg;

    QSqlQueryModel* ComboboxModelBus();
    QSqlQueryModel* ComboboxModelDrivers();

    int IdBusComboBox(QString BusNumber);
    int IdDriverComboBox(QString DriverNumber);
};

#endif // ADDAD_H
