/********************************************************************************
** Form generated from reading UI file 'updateautomobiles.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UPDATEAUTOMOBILES_H
#define UI_UPDATEAUTOMOBILES_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_updateAutomobiles
{
public:
    QLabel *label_3;
    QLabel *label;
    QLabel *label_4;
    QLineEdit *lineEditNumber;
    QLabel *label_2;
    QLineEdit *lineEditMaker;
    QLineEdit *lineEditYear;
    QLineEdit *lineEditModel;
    QPushButton *pushButton;

    void setupUi(QWidget *updateAutomobiles)
    {
        if (updateAutomobiles->objectName().isEmpty())
            updateAutomobiles->setObjectName("updateAutomobiles");
        updateAutomobiles->resize(520, 570);
        updateAutomobiles->setMaximumSize(QSize(520, 570));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/new/img/icon.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        updateAutomobiles->setWindowIcon(icon);
        updateAutomobiles->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        label_3 = new QLabel(updateAutomobiles);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(90, 240, 63, 20));
        label = new QLabel(updateAutomobiles);
        label->setObjectName("label");
        label->setGeometry(QRect(90, 120, 111, 20));
        label_4 = new QLabel(updateAutomobiles);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(90, 180, 63, 20));
        lineEditNumber = new QLineEdit(updateAutomobiles);
        lineEditNumber->setObjectName("lineEditNumber");
        lineEditNumber->setGeometry(QRect(90, 320, 329, 31));
        lineEditNumber->setStyleSheet(QString::fromUtf8("\n"
"    border-width: 1px;\n"
"    border-style: solid;\n"
"    border-color: black;\n"
"	border-radius: 7px;"));
        label_2 = new QLabel(updateAutomobiles);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(90, 300, 63, 20));
        lineEditMaker = new QLineEdit(updateAutomobiles);
        lineEditMaker->setObjectName("lineEditMaker");
        lineEditMaker->setGeometry(QRect(90, 143, 329, 31));
        lineEditMaker->setStyleSheet(QString::fromUtf8("\n"
"    border-width: 1px;\n"
"    border-style: solid;\n"
"    border-color: black;\n"
"	border-radius: 7px;"));
        lineEditYear = new QLineEdit(updateAutomobiles);
        lineEditYear->setObjectName("lineEditYear");
        lineEditYear->setGeometry(QRect(90, 260, 329, 31));
        lineEditYear->setStyleSheet(QString::fromUtf8("\n"
"    border-width: 1px;\n"
"    border-style: solid;\n"
"    border-color: black;\n"
"	border-radius: 7px;"));
        lineEditModel = new QLineEdit(updateAutomobiles);
        lineEditModel->setObjectName("lineEditModel");
        lineEditModel->setGeometry(QRect(90, 200, 329, 31));
        lineEditModel->setStyleSheet(QString::fromUtf8("\n"
"    border-width: 1px;\n"
"    border-style: solid;\n"
"    border-color: black;\n"
"	border-radius: 7px;"));
        pushButton = new QPushButton(updateAutomobiles);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(90, 360, 331, 41));
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

        retranslateUi(updateAutomobiles);

        QMetaObject::connectSlotsByName(updateAutomobiles);
    } // setupUi

    void retranslateUi(QWidget *updateAutomobiles)
    {
        updateAutomobiles->setWindowTitle(QCoreApplication::translate("updateAutomobiles", "\320\220\320\262\321\202\320\276\320\261\321\203\321\201\321\213", nullptr));
        label_3->setText(QCoreApplication::translate("updateAutomobiles", "\320\223\320\276\320\264", nullptr));
        label->setText(QCoreApplication::translate("updateAutomobiles", "\320\237\321\200\320\276\320\270\320\267\320\262\320\276\320\264\320\270\321\202\320\265\320\273\321\214", nullptr));
        label_4->setText(QCoreApplication::translate("updateAutomobiles", "\320\234\320\276\320\264\320\265\320\273\321\214", nullptr));
        label_2->setText(QCoreApplication::translate("updateAutomobiles", "\320\235\320\276\320\274\320\265\321\200", nullptr));
        pushButton->setText(QCoreApplication::translate("updateAutomobiles", "\320\230\320\267\320\274\320\265\320\275\320\270\321\202\321\214 \320\260\320\262\321\202\320\276\320\261\321\203\321\201", nullptr));
    } // retranslateUi

};

namespace Ui {
    class updateAutomobiles: public Ui_updateAutomobiles {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UPDATEAUTOMOBILES_H
