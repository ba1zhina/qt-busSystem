/********************************************************************************
** Form generated from reading UI file 'updateitinerary.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UPDATEITINERARY_H
#define UI_UPDATEITINERARY_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateTimeEdit>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_updateItinerary
{
public:
    QLabel *label_2;
    QLabel *label_4;
    QLabel *label;
    QDateTimeEdit *dateTimeEditStart;
    QComboBox *comboBoxAutomobiles;
    QLabel *label_3;
    QComboBox *comboBoxRoutes;
    QDateTimeEdit *dateTimeEditEnd;
    QPushButton *pushButton;

    void setupUi(QWidget *updateItinerary)
    {
        if (updateItinerary->objectName().isEmpty())
            updateItinerary->setObjectName("updateItinerary");
        updateItinerary->resize(520, 570);
        updateItinerary->setMaximumSize(QSize(520, 570));
        updateItinerary->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        label_2 = new QLabel(updateItinerary);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(90, 200, 141, 20));
        label_4 = new QLabel(updateItinerary);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(90, 260, 81, 20));
        label = new QLabel(updateItinerary);
        label->setObjectName("label");
        label->setGeometry(QRect(90, 140, 141, 20));
        dateTimeEditStart = new QDateTimeEdit(updateItinerary);
        dateTimeEditStart->setObjectName("dateTimeEditStart");
        dateTimeEditStart->setGeometry(QRect(90, 163, 329, 31));
        dateTimeEditStart->setStyleSheet(QString::fromUtf8("\n"
"    border-width: 1px;\n"
"    border-style: solid;\n"
"    border-color: black;\n"
"	border-radius: 7px;"));
        comboBoxAutomobiles = new QComboBox(updateItinerary);
        comboBoxAutomobiles->setObjectName("comboBoxAutomobiles");
        comboBoxAutomobiles->setGeometry(QRect(90, 340, 329, 31));
        comboBoxAutomobiles->setStyleSheet(QString::fromUtf8("\n"
"    border-width: 1px;\n"
"    border-style: solid;\n"
"    border-color: black;\n"
"	border-radius: 7px;"));
        label_3 = new QLabel(updateItinerary);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(90, 320, 101, 20));
        comboBoxRoutes = new QComboBox(updateItinerary);
        comboBoxRoutes->setObjectName("comboBoxRoutes");
        comboBoxRoutes->setGeometry(QRect(90, 280, 329, 31));
        comboBoxRoutes->setStyleSheet(QString::fromUtf8("\n"
"    border-width: 1px;\n"
"    border-style: solid;\n"
"    border-color: black;\n"
"	border-radius: 7px;"));
        dateTimeEditEnd = new QDateTimeEdit(updateItinerary);
        dateTimeEditEnd->setObjectName("dateTimeEditEnd");
        dateTimeEditEnd->setGeometry(QRect(90, 220, 329, 31));
        dateTimeEditEnd->setStyleSheet(QString::fromUtf8("\n"
"    border-width: 1px;\n"
"    border-style: solid;\n"
"    border-color: black;\n"
"	border-radius: 7px;"));
        pushButton = new QPushButton(updateItinerary);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(90, 380, 329, 41));
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

        retranslateUi(updateItinerary);

        QMetaObject::connectSlotsByName(updateItinerary);
    } // setupUi

    void retranslateUi(QWidget *updateItinerary)
    {
        updateItinerary->setWindowTitle(QCoreApplication::translate("updateItinerary", "\320\234\320\260\321\200\321\210\321\200\321\203\321\202\320\275\321\213\320\271 \320\273\320\270\321\201\321\202", nullptr));
        label_2->setText(QCoreApplication::translate("updateItinerary", "\320\224\320\260\321\202\320\260/\320\222\321\200\320\265\320\274\321\217 \320\272\320\276\320\275\321\206\320\260", nullptr));
        label_4->setText(QCoreApplication::translate("updateItinerary", "\320\234\320\260\321\200\321\210\321\200\321\203\321\202", nullptr));
        label->setText(QCoreApplication::translate("updateItinerary", "\320\224\320\260\321\202\320\260/\320\222\321\200\320\265\320\274\321\217 \320\275\320\260\321\207\320\260\320\273\320\260", nullptr));
        label_3->setText(QCoreApplication::translate("updateItinerary", "\320\227\320\260\320\272\321\200\320\265\320\277\320\273\320\265\320\275\320\270\321\217", nullptr));
        pushButton->setText(QCoreApplication::translate("updateItinerary", "\320\230\320\267\320\274\320\265\320\275\320\270\321\202\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class updateItinerary: public Ui_updateItinerary {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UPDATEITINERARY_H
