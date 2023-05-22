#ifndef UPDATEITINERARY_H
#define UPDATEITINERARY_H

#include <QWidget>
#include <QSqlQuery>
#include <QString>
#include <QSqlQueryModel>
#include <QSqlError>
#include <QMessageBox>

namespace Ui {
class updateItinerary;
}

class updateItinerary : public QWidget
{
    Q_OBJECT

public:
    explicit updateItinerary(int id_itenerary, QWidget *parent = nullptr);
    ~updateItinerary();
    updateItinerary *NewModel;
    updateItinerary *NewModel2;

private slots:
    void on_pushButton_clicked();

private:
    Ui::updateItinerary *ui;
    int id_itenerary;
    QMessageBox *msg;

    void obtainData();
    QSqlQueryModel *ComboBoxAD();
    QSqlQueryModel *ComboBoxRoutes();
    int IdRoutesComboBox(QString RoutesStartEnd);
    int IdAutoComboBox(QString AutoDriver);

};

#endif // UPDATEITINERARY_H
