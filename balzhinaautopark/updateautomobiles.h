#ifndef UPDATEAUTOMOBILES_H
#define UPDATEAUTOMOBILES_H

#include <QWidget>

namespace Ui {
class updateAutomobiles;
}

class updateAutomobiles : public QWidget
{
    Q_OBJECT

public:
    explicit updateAutomobiles(QWidget *parent = nullptr);
    ~updateAutomobiles();

private:
    Ui::updateAutomobiles *ui;
};

#endif // UPDATEAUTOMOBILES_H
