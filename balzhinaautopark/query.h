#ifndef QUERY_H
#define QUERY_H

#include <QWidget>
#include <QSqlQueryModel>

namespace Ui {
class query;
}

class query : public QWidget
{
    Q_OBJECT

public:
    explicit query(QWidget *parent = nullptr);
    ~query();

private slots:
    void on_pushButtonCase_clicked();
    void on_pushButtonSqSelect_clicked();
    void on_pushButtonSqFrom_clicked();
    void on_pushButtonSqWhere_clicked();
    void on_pushButtonCSQ1_clicked();
    void on_pushButtonCSQ2_clicked();
    void on_pushButtonCSQ3_clicked();
    void on_pushButtonHaving_clicked();
    void on_pushButtonAll_clicked();
    void on_pushButtonAny_clicked();

private:
    Ui::query *ui;
};

#endif // QUERY_H
