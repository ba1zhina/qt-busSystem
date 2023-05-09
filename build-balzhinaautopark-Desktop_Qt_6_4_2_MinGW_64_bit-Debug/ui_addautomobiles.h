/********************************************************************************
** Form generated from reading UI file 'addautomobiles.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDAUTOMOBILES_H
#define UI_ADDAUTOMOBILES_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AddAutomobiles
{
public:
    QLineEdit *lineEditMaker;
    QLineEdit *lineEditModel;
    QLineEdit *lineEditYear;
    QLineEdit *lineEditNumber;
    QPushButton *pushButton;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;

    void setupUi(QWidget *AddAutomobiles)
    {
        if (AddAutomobiles->objectName().isEmpty())
            AddAutomobiles->setObjectName("AddAutomobiles");
        AddAutomobiles->resize(520, 570);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(AddAutomobiles->sizePolicy().hasHeightForWidth());
        AddAutomobiles->setSizePolicy(sizePolicy);
        AddAutomobiles->setMaximumSize(QSize(520, 570));
        AddAutomobiles->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
""));
        lineEditMaker = new QLineEdit(AddAutomobiles);
        lineEditMaker->setObjectName("lineEditMaker");
        lineEditMaker->setGeometry(QRect(90, 173, 329, 31));
        lineEditMaker->setStyleSheet(QString::fromUtf8("\n"
"    border-width: 1px;\n"
"    border-style: solid;\n"
"    border-color: black;\n"
"	border-radius: 7px;"));
        lineEditModel = new QLineEdit(AddAutomobiles);
        lineEditModel->setObjectName("lineEditModel");
        lineEditModel->setGeometry(QRect(90, 230, 329, 31));
        lineEditModel->setStyleSheet(QString::fromUtf8("\n"
"    border-width: 1px;\n"
"    border-style: solid;\n"
"    border-color: black;\n"
"	border-radius: 7px;"));
        lineEditYear = new QLineEdit(AddAutomobiles);
        lineEditYear->setObjectName("lineEditYear");
        lineEditYear->setGeometry(QRect(90, 290, 329, 31));
        lineEditYear->setStyleSheet(QString::fromUtf8("\n"
"    border-width: 1px;\n"
"    border-style: solid;\n"
"    border-color: black;\n"
"	border-radius: 7px;"));
        lineEditNumber = new QLineEdit(AddAutomobiles);
        lineEditNumber->setObjectName("lineEditNumber");
        lineEditNumber->setGeometry(QRect(90, 350, 329, 31));
        lineEditNumber->setStyleSheet(QString::fromUtf8("\n"
"    border-width: 1px;\n"
"    border-style: solid;\n"
"    border-color: black;\n"
"	border-radius: 7px;"));
        pushButton = new QPushButton(AddAutomobiles);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(90, 390, 331, 41));
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
        label = new QLabel(AddAutomobiles);
        label->setObjectName("label");
        label->setGeometry(QRect(90, 150, 111, 20));
        label_2 = new QLabel(AddAutomobiles);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(90, 330, 63, 20));
        label_3 = new QLabel(AddAutomobiles);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(90, 270, 63, 20));
        label_4 = new QLabel(AddAutomobiles);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(90, 210, 63, 20));

        retranslateUi(AddAutomobiles);

        QMetaObject::connectSlotsByName(AddAutomobiles);
    } // setupUi

    void retranslateUi(QWidget *AddAutomobiles)
    {
        AddAutomobiles->setWindowTitle(QCoreApplication::translate("AddAutomobiles", "Form", nullptr));
        pushButton->setText(QCoreApplication::translate("AddAutomobiles", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214", nullptr));
        label->setText(QCoreApplication::translate("AddAutomobiles", "\320\237\321\200\320\276\320\270\320\267\320\262\320\276\320\264\320\270\321\202\320\265\320\273\321\214", nullptr));
        label_2->setText(QCoreApplication::translate("AddAutomobiles", "\320\235\320\276\320\274\320\265\321\200", nullptr));
        label_3->setText(QCoreApplication::translate("AddAutomobiles", "\320\223\320\276\320\264", nullptr));
        label_4->setText(QCoreApplication::translate("AddAutomobiles", "\320\234\320\276\320\264\320\265\320\273\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddAutomobiles: public Ui_AddAutomobiles {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDAUTOMOBILES_H
