/********************************************************************************
** Form generated from reading UI file 'updatedrivers.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UPDATEDRIVERS_H
#define UI_UPDATEDRIVERS_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_updateDrivers
{
public:
    QPushButton *pushButton;
    QDateEdit *dateEditBirthday;
    QLabel *label_4;
    QLabel *label;
    QLineEdit *lineEditLicencenumber;
    QLineEdit *lineEditName;
    QLabel *label_2;
    QLabel *label_5;
    QLineEdit *lineEditLastname;
    QLabel *label_3;
    QLineEdit *lineEditMiddlename;

    void setupUi(QWidget *updateDrivers)
    {
        if (updateDrivers->objectName().isEmpty())
            updateDrivers->setObjectName("updateDrivers");
        updateDrivers->resize(520, 570);
        updateDrivers->setMaximumSize(QSize(520, 570));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/new/img/icon.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        updateDrivers->setWindowIcon(icon);
        updateDrivers->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        pushButton = new QPushButton(updateDrivers);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(100, 417, 329, 51));
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        pushButton->setFont(font);
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
        dateEditBirthday = new QDateEdit(updateDrivers);
        dateEditBirthday->setObjectName("dateEditBirthday");
        dateEditBirthday->setGeometry(QRect(100, 310, 329, 31));
        dateEditBirthday->setStyleSheet(QString::fromUtf8("\n"
"    border-width: 1px;\n"
"    border-style: solid;\n"
"    border-color: black;\n"
"	border-radius: 7px;\n"
""));
        label_4 = new QLabel(updateDrivers);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(100, 167, 63, 20));
        label = new QLabel(updateDrivers);
        label->setObjectName("label");
        label->setGeometry(QRect(100, 347, 281, 20));
        lineEditLicencenumber = new QLineEdit(updateDrivers);
        lineEditLicencenumber->setObjectName("lineEditLicencenumber");
        lineEditLicencenumber->setGeometry(QRect(100, 370, 329, 31));
        QFont font1;
        font1.setPointSize(10);
        lineEditLicencenumber->setFont(font1);
        lineEditLicencenumber->setStyleSheet(QString::fromUtf8("\n"
"    border-width: 1px;\n"
"    border-style: solid;\n"
"    border-color: black;\n"
"	border-radius: 7px;\n"
""));
        lineEditName = new QLineEdit(updateDrivers);
        lineEditName->setObjectName("lineEditName");
        lineEditName->setGeometry(QRect(100, 190, 329, 31));
        lineEditName->setStyleSheet(QString::fromUtf8("\n"
"    border-width: 1px;\n"
"    border-style: solid;\n"
"    border-color: black;\n"
"	border-radius: 7px;\n"
""));
        label_2 = new QLabel(updateDrivers);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(100, 287, 121, 20));
        label_5 = new QLabel(updateDrivers);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(100, 107, 71, 20));
        lineEditLastname = new QLineEdit(updateDrivers);
        lineEditLastname->setObjectName("lineEditLastname");
        lineEditLastname->setGeometry(QRect(100, 130, 329, 31));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lineEditLastname->sizePolicy().hasHeightForWidth());
        lineEditLastname->setSizePolicy(sizePolicy);
        lineEditLastname->setStyleSheet(QString::fromUtf8("\n"
"    border-width: 1px;\n"
"    border-style: solid;\n"
"    border-color: black;\n"
"	border-radius: 7px;\n"
""));
        label_3 = new QLabel(updateDrivers);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(100, 227, 71, 20));
        lineEditMiddlename = new QLineEdit(updateDrivers);
        lineEditMiddlename->setObjectName("lineEditMiddlename");
        lineEditMiddlename->setGeometry(QRect(100, 250, 329, 31));
        lineEditMiddlename->setStyleSheet(QString::fromUtf8("\n"
"    border-width: 1px;\n"
"    border-style: solid;\n"
"    border-color: black;\n"
"	border-radius: 7px;\n"
""));

        retranslateUi(updateDrivers);

        QMetaObject::connectSlotsByName(updateDrivers);
    } // setupUi

    void retranslateUi(QWidget *updateDrivers)
    {
        updateDrivers->setWindowTitle(QCoreApplication::translate("updateDrivers", "\320\222\320\276\320\264\320\270\321\202\320\265\320\273\320\270", nullptr));
        pushButton->setText(QCoreApplication::translate("updateDrivers", "\320\230\320\267\320\274\320\265\320\275\320\270\321\202\321\214 \320\262\320\276\320\264\320\270\321\202\320\265\320\273\321\217", nullptr));
        label_4->setText(QCoreApplication::translate("updateDrivers", "\320\230\320\274\321\217", nullptr));
        label->setText(QCoreApplication::translate("updateDrivers", "\320\235\320\276\320\274\320\265\321\200 \320\262\320\276\320\264\320\270\321\202\320\265\320\273\321\214\321\201\320\272\320\276\320\263\320\276 \321\203\320\264\320\276\321\201\321\202\320\276\320\262\320\265\321\200\320\265\320\275\320\270\321\217", nullptr));
        label_2->setText(QCoreApplication::translate("updateDrivers", "\320\224\320\260\321\202\320\260 \321\200\320\276\320\266\320\264\320\265\320\275\320\270\321\217", nullptr));
        label_5->setText(QCoreApplication::translate("updateDrivers", "\320\244\320\260\320\274\320\270\320\273\320\270\321\217", nullptr));
        label_3->setText(QCoreApplication::translate("updateDrivers", "\320\236\321\202\321\207\320\265\321\201\321\202\320\262\320\276", nullptr));
    } // retranslateUi

};

namespace Ui {
    class updateDrivers: public Ui_updateDrivers {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UPDATEDRIVERS_H
