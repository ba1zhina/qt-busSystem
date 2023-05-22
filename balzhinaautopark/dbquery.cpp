#include "dbquery.h"

dbquery::dbquery()
{

}

QSqlQueryModel* dbquery::selectDriverTable()
{
    QSqlQueryModel *model = new QSqlQueryModel();
    model->setQuery("select id, lastname, name, middlename,birthday,licence_number from drivers");
    return model;
}


QSqlQueryModel *dbquery::selectAutoTable()
{
    QSqlQueryModel *model = new QSqlQueryModel();
    model->setQuery("select * from automobiles");
    return model;
}

QSqlQueryModel *dbquery::selectADTable()
{
    QSqlQueryModel *model = new QSqlQueryModel();
    model->setQuery("select * from s_automobiles_drivers");
    return model;
}

QSqlQueryModel *dbquery::selectItineraryTable()
{
    QSqlQueryModel *model = new QSqlQueryModel();
    model->setQuery("select * from s_itinerary order by id");
    return model;
}

QSqlQueryModel *dbquery::selectRoutesTable()
{
    QSqlQueryModel *model = new QSqlQueryModel();
    model->setQuery("select * from routes");
    return model;
}


