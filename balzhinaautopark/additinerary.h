#ifndef ADDITINERARY_H
#define ADDITINERARY_H

#include <QWidget>
#include <QSqlQueryModel>
#include <QSqlQuery>
#include <QString>
#include <QMessageBox>
#include <QSql>
#include <QSqlDatabase>
#include <QSqlError>
#include <QDateTime>

namespace Ui {
class AddItinerary;
}

class AddItinerary : public QWidget
{
    Q_OBJECT

public:
    explicit AddItinerary(QWidget *parent = nullptr);
    ~AddItinerary();

private slots:
    void on_pushButton_clicked();
signals:
    void refreshTableItinerary();

private:
    Ui::AddItinerary *ui;
    AddItinerary *NewModel;
    QMessageBox *msg;

    QSqlQueryModel *ComboBoxRoutes();
    QSqlQueryModel *ComboBoxAD();

    int IdRoutesComboBox(QString RoutesStartEnd);
    int IdAutoComboBox(QString AutoDriver);
};

#endif // ADDITINERARY_H
