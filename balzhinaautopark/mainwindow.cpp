#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->stackedWidget->setCurrentIndex(0);


}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_action_triggered()
{
    conwindow = new connectionDialog();
    conwindow->show();
}

void MainWindow::on_actionQuery_triggered()
{
    QueryWin = new query();
    QueryWin->show();
}

void MainWindow::on_pushButtonAddDriver_clicked()
{
    AddDriverWin = new AddDriver();
    connect(AddDriverWin,SIGNAL(refreshTableDriver()),this,SLOT(buttonRefreshDriver()));
    AddDriverWin->show();
}


void MainWindow::on_pushButtonAddBus_clicked()
{
    AddAutomobilesWin = new AddAutomobiles();
    connect(AddAutomobilesWin,SIGNAL(refreshTableAutomobiles()),this,SLOT(buttonRefreshAutomobiles()));
    AddAutomobilesWin->show();
}


void MainWindow::on_pushButtonAddAD_clicked()
{
    AddADWin = new AddAD();
    connect(AddADWin,SIGNAL(refreshTableAD()),this,SLOT(buttonRefreshAD()));
    AddADWin->show();
}


void MainWindow::on_pushButtonAddItinerary_clicked()
{
    AddItineraryWin = new AddItinerary();
    connect(AddItineraryWin,SIGNAL(refreshTableItinerary()),this,SLOT(buttonRefreshItinerary()));
    AddItineraryWin->show();
}


void MainWindow::on_pushButtonAddRoutes_clicked()
{
    AddRoutesWin =  new AddRoutes();
    connect(AddRoutesWin,SIGNAL(refreshTableRoutes()),this,SLOT(buttonRefreshRoute()));
    AddRoutesWin->show();
}

void MainWindow::on_pushButtonDriver_clicked(){
    ui->stackedWidget->setCurrentIndex(1);
     LoadDriversTable();
}
void MainWindow::on_pushButtonAuto_clicked(){
    ui->stackedWidget->setCurrentIndex(2);
    LoadAutomobilesTable();
}
void MainWindow::on_pushButtonAutoDriver_clicked(){
    ui->stackedWidget->setCurrentIndex(3);
    LoadADTable();
}
void MainWindow::on_pushButtonItinerary_clicked(){
    ui->stackedWidget->setCurrentIndex(4);
    LoadItineraryTable();
}
void MainWindow::on_pushButtonRoutes_clicked(){
    ui->stackedWidget->setCurrentIndex(5);
    LoadRoutesTable();
}

void MainWindow::on_pushButtonLoadDriver_clicked(){LoadDriversTable();}
void MainWindow::on_pushButtonLoadBus_clicked(){LoadAutomobilesTable();}
void MainWindow::on_pushButtonLoadAD_clicked(){LoadADTable();}
void MainWindow::on_pushButtonLoadItinerary_clicked(){LoadItineraryTable();}
void MainWindow::on_pushButtonLoadRoutes_clicked(){LoadRoutesTable();}

void MainWindow::buttonRefreshDriver(){LoadDriversTable();}
void MainWindow::buttonRefreshAutomobiles(){LoadAutomobilesTable();}
void MainWindow::buttonRefreshRoute(){LoadRoutesTable();}
void MainWindow::buttonRefreshAD(){LoadADTable();}
void MainWindow::buttonRefreshItinerary(){LoadItineraryTable();}


QString TableName(TableViewVariant TableVariant)
{
    switch(TableVariant){
    case drivers:
        return "drivers";
        break;
    case automobiles:
        return "automobiles";
        break;
    case routes:
        return "routes";
        break;
    case automobiles_drivers:
        return "automobiles_drivers";
        break;
    case itinerary:
        return "itinerary";
        break;
    }
    return 0;
}


void MainWindow::CustomMenu(const QPoint &pos, QTableView *tableView, TableViewVariant tableVariant)
{
    QModelIndex index = tableView->currentIndex();
    int temp_ID = tableView->model()->data(tableView->model()->index(index.row(),0)).toInt();

    QString CurrentTable = TableName(tableVariant);

    QMenu *menu = new QMenu(this);

    QAction *ModifyRec = new QAction("Изменить...", this);
    QAction *DeleteRec = new QAction("Удалить", this);

    connect(ModifyRec, &QAction::triggered, [=]() {
        ModRecAction(temp_ID, tableVariant);
    });
    connect(DeleteRec, &QAction::triggered, [=]() {
        DelRecAction(temp_ID, tableVariant);
    });

    menu->addAction(ModifyRec);
    menu->addAction(DeleteRec);
    menu->popup(tableView->viewport()->mapToGlobal(pos));



}


