#ifndef ITINERARY_H
#define ITINERARY_H

#include <QDialog>

namespace Ui {
class itinerary;
}

class itinerary : public QDialog
{
    Q_OBJECT

public:
    explicit itinerary(QWidget *parent = nullptr);
    ~itinerary();

private:
    Ui::itinerary *ui;
};

#endif // ITINERARY_H
