/********************************************************************************
** Form generated from reading UI file 'addad.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDAD_H
#define UI_ADDAD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AddAD
{
public:
    QComboBox *comboBoxBus;
    QComboBox *comboBoxDriver;
    QLabel *label;
    QLabel *label_2;
    QPushButton *pushButton;

    void setupUi(QWidget *AddAD)
    {
        if (AddAD->objectName().isEmpty())
            AddAD->setObjectName("AddAD");
        AddAD->resize(520, 570);
        AddAD->setMaximumSize(QSize(520, 570));
        AddAD->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        comboBoxBus = new QComboBox(AddAD);
        comboBoxBus->setObjectName("comboBoxBus");
        comboBoxBus->setGeometry(QRect(90, 173, 329, 31));
        QFont font;
        font.setPointSize(10);
        comboBoxBus->setFont(font);
        comboBoxBus->setStyleSheet(QString::fromUtf8("\n"
"    border-width: 1px;\n"
"    border-style: solid;\n"
"    border-color: black;\n"
"	border-radius: 7px;"));
        comboBoxDriver = new QComboBox(AddAD);
        comboBoxDriver->setObjectName("comboBoxDriver");
        comboBoxDriver->setGeometry(QRect(90, 230, 329, 31));
        comboBoxDriver->setFont(font);
        comboBoxDriver->setStyleSheet(QString::fromUtf8("\n"
"    border-width: 1px;\n"
"    border-style: solid;\n"
"    border-color: black;\n"
"	border-radius: 7px;"));
        label = new QLabel(AddAD);
        label->setObjectName("label");
        label->setGeometry(QRect(90, 210, 81, 20));
        label_2 = new QLabel(AddAD);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(90, 150, 63, 20));
        pushButton = new QPushButton(AddAD);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(90, 270, 329, 41));
        QFont font1;
        font1.setPointSize(10);
        font1.setBold(true);
        pushButton->setFont(font1);
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

        retranslateUi(AddAD);

        QMetaObject::connectSlotsByName(AddAD);
    } // setupUi

    void retranslateUi(QWidget *AddAD)
    {
        AddAD->setWindowTitle(QCoreApplication::translate("AddAD", "Form", nullptr));
        label->setText(QCoreApplication::translate("AddAD", "\320\222\320\276\320\264\320\270\321\202\320\265\320\273\321\214", nullptr));
        label_2->setText(QCoreApplication::translate("AddAD", "\320\220\320\262\321\202\320\276\320\261\321\203\321\201", nullptr));
        pushButton->setText(QCoreApplication::translate("AddAD", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddAD: public Ui_AddAD {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDAD_H
