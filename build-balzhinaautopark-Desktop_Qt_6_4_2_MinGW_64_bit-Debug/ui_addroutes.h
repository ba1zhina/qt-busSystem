/********************************************************************************
** Form generated from reading UI file 'addroutes.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDROUTES_H
#define UI_ADDROUTES_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AddRoutes
{
public:
    QLineEdit *lineEditStartLoc;
    QLineEdit *lineEditEndLoc;
    QLineEdit *lineEditDistance;
    QPushButton *pushButton;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;

    void setupUi(QWidget *AddRoutes)
    {
        if (AddRoutes->objectName().isEmpty())
            AddRoutes->setObjectName("AddRoutes");
        AddRoutes->resize(520, 570);
        AddRoutes->setMaximumSize(QSize(520, 570));
        QFont font;
        font.setPointSize(10);
        font.setBold(false);
        AddRoutes->setFont(font);
        AddRoutes->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        lineEditStartLoc = new QLineEdit(AddRoutes);
        lineEditStartLoc->setObjectName("lineEditStartLoc");
        lineEditStartLoc->setGeometry(QRect(90, 173, 329, 31));
        lineEditStartLoc->setFont(font);
        lineEditStartLoc->setStyleSheet(QString::fromUtf8("\n"
"    border-width: 1px;\n"
"    border-style: solid;\n"
"    border-color: black;\n"
"	border-radius: 7px;"));
        lineEditEndLoc = new QLineEdit(AddRoutes);
        lineEditEndLoc->setObjectName("lineEditEndLoc");
        lineEditEndLoc->setGeometry(QRect(90, 230, 329, 31));
        lineEditEndLoc->setFont(font);
        lineEditEndLoc->setStyleSheet(QString::fromUtf8("\n"
"    border-width: 1px;\n"
"    border-style: solid;\n"
"    border-color: black;\n"
"	border-radius: 7px;"));
        lineEditDistance = new QLineEdit(AddRoutes);
        lineEditDistance->setObjectName("lineEditDistance");
        lineEditDistance->setGeometry(QRect(90, 290, 329, 31));
        lineEditDistance->setFont(font);
        lineEditDistance->setStyleSheet(QString::fromUtf8("\n"
"    border-width: 1px;\n"
"    border-style: solid;\n"
"    border-color: black;\n"
"	border-radius: 7px;"));
        pushButton = new QPushButton(AddRoutes);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(90, 330, 331, 41));
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
        label = new QLabel(AddRoutes);
        label->setObjectName("label");
        label->setGeometry(QRect(90, 150, 151, 20));
        QFont font2;
        font2.setPointSize(9);
        font2.setBold(false);
        label->setFont(font2);
        label_2 = new QLabel(AddRoutes);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(90, 210, 131, 20));
        label_2->setFont(font2);
        label_3 = new QLabel(AddRoutes);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(90, 270, 91, 20));
        label_3->setFont(font2);

        retranslateUi(AddRoutes);

        QMetaObject::connectSlotsByName(AddRoutes);
    } // setupUi

    void retranslateUi(QWidget *AddRoutes)
    {
        AddRoutes->setWindowTitle(QCoreApplication::translate("AddRoutes", "Form", nullptr));
        pushButton->setText(QCoreApplication::translate("AddRoutes", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214", nullptr));
        label->setText(QCoreApplication::translate("AddRoutes", "\320\242\320\276\321\207\320\272\320\260 \320\276\321\202\320\277\321\200\320\260\320\262\320\264\320\265\320\275\320\270\321\217", nullptr));
        label_2->setText(QCoreApplication::translate("AddRoutes", "\320\242\320\276\321\207\320\272\320\260 \320\277\321\200\320\270\320\261\321\213\321\202\320\270\321\217", nullptr));
        label_3->setText(QCoreApplication::translate("AddRoutes", "\320\240\320\260\321\201\321\201\321\202\320\276\321\217\320\275\320\270\320\265", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddRoutes: public Ui_AddRoutes {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDROUTES_H
