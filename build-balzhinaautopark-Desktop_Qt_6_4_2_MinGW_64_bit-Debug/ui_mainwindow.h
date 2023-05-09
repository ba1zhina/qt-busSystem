/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *action;
    QAction *actionQuery;
    QWidget *centralwidget;
    QPushButton *pushButtonDriver;
    QPushButton *pushButtonRoutes;
    QPushButton *pushButtonItinerary;
    QPushButton *pushButtonAutoDriver;
    QPushButton *pushButtonAuto;
    QLabel *label;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QWidget *page_2;
    QLabel *label_2;
    QTableView *tableViewDrivers;
    QPushButton *pushButtonAddDriver;
    QPushButton *pushButtonLoadDriver;
    QWidget *page_3;
    QLabel *label_3;
    QTableView *tableViewBus;
    QPushButton *pushButtonAddBus;
    QPushButton *pushButtonLoadBus;
    QWidget *page_4;
    QLabel *label_4;
    QTableView *tableViewAD;
    QPushButton *pushButtonAddAD;
    QPushButton *pushButtonLoadAD;
    QWidget *page_5;
    QLabel *label_5;
    QTableView *tableViewItinerary;
    QPushButton *pushButtonAddItinerary;
    QPushButton *pushButtonLoadItinerary;
    QWidget *page_6;
    QLabel *label_6;
    QTableView *tableViewRoutes;
    QPushButton *pushButtonAddRoutes;
    QPushButton *pushButtonLoadRoutes;
    QFrame *frame;
    QMenuBar *menubar;
    QMenu *menu;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1200, 700);
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setMinimumSize(QSize(800, 600));
        MainWindow->setMaximumSize(QSize(1200, 700));
        action = new QAction(MainWindow);
        action->setObjectName("action");
        action->setCheckable(false);
        actionQuery = new QAction(MainWindow);
        actionQuery->setObjectName("actionQuery");
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        pushButtonDriver = new QPushButton(centralwidget);
        pushButtonDriver->setObjectName("pushButtonDriver");
        pushButtonDriver->setGeometry(QRect(30, 40, 231, 61));
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        pushButtonDriver->setFont(font);
        pushButtonDriver->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #0089D9;\n"
"	border: none;\n"
"	color: white;\n"
"	border-radius: 7px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background: #00598C;}"));
        pushButtonRoutes = new QPushButton(centralwidget);
        pushButtonRoutes->setObjectName("pushButtonRoutes");
        pushButtonRoutes->setGeometry(QRect(30, 320, 231, 61));
        pushButtonRoutes->setFont(font);
        pushButtonRoutes->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #0089D9;\n"
"	border: none;\n"
"	color: white;\n"
"	border-radius: 7px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background: #00598C;}"));
        pushButtonItinerary = new QPushButton(centralwidget);
        pushButtonItinerary->setObjectName("pushButtonItinerary");
        pushButtonItinerary->setGeometry(QRect(30, 250, 231, 61));
        pushButtonItinerary->setFont(font);
        pushButtonItinerary->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #0089D9;\n"
"	border: none;\n"
"	color: white;\n"
"	border-radius: 7px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background: #00598C;}"));
        pushButtonAutoDriver = new QPushButton(centralwidget);
        pushButtonAutoDriver->setObjectName("pushButtonAutoDriver");
        pushButtonAutoDriver->setGeometry(QRect(30, 180, 231, 61));
        pushButtonAutoDriver->setFont(font);
        pushButtonAutoDriver->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #0089D9;\n"
"	border: none;\n"
"	color: white;\n"
"	border-radius: 7px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background: #00598C;}"));
        pushButtonAuto = new QPushButton(centralwidget);
        pushButtonAuto->setObjectName("pushButtonAuto");
        pushButtonAuto->setGeometry(QRect(30, 110, 231, 61));
        pushButtonAuto->setFont(font);
        pushButtonAuto->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #0089D9;\n"
