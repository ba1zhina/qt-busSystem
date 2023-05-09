#ifndef DRIVERS_H
#define DRIVERS_H

#include <QDialog>

namespace Ui {
class drivers;
}

class drivers : public QDialog
{
    Q_OBJECT

public:
    explicit drivers(QWidget *parent = nullptr);
    ~drivers();

private:
    Ui::drivers *ui;
};

#endif // DRIVERS_H
