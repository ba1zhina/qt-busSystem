#ifndef ADDAUTOMOBILES_H
#define ADDAUTOMOBILES_H

#include <QWidget>
#include <QMessageBox>
#include <QDebug>
#include <QSqlQuery>
#include <QString>
#include <QSql>
#include <QSqlDatabase>
#include <QSqlError>

namespace Ui {
class AddAutomobiles;
}

class AddAutomobiles : public QWidget
{
    Q_OBJECT

public:
    explicit AddAutomobiles(QWidget *parent = nullptr);
    ~AddAutomobiles();

private slots:
    void on_pushButton_clicked();

private:
    Ui::AddAutomobiles *ui;
    QSqlDatabase DB;
    QMessageBox *msg;
};

#endif // ADDAUTOMOBILES_H
