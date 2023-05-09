#ifndef UPDATEAD_H
#define UPDATEAD_H

#include <QWidget>


namespace Ui {
class updateAD;
}

class updateAD : public QWidget
{
    Q_OBJECT

public:
    explicit updateAD(QWidget *parent = nullptr);
    ~updateAD();

private:
    Ui::updateAD *ui;
};

#endif // UPDATEAD_H
