#ifndef UPDATEAD_H
#define UPDATEAD_H

#include <QWidget>
#include <QSqlQueryModel>
#include <QSqlQuery>
#include <QString>
#include <QMessageBox>
#include <QSql>
#include <QSqlDatabase>
#include <QSqlError>
#include <QComboBox>


namespace Ui {
class updateAD;
}

class updateAD : public QWidget
{
    Q_OBJECT

public:
    explicit updateAD(int id_ad, QWidget *parent = nullptr);
    ~updateAD();
    updateAD *NewModel;

private slots:
    void on_pushButton_clicked();

private:
    Ui::updateAD *ui;
    int id_ad;
    QMessageBox *msg;


    void obtainData();

    QSqlQueryModel* ComboboxModelDrivers();
    QSqlQueryModel* ComboboxModelBus();
    int IdDriverComboBox(QString DriverNumber);
    int IdBusComboBox(QString BusNumber);

};

#endif // UPDATEAD_H
