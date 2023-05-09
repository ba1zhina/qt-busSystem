#ifndef DBQUERY_H
#define DBQUERY_H

#include <QSqlQueryModel>
#include <QSqlQuery>
#include <QTableView>
#include <QString>
#include <QMessageBox>
#include <QSql>
#include <QSqlDatabase>
#include <QSqlError>
#include <QDate>


class dbquery
{
public:
    dbquery();

    QMessageBox *msg;

    QSqlQueryModel* selectDriverTable();
    QSqlQueryModel* selectAutoTable();
    QSqlQueryModel* selectADTable();
    QSqlQueryModel* selectItineraryTable();
    QSqlQueryModel* selectRoutesTable();

    void AddNewDriver(QSqlDatabase db, QString Lastname, QString Name, QString Middlename, QDate Birthday, QString LecenceNumber);
};

#endif // DBQUERY_H
