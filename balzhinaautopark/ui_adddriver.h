/********************************************************************************
** Form generated from reading UI file 'adddriver.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDDRIVER_H
#define UI_ADDDRIVER_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AddDriver
{
public:
    QPushButton *pushButton;
    QLineEdit *lineEditMiddlename;
    QLineEdit *lineEditLicencenumber;
    QLineEdit *lineEditLastname;
    QDateEdit *dateEditBirthday;
    QLineEdit *lineEditName;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;

    void setupUi(QWidget *AddDriver)
    {
        if (AddDriver->objectName().isEmpty())
            AddDriver->setObjectName("AddDriver");
        AddDriver->resize(520, 570);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(AddDriver->sizePolicy().hasHeightForWidth());
        AddDriver->setSizePolicy(sizePolicy);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/new/img/icon.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        AddDriver->setWindowIcon(icon);
        AddDriver->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
""));
        pushButton = new QPushButton(AddDriver);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(90, 460, 329, 51));
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
        lineEditMiddlename = new QLineEdit(AddDriver);
        lineEditMiddlename->setObjectName("lineEditMiddlename");
        lineEditMiddlename->setGeometry(QRect(90, 293, 329, 31));
        lineEditMiddlename->setStyleSheet(QString::fromUtf8("\n"
"    border-width: 1px;\n"
"    border-style: solid;\n"
"    border-color: black;\n"
"	border-radius: 7px;\n"
""));
        lineEditLicencenumber = new QLineEdit(AddDriver);
        lineEditLicencenumber->setObjectName("lineEditLicencenumber");
        lineEditLicencenumber->setGeometry(QRect(90, 413, 329, 31));
        QFont font1;
        font1.setPointSize(10);
        lineEditLicencenumber->setFont(font1);
        lineEditLicencenumber->setStyleSheet(QString::fromUtf8("\n"
"    border-width: 1px;\n"
"    border-style: solid;\n"
"    border-color: black;\n"
"	border-radius: 7px;\n"
""));
        lineEditLastname = new QLineEdit(AddDriver);
        lineEditLastname->setObjectName("lineEditLastname");
        lineEditLastname->setGeometry(QRect(90, 173, 329, 31));
        sizePolicy.setHeightForWidth(lineEditLastname->sizePolicy().hasHeightForWidth());
        lineEditLastname->setSizePolicy(sizePolicy);
        lineEditLastname->setStyleSheet(QString::fromUtf8("\n"
"    border-width: 1px;\n"
"    border-style: solid;\n"
"    border-color: black;\n"
"	border-radius: 7px;\n"
""));
        dateEditBirthday = new QDateEdit(AddDriver);
        dateEditBirthday->setObjectName("dateEditBirthday");
        dateEditBirthday->setGeometry(QRect(90, 353, 329, 31));
        dateEditBirthday->setStyleSheet(QString::fromUtf8("\n"
"    border-width: 1px;\n"
"    border-style: solid;\n"
"    border-color: black;\n"
"	border-radius: 7px;\n"
""));
        lineEditName = new QLineEdit(AddDriver);
        lineEditName->setObjectName("lineEditName");
        lineEditName->setGeometry(QRect(90, 233, 329, 31));
        lineEditName->setStyleSheet(QString::fromUtf8("\n"
"    border-width: 1px;\n"
"    border-style: solid;\n"
"    border-color: black;\n"
"	border-radius: 7px;\n"
""));
        label = new QLabel(AddDriver);
        label->setObjectName("label");
        label->setGeometry(QRect(90, 390, 281, 20));
        label_2 = new QLabel(AddDriver);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(90, 330, 121, 20));
        label_3 = new QLabel(AddDriver);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(90, 270, 71, 20));
        label_4 = new QLabel(AddDriver);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(90, 210, 63, 20));
        label_5 = new QLabel(AddDriver);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(90, 150, 71, 20));

        retranslateUi(AddDriver);

        QMetaObject::connectSlotsByName(AddDriver);
    } // setupUi

    void retranslateUi(QWidget *AddDriver)
    {
        AddDriver->setWindowTitle(QCoreApplication::translate("AddDriver", "Form", nullptr));
        pushButton->setText(QCoreApplication::translate("AddDriver", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \320\262\320\276\320\264\320\270\321\202\320\265\320\273\321\217", nullptr));
        label->setText(QCoreApplication::translate("AddDriver", "\320\235\320\276\320\274\320\265\321\200 \320\262\320\276\320\264\320\270\321\202\320\265\320\273\321\214\321\201\320\272\320\276\320\263\320\276 \321\203\320\264\320\276\321\201\321\202\320\276\320\262\320\265\321\200\320\265\320\275\320\270\321\217", nullptr));
        label_2->setText(QCoreApplication::translate("AddDriver", "\320\224\320\260\321\202\320\260 \321\200\320\276\320\266\320\264\320\265\320\275\320\270\321\217", nullptr));
        label_3->setText(QCoreApplication::translate("AddDriver", "\320\236\321\202\321\207\320\265\321\201\321\202\320\262\320\276", nullptr));
        label_4->setText(QCoreApplication::translate("AddDriver", "\320\230\320\274\321\217", nullptr));
        label_5->setText(QCoreApplication::translate("AddDriver", "\320\244\320\260\320\274\320\270\320\273\320\270\321\217", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddDriver: public Ui_AddDriver {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDDRIVER_H
