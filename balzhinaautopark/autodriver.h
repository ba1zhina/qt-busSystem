#ifndef AUTODRIVER_H
#define AUTODRIVER_H

#include <QDialog>

namespace Ui {
class autodriver;
}

class autodriver : public QDialog
{
    Q_OBJECT

public:
    explicit autodriver(QWidget *parent = nullptr);
    ~autodriver();

private:
    Ui::autodriver *ui;
};

#endif // AUTODRIVER_H