void MainWindow::ModRecAction(int selectedID, TableViewVariant selectedTable)
{
    switch (selectedTable) {
    case drivers:{
        UpdateDrivers = new updateDrivers(selectedID);
        connect(UpdateDrivers,SIGNAL(refreshTableDriver()),this,SLOT(buttonRefreshDriver()));
        UpdateDrivers->show();
        break;
    }
    case automobiles:{
        UpdateAutomobiles = new updateAutomobiles(selectedID);
        connect(UpdateAutomobiles,SIGNAL(refreshTableAutomobiles()),this,SLOT(buttonRefreshAutomobiles()));
        UpdateAutomobiles->show();
        break;
    }
    case routes:{
        UpdateRoutes = new updateRoutes(selectedID);
        connect(UpdateRoutes,SIGNAL(refreshTableRoutes()),this,SLOT(buttonRefreshRoute()));
        UpdateRoutes->show();
        break;
    }
    case automobiles_drivers:{
        UpdateAutomobilesDrivers = new updateAD(selectedID);
        connect(UpdateAutomobilesDrivers,SIGNAL(refreshTableAD()),this,SLOT(buttonRefreshAD()));
        UpdateAutomobilesDrivers->show();
        break;
    }
    case itinerary:{
        UpdateItinerary = new updateItinerary(selectedID);
        connect(UpdateItinerary,SIGNAL(refreshTableItinerary()),this,SLOT(buttonRefreshItinerary()));
        UpdateItinerary->show();
        break;
    }
    }
}


void MainWindow::DelRecAction(int selectedID, TableViewVariant selectedTable)
{
    QString Table = TableName(selectedTable);

    QSqlQuery query;
    query.prepare("SELECT public.delete_"+Table+"(:ID)");
    query.bindValue(":ID", selectedID);


    if (query.exec()){
        switch(selectedTable) {
            case drivers:
                LoadDriversTable();
                break;
            case automobiles:
                LoadAutomobilesTable();
                break;
            case routes:
                LoadRoutesTable();
                break;
            case automobiles_drivers:
                LoadADTable();
                break;
            case itinerary:
                LoadItineraryTable();
                break;
            }
        }
    else {
        QMessageBox msg;
        msg.setText("Не получилось удалить элемент таблицы");
        qDebug() << query.lastError().text();
    }
}






void MainWindow::on_tableViewDrivers_customContextMenuRequested(const QPoint &pos)
{
    CustomMenu(pos,ui->tableViewDrivers,TableViewVariant::drivers);
}


void MainWindow::on_tableViewBus_customContextMenuRequested(const QPoint &pos)
{
    CustomMenu(pos,ui->tableViewBus,TableViewVariant::automobiles);
}


void MainWindow::on_tableViewAD_customContextMenuRequested(const QPoint &pos)
{
    CustomMenu(pos,ui->tableViewAD,TableViewVariant::automobiles_drivers);
}


void MainWindow::on_tableViewItinerary_customContextMenuRequested(const QPoint &pos)
{
    CustomMenu(pos,ui->tableViewItinerary,TableViewVariant::itinerary);
}


void MainWindow::on_tableViewRoutes_customContextMenuRequested(const QPoint &pos)
{
    CustomMenu(pos,ui->tableViewRoutes,TableViewVariant::routes);
}


void MainWindow::LoadDriversTable(){
    QTableView *tableView = this->ui->tableViewDrivers;
    delete tableView->model();

    this->ui->tableViewDrivers->setModel(DBquery->selectDriverTable());
    ui->tableViewDrivers->setColumnHidden(0,true);
}

void MainWindow::LoadAutomobilesTable(){
    QTableView *tableView = this->ui->tableViewDrivers;
    delete tableView->model();

    this->ui->tableViewBus->setModel(DBquery->selectAutoTable());
    ui->tableViewBus->setColumnHidden(0,true);
    ui->tableViewBus->setColumnHidden(5,true);

}

void MainWindow::LoadADTable(){
    QTableView *tableView = this->ui->tableViewDrivers;
    delete tableView->model();

    this->ui->tableViewAD->setModel(DBquery->selectADTable());
    ui->tableViewAD->setColumnHidden(0,true);
}

void MainWindow::LoadRoutesTable(){
    QTableView *tableView = this->ui->tableViewDrivers;
    delete tableView->model();

    this->ui->tableViewRoutes->setModel(DBquery->selectRoutesTable());
    ui->tableViewRoutes->setColumnHidden(0,true);
}

void MainWindow::LoadItineraryTable(){
    QTableView *tableView = this->ui->tableViewDrivers;
    delete tableView->model();

    this->ui->tableViewItinerary->setModel(DBquery->selectItineraryTable());
    ui->tableViewItinerary->setColumnHidden(0,true);

}


void MainWindow::on_pushButtonRoutes_2_clicked()
{
    close();
}

void MainWindow::showWindow()
{
    show();
}


