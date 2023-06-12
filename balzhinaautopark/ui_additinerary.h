/********************************************************************************
** Form generated from reading UI file 'additinerary.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDITINERARY_H
#define UI_ADDITINERARY_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateTimeEdit>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AddItinerary
{
public:
    QDateTimeEdit *dateTimeEditStart;
    QDateTimeEdit *dateTimeEditEnd;
    QComboBox *comboBoxRoutes;
    QComboBox *comboBoxAutomobiles;
    QPushButton *pushButton;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;

    void setupUi(QWidget *AddItinerary)
    {
        if (AddItinerary->objectName().isEmpty())
            AddItinerary->setObjectName("AddItinerary");
        AddItinerary->resize(520, 570);
        AddItinerary->setMaximumSize(QSize(520, 570));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/new/img/icon.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        AddItinerary->setWindowIcon(icon);
        AddItinerary->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        dateTimeEditStart = new QDateTimeEdit(AddItinerary);
        dateTimeEditStart->setObjectName("dateTimeEditStart");
        dateTimeEditStart->setGeometry(QRect(90, 173, 329, 31));
        dateTimeEditStart->setStyleSheet(QString::fromUtf8("\n"
"    border-width: 1px;\n"
"    border-style: solid;\n"
"    border-color: black;\n"
"	border-radius: 7px;"));
        dateTimeEditEnd = new QDateTimeEdit(AddItinerary);
        dateTimeEditEnd->setObjectName("dateTimeEditEnd");
        dateTimeEditEnd->setGeometry(QRect(90, 230, 329, 31));
        dateTimeEditEnd->setStyleSheet(QString::fromUtf8("\n"
"    border-width: 1px;\n"
"    border-style: solid;\n"
"    border-color: black;\n"
"	border-radius: 7px;"));
        comboBoxRoutes = new QComboBox(AddItinerary);
        comboBoxRoutes->setObjectName("comboBoxRoutes");
        comboBoxRoutes->setGeometry(QRect(90, 290, 329, 31));
        comboBoxRoutes->setStyleSheet(QString::fromUtf8("\n"
"    border-width: 1px;\n"
"    border-style: solid;\n"
"    border-color: black;\n"
"	border-radius: 7px;"));
        comboBoxAutomobiles = new QComboBox(AddItinerary);
        comboBoxAutomobiles->setObjectName("comboBoxAutomobiles");
        comboBoxAutomobiles->setGeometry(QRect(90, 350, 329, 31));
        comboBoxAutomobiles->setStyleSheet(QString::fromUtf8("\n"
"    border-width: 1px;\n"
"    border-style: solid;\n"
"    border-color: black;\n"
"	border-radius: 7px;"));
        pushButton = new QPushButton(AddItinerary);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(90, 390, 329, 41));
        QFont font;
        font.setPointSize(10);
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
        label = new QLabel(AddItinerary);
        label->setObjectName("label");
        label->setGeometry(QRect(90, 150, 141, 20));
        label_2 = new QLabel(AddItinerary);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(90, 210, 141, 20));
        label_3 = new QLabel(AddItinerary);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(90, 330, 101, 20));
        label_4 = new QLabel(AddItinerary);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(90, 270, 81, 20));

        retranslateUi(AddItinerary);

        QMetaObject::connectSlotsByName(AddItinerary);
    } // setupUi

    void retranslateUi(QWidget *AddItinerary)
    {
        AddItinerary->setWindowTitle(QCoreApplication::translate("AddItinerary", "Form", nullptr));
        pushButton->setText(QCoreApplication::translate("AddItinerary", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214", nullptr));
        label->setText(QCoreApplication::translate("AddItinerary", "\320\224\320\260\321\202\320\260/\320\222\321\200\320\265\320\274\321\217 \320\275\320\260\321\207\320\260\320\273\320\260", nullptr));
        label_2->setText(QCoreApplication::translate("AddItinerary", "\320\224\320\260\321\202\320\260/\320\222\321\200\320\265\320\274\321\217 \320\272\320\276\320\275\321\206\320\260", nullptr));
        label_3->setText(QCoreApplication::translate("AddItinerary", "\320\227\320\260\320\272\321\200\320\265\320\277\320\273\320\265\320\275\320\270\321\217", nullptr));
        label_4->setText(QCoreApplication::translate("AddItinerary", "\320\234\320\260\321\200\321\210\321\200\321\203\321\202", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddItinerary: public Ui_AddItinerary {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDITINERARY_H
