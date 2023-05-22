#ifndef UPDATEAUTOMOBILES_H
#define UPDATEAUTOMOBILES_H

#include <QWidget>
#include <QSqlQuery>
#include <QString>
#include <QRegularExpression>
#include <QMessageBox>
#include <QSqlError>

namespace Ui {
class updateAutomobiles;
}

class updateAutomobiles : public QWidget
{
    Q_OBJECT

public:
    explicit updateAutomobiles(int id_bus, QWidget *parent = nullptr);
    ~updateAutomobiles();

private slots:
    void on_pushButton_clicked();

private:
    Ui::updateAutomobiles *ui;
    int id_bus;
    QMessageBox *msg;

    void obtainData();
};

#endif // UPDATEAUTOMOBILES_H
