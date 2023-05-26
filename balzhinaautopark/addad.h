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
signals:
    void refreshTableAD();

private:
    Ui::AddAD *ui;
    QMessageBox *msg;

    QSqlQueryModel* ComboboxModelBus();
    QSqlQueryModel* ComboboxModelDrivers();
};

#endif // ADDAD_H
