#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QSqlDatabase>
#include <QModelIndex>
#include <QMenu>
#include <QAction>

#include "connectiondialog.h"
#include "dbquery.h"
#include "query.h"

#include "adddriver.h"
#include "addautomobiles.h"
#include "addroutes.h"
#include "addad.h"
#include "additinerary.h"

#include "updatedrivers.h"
#include "updateautomobiles.h"
#include "updateroutes.h"
#include "updatead.h"
#include "updateitinerary.h"




QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

enum TableViewVariant{
    drivers,
    automobiles,
    routes,
    automobiles_drivers,
    itinerary
};

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    QSqlDatabase DB;

private slots:
    void on_action_triggered();
    void on_actionQuery_triggered();
    void on_pushButtonDriver_clicked();
    void on_pushButtonAuto_clicked();
    void on_pushButtonAutoDriver_clicked();
    void on_pushButtonItinerary_clicked();
    void on_pushButtonRoutes_clicked();
    void on_pushButtonLoadDriver_clicked();
    void on_pushButtonLoadBus_clicked();
    void on_pushButtonLoadAD_clicked();
    void on_pushButtonLoadItinerary_clicked();
    void on_pushButtonLoadRoutes_clicked();
    void on_pushButtonAddDriver_clicked();
    void on_pushButtonAddBus_clicked();
    void on_pushButtonAddAD_clicked();
    void on_pushButtonAddItinerary_clicked();
    void on_pushButtonAddRoutes_clicked();

    void ModRecAction(int selectedID, TableViewVariant selectedTable);
    void DelRecAction(int selectedID, TableViewVariant selectedTable);

    void on_tableViewDrivers_customContextMenuRequested(const QPoint &pos);
    void on_tableViewBus_customContextMenuRequested(const QPoint &pos);
    void on_tableViewAD_customContextMenuRequested(const QPoint &pos);
    void on_tableViewItinerary_customContextMenuRequested(const QPoint &pos);
    void on_tableViewRoutes_customContextMenuRequested(const QPoint &pos);

    void LoadDriversTable();
    void LoadAutomobilesTable();
    void LoadADTable();
    void LoadRoutesTable();
    void LoadItineraryTable();


private:
    Ui::MainWindow *ui;
    connectionDialog *conwindow;
    query *QueryWin;
    dbquery *DBquery;

    AddDriver *AddDriverWin;
    AddAutomobiles *AddAutomobilesWin;
    AddRoutes *AddRoutesWin;
    AddAD *AddADWin;
    AddItinerary *AddItineraryWin;


    updateDrivers *UpdateDrivers;
    updateAutomobiles *UpdateAutomobiles;
    updateRoutes *UpdateRoutes;
    updateAD *UpdateAutomobilesDrivers;
    updateItinerary *UpdateItinerary;

    void CustomMenu(const QPoint &pos, QTableView *tableView, TableViewVariant tableVariant);

};
#endif // MAINWINDOW_H
