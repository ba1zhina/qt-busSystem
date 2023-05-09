#ifndef UPDATEROUTES_H
#define UPDATEROUTES_H

#include <QWidget>

namespace Ui {
class updateRoutes;
}

class updateRoutes : public QWidget
{
    Q_OBJECT

public:
    explicit updateRoutes(QWidget *parent = nullptr);
    ~updateRoutes();

private:
    Ui::updateRoutes *ui;
};

#endif // UPDATEROUTES_H