"	border: none;\n"
"	color: white;\n"
"	border-radius: 7px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background: #00598C;}"));
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(0, 0, 1200, 900));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy1);
        QFont font1;
        font1.setPointSize(12);
        label->setFont(font1);
        label->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName("stackedWidget");
        stackedWidget->setGeometry(QRect(270, 40, 911, 700));
        stackedWidget->setStyleSheet(QString::fromUtf8("background-color: rgba(0, 0, 0, 0)"));
        page = new QWidget();
        page->setObjectName("page");
        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName("page_2");
        label_2 = new QLabel(page_2);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(20, 10, 881, 31));
        QFont font2;
        font2.setPointSize(14);
        font2.setBold(true);
        label_2->setFont(font2);
        label_2->setStyleSheet(QString::fromUtf8("border-width: 1px;\n"
"    border-style: solid;\n"
"    border-color: black;\n"
"	border-radius: 7px;"));
        tableViewDrivers = new QTableView(page_2);
        tableViewDrivers->setObjectName("tableViewDrivers");
        tableViewDrivers->setGeometry(QRect(20, 50, 881, 471));
        tableViewDrivers->setContextMenuPolicy(Qt::CustomContextMenu);
        tableViewDrivers->setSelectionMode(QAbstractItemView::SingleSelection);
        tableViewDrivers->setSelectionBehavior(QAbstractItemView::SelectRows);
        pushButtonAddDriver = new QPushButton(page_2);
        pushButtonAddDriver->setObjectName("pushButtonAddDriver");
        pushButtonAddDriver->setGeometry(QRect(740, 530, 161, 51));
        pushButtonAddDriver->setFont(font);
        pushButtonAddDriver->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #0089D9;\n"
"	border: none;\n"
"	color: white;\n"
"	border-radius: 7px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background: #00598C;}"));
        pushButtonLoadDriver = new QPushButton(page_2);
        pushButtonLoadDriver->setObjectName("pushButtonLoadDriver");
        pushButtonLoadDriver->setGeometry(QRect(570, 530, 161, 51));
        pushButtonLoadDriver->setFont(font);
        pushButtonLoadDriver->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #0089D9;\n"
"	border: none;\n"
"	color: white;\n"
"	border-radius: 7px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background: #00598C;}"));
        stackedWidget->addWidget(page_2);
        page_3 = new QWidget();
        page_3->setObjectName("page_3");
        label_3 = new QLabel(page_3);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(20, 10, 881, 31));
        label_3->setFont(font2);
        label_3->setStyleSheet(QString::fromUtf8("border-width: 1px;\n"
"    border-style: solid;\n"
"    border-color: black;\n"
"	border-radius: 7px;"));
        tableViewBus = new QTableView(page_3);
        tableViewBus->setObjectName("tableViewBus");
        tableViewBus->setGeometry(QRect(20, 50, 881, 471));
        tableViewBus->setContextMenuPolicy(Qt::CustomContextMenu);
        tableViewBus->setSelectionMode(QAbstractItemView::SingleSelection);
        tableViewBus->setSelectionBehavior(QAbstractItemView::SelectRows);
        pushButtonAddBus = new QPushButton(page_3);
        pushButtonAddBus->setObjectName("pushButtonAddBus");
        pushButtonAddBus->setGeometry(QRect(740, 530, 161, 51));
        pushButtonAddBus->setFont(font);
        pushButtonAddBus->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #0089D9;\n"
"	border: none;\n"
"	color: white;\n"
"	border-radius: 7px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background: #00598C;}"));
        pushButtonLoadBus = new QPushButton(page_3);
        pushButtonLoadBus->setObjectName("pushButtonLoadBus");
        pushButtonLoadBus->setGeometry(QRect(570, 530, 161, 51));
        pushButtonLoadBus->setFont(font);
        pushButtonLoadBus->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #0089D9;\n"
"	border: none;\n"
"	color: white;\n"
"	border-radius: 7px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background: #00598C;}"));
        stackedWidget->addWidget(page_3);
        page_4 = new QWidget();
        page_4->setObjectName("page_4");
        label_4 = new QLabel(page_4);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(20, 10, 881, 31));
        label_4->setFont(font2);
        label_4->setStyleSheet(QString::fromUtf8("border-width: 1px;\n"
"    border-style: solid;\n"
"    border-color: black;\n"
"	border-radius: 7px;\n"
"\n"
""));
        tableViewAD = new QTableView(page_4);
        tableViewAD->setObjectName("tableViewAD");
        tableViewAD->setGeometry(QRect(20, 50, 881, 471));
        tableViewAD->setContextMenuPolicy(Qt::CustomContextMenu);
        tableViewAD->setSelectionMode(QAbstractItemView::SingleSelection);
        tableViewAD->setSelectionBehavior(QAbstractItemView::SelectRows);
        pushButtonAddAD = new QPushButton(page_4);
        pushButtonAddAD->setObjectName("pushButtonAddAD");
        pushButtonAddAD->setGeometry(QRect(740, 530, 161, 51));
        pushButtonAddAD->setFont(font);
        pushButtonAddAD->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #0089D9;\n"
