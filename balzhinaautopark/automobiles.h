#ifndef AUTOMOBILES_H
#define AUTOMOBILES_H

#include <QDialog>

namespace Ui {
class automobiles;
}

class automobiles : public QDialog
{
    Q_OBJECT

public:
    explicit automobiles(QWidget *parent = nullptr);
    ~automobiles();

private:
    Ui::automobiles *ui;
};

#endif // AUTOMOBILES_H
