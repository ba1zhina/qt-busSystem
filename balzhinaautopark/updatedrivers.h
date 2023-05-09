#ifndef UPDATEDRIVERS_H
#define UPDATEDRIVERS_H

#include <QWidget>

namespace Ui {
class updateDrivers;
}

class updateDrivers : public QWidget
{
    Q_OBJECT

public:
    explicit updateDrivers(QWidget *parent = nullptr);
    ~updateDrivers();

private:
    Ui::updateDrivers *ui;
};

#endif // UPDATEDRIVERS_H
