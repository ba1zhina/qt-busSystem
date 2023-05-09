#include "query.h"
#include "ui_query.h"

query::query(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::query)
{
    ui->setupUi(this);
}

query::~query()
{
    delete ui;
}

void query::on_pushButtonView_clicked()
{

}




void query::on_pushButtonCase_clicked()
{
    QSqlQueryModel *model = new QSqlQueryModel();
    model->setQuery("select * from case_query");
    ui->tableViewQuery->setModel(model);
}


void query::on_pushButtonSqSelect_clicked()
{
    QSqlQueryModel *model = new QSqlQueryModel();
    model->setQuery("select * from sq_select_query");
    ui->tableViewQuery->setModel(model);
}


void query::on_pushButtonSqFrom_clicked()
{
    QSqlQueryModel *model = new QSqlQueryModel();
    model->setQuery("select * from sq_from_query");
    ui->tableViewQuery->setModel(model);
}



void query::on_pushButtonSqWhere_clicked()
{
    QSqlQueryModel *model = new QSqlQueryModel();
    model->setQuery("select * from sq_where_query");
    ui->tableViewQuery->setModel(model);
}


void query::on_pushButtonCSQ1_clicked()
{
    QSqlQueryModel *model = new QSqlQueryModel();
    model->setQuery("select * from csq_query");
    ui->tableViewQuery->setModel(model);
}


void query::on_pushButtonCSQ2_clicked()
{
    QSqlQueryModel *model = new QSqlQueryModel();
    model->setQuery("select * from csq2_query");
    ui->tableViewQuery->setModel(model);
}


void query::on_pushButtonCSQ3_clicked()
{
    QSqlQueryModel *model = new QSqlQueryModel();
    model->setQuery("select * from csq3_query");
    ui->tableViewQuery->setModel(model);
}


void query::on_pushButtonHaving_clicked()
{
    QSqlQueryModel *model = new QSqlQueryModel();
    model->setQuery("select * from having_query");
    ui->tableViewQuery->setModel(model);
}


void query::on_pushButtonAll_clicked()
{
    QSqlQueryModel *model = new QSqlQueryModel();
    model->setQuery("select * from all_query");
    ui->tableViewQuery->setModel(model);
}


void query::on_pushButtonAny_clicked()
{
    QSqlQueryModel *model = new QSqlQueryModel();
    model->setQuery("select * from any_query");
    ui->tableViewQuery->setModel(model);
}

