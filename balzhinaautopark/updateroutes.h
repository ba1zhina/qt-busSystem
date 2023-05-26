#ifndef UPDATEROUTES_H
#define UPDATEROUTES_H

#include <QWidget>
#include <QSqlQuery>
#include <QSqlError>
#include <QMessageBox>
#include <QRegularExpression>

namespace Ui {
class updateRoutes;
}

class updateRoutes : public QWidget
{
    Q_OBJECT

public:
    explicit updateRoutes(int id_route, QWidget *parent = nullptr);
    ~updateRoutes();

private slots:
    void on_pushButton_clicked();
signals:
    void refreshTableRoutes();

private:
    Ui::updateRoutes *ui;
    QMessageBox *msg;
    int id_route;

    void obtainData();
};

#endif // UPDATEROUTES_H
