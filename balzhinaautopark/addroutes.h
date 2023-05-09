#ifndef ADDROUTES_H
#define ADDROUTES_H

#include <QWidget>
#include <QMessageBox>
#include <QDebug>
#include <QSqlQuery>
#include <QString>
#include <QSql>
#include <QSqlDatabase>
#include <QSqlError>


namespace Ui {
class AddRoutes;
}

class AddRoutes : public QWidget
{
    Q_OBJECT

public:
    explicit AddRoutes(QWidget *parent = nullptr);
    ~AddRoutes();

private slots:
    void on_pushButton_clicked();

private:
    Ui::AddRoutes *ui;
    QMessageBox *msg;
};

#endif // ADDROUTES_H
