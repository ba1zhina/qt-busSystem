/********************************************************************************
** Form generated from reading UI file 'updatead.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UPDATEAD_H
#define UI_UPDATEAD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_updateAD
{
public:
    QComboBox *comboBoxBus;
    QLabel *label_2;
    QPushButton *pushButton;
    QComboBox *comboBoxDriver;
    QLabel *label;

    void setupUi(QWidget *updateAD)
    {
        if (updateAD->objectName().isEmpty())
            updateAD->setObjectName("updateAD");
        updateAD->resize(520, 570);
        updateAD->setMaximumSize(QSize(520, 570));
        updateAD->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        comboBoxBus = new QComboBox(updateAD);
        comboBoxBus->setObjectName("comboBoxBus");
        comboBoxBus->setGeometry(QRect(90, 163, 329, 31));
        QFont font;
        font.setPointSize(10);
        comboBoxBus->setFont(font);
        comboBoxBus->setStyleSheet(QString::fromUtf8("\n"
"    border-width: 1px;\n"
"    border-style: solid;\n"
"    border-color: black;\n"
"	border-radius: 7px;"));
        label_2 = new QLabel(updateAD);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(90, 140, 63, 20));
        pushButton = new QPushButton(updateAD);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(90, 260, 329, 41));
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
        comboBoxDriver = new QComboBox(updateAD);
        comboBoxDriver->setObjectName("comboBoxDriver");
        comboBoxDriver->setGeometry(QRect(90, 220, 329, 31));
        comboBoxDriver->setFont(font);
        comboBoxDriver->setStyleSheet(QString::fromUtf8("\n"
"    border-width: 1px;\n"
"    border-style: solid;\n"
"    border-color: black;\n"
"	border-radius: 7px;"));
        label = new QLabel(updateAD);
        label->setObjectName("label");
        label->setGeometry(QRect(90, 200, 81, 20));

        retranslateUi(updateAD);

        QMetaObject::connectSlotsByName(updateAD);
    } // setupUi

    void retranslateUi(QWidget *updateAD)
    {
        updateAD->setWindowTitle(QCoreApplication::translate("updateAD", "\320\227\320\260\320\272\321\200\320\265\320\277\320\273\320\265\320\275\320\270\320\265", nullptr));
        label_2->setText(QCoreApplication::translate("updateAD", "\320\220\320\262\321\202\320\276\320\261\321\203\321\201", nullptr));
        pushButton->setText(QCoreApplication::translate("updateAD", "\320\230\320\267\320\274\320\265\320\275\320\270\321\202\321\214 \320\267\320\260\320\272\321\200\320\265\320\277\320\273\320\265\320\275\320\270\320\265", nullptr));
        label->setText(QCoreApplication::translate("updateAD", "\320\222\320\276\320\264\320\270\321\202\320\265\320\273\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class updateAD: public Ui_updateAD {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UPDATEAD_H
