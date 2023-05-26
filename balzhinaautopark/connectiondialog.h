#ifndef CONNECTIONDIALOG_H
#define CONNECTIONDIALOG_H

#include <QWidget>
#include <QMessageBox>
#include <QtSql>


namespace Ui {
class connectionDialog;
}

class connectionDialog : public QWidget
{
    Q_OBJECT

public:
    explicit connectionDialog(QWidget *parent = nullptr);
    ~connectionDialog();
    QMessageBox *msg;

signals:
    void connectedSignal();
private slots:
    void on_pushButtonConnection_clicked();

private:
    Ui::connectionDialog *ui;
    QSqlDatabase db;
};

#endif // CONNECTIONDIALOG_H