"	border: none;\n"
"	color: white;\n"
"	border-radius: 7px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background: #00598C;}"));
        pushButtonLoadAD = new QPushButton(page_4);
        pushButtonLoadAD->setObjectName("pushButtonLoadAD");
        pushButtonLoadAD->setGeometry(QRect(570, 530, 161, 51));
        pushButtonLoadAD->setFont(font);
        pushButtonLoadAD->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #0089D9;\n"
"	border: none;\n"
"	color: white;\n"
"	border-radius: 7px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background: #00598C;}"));
        stackedWidget->addWidget(page_4);
        page_5 = new QWidget();
        page_5->setObjectName("page_5");
        label_5 = new QLabel(page_5);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(20, 10, 881, 31));
        label_5->setFont(font2);
        label_5->setStyleSheet(QString::fromUtf8("border-width: 1px;\n"
"    border-style: solid;\n"
"    border-color: black;\n"
"	border-radius: 7px;"));
        tableViewItinerary = new QTableView(page_5);
        tableViewItinerary->setObjectName("tableViewItinerary");
        tableViewItinerary->setGeometry(QRect(20, 50, 881, 471));
        tableViewItinerary->setContextMenuPolicy(Qt::CustomContextMenu);
        tableViewItinerary->setSelectionMode(QAbstractItemView::SingleSelection);
        tableViewItinerary->setSelectionBehavior(QAbstractItemView::SelectRows);
        pushButtonAddItinerary = new QPushButton(page_5);
        pushButtonAddItinerary->setObjectName("pushButtonAddItinerary");
        pushButtonAddItinerary->setGeometry(QRect(740, 530, 161, 51));
        pushButtonAddItinerary->setFont(font);
        pushButtonAddItinerary->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #0089D9;\n"
"	border: none;\n"
"	color: white;\n"
"	border-radius: 7px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background: #00598C;}"));
        pushButtonLoadItinerary = new QPushButton(page_5);
        pushButtonLoadItinerary->setObjectName("pushButtonLoadItinerary");
        pushButtonLoadItinerary->setGeometry(QRect(570, 530, 161, 51));
        pushButtonLoadItinerary->setFont(font);
        pushButtonLoadItinerary->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #0089D9;\n"
"	border: none;\n"
"	color: white;\n"
"	border-radius: 7px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background: #00598C;}"));
        stackedWidget->addWidget(page_5);
        page_6 = new QWidget();
        page_6->setObjectName("page_6");
        label_6 = new QLabel(page_6);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(20, 10, 881, 31));
        label_6->setFont(font2);
        label_6->setStyleSheet(QString::fromUtf8("border-width: 1px;\n"
"    border-style: solid;\n"
"    border-color: black;\n"
"	border-radius: 7px;"));
        tableViewRoutes = new QTableView(page_6);
        tableViewRoutes->setObjectName("tableViewRoutes");
        tableViewRoutes->setGeometry(QRect(20, 50, 881, 471));
        tableViewRoutes->setContextMenuPolicy(Qt::CustomContextMenu);
        tableViewRoutes->setSelectionMode(QAbstractItemView::SingleSelection);
        tableViewRoutes->setSelectionBehavior(QAbstractItemView::SelectRows);
        pushButtonAddRoutes = new QPushButton(page_6);
        pushButtonAddRoutes->setObjectName("pushButtonAddRoutes");
        pushButtonAddRoutes->setGeometry(QRect(740, 530, 161, 51));
        pushButtonAddRoutes->setFont(font);
        pushButtonAddRoutes->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #0089D9;\n"
"	border: none;\n"
"	color: white;\n"
"	border-radius: 7px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background: #00598C;}"));
        pushButtonLoadRoutes = new QPushButton(page_6);
        pushButtonLoadRoutes->setObjectName("pushButtonLoadRoutes");
        pushButtonLoadRoutes->setGeometry(QRect(570, 530, 161, 51));
        pushButtonLoadRoutes->setFont(font);
        pushButtonLoadRoutes->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #0089D9;\n"
