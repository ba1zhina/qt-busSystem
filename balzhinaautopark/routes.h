#ifndef ROUTES_H
#define ROUTES_H

#include <QDialog>

namespace Ui {
class routes;
}

class routes : public QDialog
{
    Q_OBJECT

public:
    explicit routes(QWidget *parent = nullptr);
    ~routes();

private:
    Ui::routes *ui;
};

#endif // ROUTES_H
