#ifndef ADDDRIVER_H
#define ADDDRIVER_H

#include <QWidget>
#include <QMessageBox>
#include <QDebug>
#include <QSqlQuery>
#include <QString>
#include <QSql>
#include <QSqlDatabase>
#include <QSqlError>


namespace Ui {
class AddDriver;
}

class AddDriver : public QWidget
{
    Q_OBJECT

public:
    explicit AddDriver(QWidget *parent = nullptr);
    ~AddDriver();
    QSqlDatabase DB;
    QMessageBox *msg;

private slots:
    void on_pushButton_clicked();

private:
    Ui::AddDriver *ui;
};

#endif // ADDDRIVER_H
