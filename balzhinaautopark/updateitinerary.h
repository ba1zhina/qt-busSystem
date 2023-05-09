#ifndef UPDATEITINERARY_H
#define UPDATEITINERARY_H

#include <QWidget>

namespace Ui {
class updateItinerary;
}

class updateItinerary : public QWidget
{
    Q_OBJECT

public:
    explicit updateItinerary(QWidget *parent = nullptr);
    ~updateItinerary();

private:
    Ui::updateItinerary *ui;
};

#endif // UPDATEITINERARY_H