"	border: none;\n"
"	color: white;\n"
"	border-radius: 7px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background: #00598C;}"));
        stackedWidget->addWidget(page_6);
        frame = new QFrame(centralwidget);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(280, 40, 900, 591));
        frame->setStyleSheet(QString::fromUtf8("border-width: 1px;\n"
"border-style: solid;\n"
"    border-color: black;\n"
"	border-radius: 7px;"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        MainWindow->setCentralWidget(centralwidget);
        label->raise();
        frame->raise();
        pushButtonDriver->raise();
        pushButtonRoutes->raise();
        pushButtonItinerary->raise();
        pushButtonAutoDriver->raise();
        pushButtonAuto->raise();
        stackedWidget->raise();
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1200, 26));
        menubar->setStyleSheet(QString::fromUtf8("QMenuBar{\n"
"	background: #EDEDED;}"));
        menu = new QMenu(menubar);
        menu->setObjectName("menu");
        menu->setStyleSheet(QString::fromUtf8("QMenu:hover{\n"
"	background: #666;\n"
"	color: black;\n"
"}\n"
""));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menu->menuAction());
        menu->addAction(action);
        menu->addAction(actionQuery);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(5);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Autopark", nullptr));
        action->setText(QCoreApplication::translate("MainWindow", "\320\237\320\276\320\264\320\272\320\273\321\216\321\207\320\270\321\202\321\201\321\217 \320\272 \320\221\320\224", nullptr));
        actionQuery->setText(QCoreApplication::translate("MainWindow", "\320\227\320\260\320\277\321\200\320\276\321\201\321\213", nullptr));
        pushButtonDriver->setText(QCoreApplication::translate("MainWindow", "\320\222\320\276\320\264\320\270\321\202\320\265\320\273\320\270", nullptr));
        pushButtonRoutes->setText(QCoreApplication::translate("MainWindow", "\320\234\320\260\321\200\321\210\321\200\321\203\321\202\321\213", nullptr));
        pushButtonItinerary->setText(QCoreApplication::translate("MainWindow", "\320\235\320\260\321\200\321\217\320\264\321\213", nullptr));
        pushButtonAutoDriver->setText(QCoreApplication::translate("MainWindow", "\320\227\320\260\320\272\321\200\320\265\320\277\320\273\320\265\320\275\320\275\321\213\320\265\n"
"\320\262\320\276\320\264\320\270\321\202\320\265\320\273\320\270", nullptr));
        pushButtonAuto->setText(QCoreApplication::translate("MainWindow", "\320\220\320\262\321\202\320\276\320\261\321\203\321\201\321\213", nullptr));
        label->setText(QString());
        label_2->setText(QCoreApplication::translate("MainWindow", "\320\222\320\276\320\264\320\270\321\202\320\265\320\273\320\270", nullptr));
        pushButtonAddDriver->setText(QCoreApplication::translate("MainWindow", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214...", nullptr));
        pushButtonLoadDriver->setText(QCoreApplication::translate("MainWindow", "\320\227\320\260\320\263\321\200\321\203\320\267\320\270\321\202\321\214", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "\320\220\320\262\321\202\320\276\320\261\321\203\321\201\321\213", nullptr));
        pushButtonAddBus->setText(QCoreApplication::translate("MainWindow", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214...", nullptr));
        pushButtonLoadBus->setText(QCoreApplication::translate("MainWindow", "\320\227\320\260\320\263\321\200\321\203\320\267\320\270\321\202\321\214", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "\320\227\320\260\320\272\321\200\320\265\320\277\320\273\320\265\320\275\320\275\321\213\320\265 \320\262\320\276\320\264\320\270\321\202\320\265\320\273\320\270", nullptr));
        pushButtonAddAD->setText(QCoreApplication::translate("MainWindow", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214...", nullptr));
        pushButtonLoadAD->setText(QCoreApplication::translate("MainWindow", "\320\227\320\260\320\263\321\200\321\203\320\267\320\270\321\202\321\214", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "\320\235\320\260\321\200\321\217\320\264\321\213", nullptr));
        pushButtonAddItinerary->setText(QCoreApplication::translate("MainWindow", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214...", nullptr));
        pushButtonLoadItinerary->setText(QCoreApplication::translate("MainWindow", "\320\227\320\260\320\263\321\200\321\203\320\267\320\270\321\202\321\214", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "\320\234\320\260\321\200\321\210\321\200\321\203\321\202\321\213", nullptr));
        pushButtonAddRoutes->setText(QCoreApplication::translate("MainWindow", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214...", nullptr));
        pushButtonLoadRoutes->setText(QCoreApplication::translate("MainWindow", "\320\227\320\260\320\263\321\200\321\203\320\267\320\270\321\202\321\214", nullptr));
        menu->setTitle(QCoreApplication::translate("MainWindow", "\320\234\320\265\320\275\321\216", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
