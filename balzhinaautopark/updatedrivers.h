#ifndef UPDATEDRIVERS_H
#define UPDATEDRIVERS_H

#include <QWidget>
#include <QSqlQuery>
#include <QString>
#include <QMessageBox>
#include <QRegularExpression>
#include <QSqlError>


namespace Ui {
class updateDrivers;
}

class updateDrivers : public QWidget
{
    Q_OBJECT

public:
    explicit updateDrivers(int id_driver, QWidget *parent = nullptr);
    ~updateDrivers();

private slots:
    void on_pushButton_clicked();

private:
    Ui::updateDrivers *ui;
    int id_driver;
    void obtainData();
    QMessageBox *msg;
};

#endif // UPDATEDRIVERS_H
