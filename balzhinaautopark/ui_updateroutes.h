/********************************************************************************
** Form generated from reading UI file 'updateroutes.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UPDATEROUTES_H
#define UI_UPDATEROUTES_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_updateRoutes
{
public:
    QLabel *label_2;
    QLineEdit *lineEditDistance;
    QLabel *label;
    QLineEdit *lineEditEndLoc;
    QLabel *label_3;
    QLineEdit *lineEditStartLoc;
    QPushButton *pushButton;

    void setupUi(QWidget *updateRoutes)
    {
        if (updateRoutes->objectName().isEmpty())
            updateRoutes->setObjectName("updateRoutes");
        updateRoutes->resize(520, 570);
        updateRoutes->setMaximumSize(QSize(520, 570));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/new/img/icon.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        updateRoutes->setWindowIcon(icon);
        updateRoutes->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        label_2 = new QLabel(updateRoutes);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(90, 170, 131, 20));
        QFont font;
        font.setPointSize(9);
        font.setBold(false);
        label_2->setFont(font);
        lineEditDistance = new QLineEdit(updateRoutes);
        lineEditDistance->setObjectName("lineEditDistance");
        lineEditDistance->setGeometry(QRect(90, 250, 329, 31));
        QFont font1;
        font1.setPointSize(10);
        font1.setBold(false);
        lineEditDistance->setFont(font1);
        lineEditDistance->setStyleSheet(QString::fromUtf8("\n"
"    border-width: 1px;\n"
"    border-style: solid;\n"
"    border-color: black;\n"
"	border-radius: 7px;"));
        label = new QLabel(updateRoutes);
        label->setObjectName("label");
        label->setGeometry(QRect(90, 110, 151, 20));
        label->setFont(font);
        lineEditEndLoc = new QLineEdit(updateRoutes);
        lineEditEndLoc->setObjectName("lineEditEndLoc");
        lineEditEndLoc->setGeometry(QRect(90, 190, 329, 31));
        lineEditEndLoc->setFont(font1);
        lineEditEndLoc->setStyleSheet(QString::fromUtf8("\n"
"    border-width: 1px;\n"
"    border-style: solid;\n"
"    border-color: black;\n"
"	border-radius: 7px;"));
        label_3 = new QLabel(updateRoutes);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(90, 230, 91, 20));
        label_3->setFont(font);
        lineEditStartLoc = new QLineEdit(updateRoutes);
        lineEditStartLoc->setObjectName("lineEditStartLoc");
        lineEditStartLoc->setGeometry(QRect(90, 133, 329, 31));
        lineEditStartLoc->setFont(font1);
        lineEditStartLoc->setStyleSheet(QString::fromUtf8("\n"
"    border-width: 1px;\n"
"    border-style: solid;\n"
"    border-color: black;\n"
"	border-radius: 7px;"));
        pushButton = new QPushButton(updateRoutes);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(90, 290, 331, 41));
        QFont font2;
        font2.setPointSize(10);
        font2.setBold(true);
        pushButton->setFont(font2);
        pushButton->setStyleSheet(QString::fromUtf8("\n"
"QPushButton{\n"
"	background-color: #0089D9;\n"
"	border: none;\n"
"	color: white;\n"
"	border-radius: 7px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background: #00598C;}"));

        retranslateUi(updateRoutes);

        QMetaObject::connectSlotsByName(updateRoutes);
    } // setupUi

    void retranslateUi(QWidget *updateRoutes)
    {
        updateRoutes->setWindowTitle(QCoreApplication::translate("updateRoutes", "\320\234\320\260\321\200\321\210\321\200\321\203\321\202", nullptr));
        label_2->setText(QCoreApplication::translate("updateRoutes", "\320\242\320\276\321\207\320\272\320\260 \320\277\321\200\320\270\320\261\321\213\321\202\320\270\321\217", nullptr));
        label->setText(QCoreApplication::translate("updateRoutes", "\320\242\320\276\321\207\320\272\320\260 \320\276\321\202\320\277\321\200\320\260\320\262\320\264\320\265\320\275\320\270\321\217", nullptr));
        label_3->setText(QCoreApplication::translate("updateRoutes", "\320\240\320\260\321\201\321\201\321\202\320\276\321\217\320\275\320\270\320\265", nullptr));
        pushButton->setText(QCoreApplication::translate("updateRoutes", "\320\230\320\267\320\274\320\265\320\275\320\270\321\202\321\214 \320\274\320\260\321\200\321\210\321\200\321\203\321\202", nullptr));
    } // retranslateUi

};

namespace Ui {
    class updateRoutes: public Ui_updateRoutes {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UPDATEROUTES_H
