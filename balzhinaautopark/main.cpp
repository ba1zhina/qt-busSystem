#include "mainwindow.h"

#include <QApplication>
#include <QObject>

int main(int argc, char *argv[])
{

    QApplication a(argc, argv);

    connectionDialog* ConnDia = new connectionDialog;
    MainWindow* w = new MainWindow;

    ConnDia->show();

    QObject::connect(ConnDia, &connectionDialog::connectedSignal, w, &MainWindow::showWindow);
    return a.exec();
}
