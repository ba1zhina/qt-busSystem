/********************************************************************************
** Form generated from reading UI file 'query.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QUERY_H
#define UI_QUERY_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_query
{
public:
    QTableView *tableViewQuery;
    QLabel *label_2;
    QPushButton *pushButtonView;
    QPushButton *pushButtonAny;
    QPushButton *pushButtonCase;
    QPushButton *pushButtonSqSelect;
    QPushButton *pushButtonAll;
    QPushButton *pushButtonHaving;
    QPushButton *pushButtonCSQ3;
    QPushButton *pushButtonCSQ2;
    QPushButton *pushButtonCSQ1;
    QPushButton *pushButtonSqWhere;
    QPushButton *pushButtonSqFrom;

    void setupUi(QWidget *query)
    {
        if (query->objectName().isEmpty())
            query->setObjectName("query");
        query->resize(1042, 631);
        query->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        tableViewQuery = new QTableView(query);
        tableViewQuery->setObjectName("tableViewQuery");
        tableViewQuery->setGeometry(QRect(200, 70, 821, 541));
        label_2 = new QLabel(query);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(10, 20, 1011, 31));
        QFont font;
        font.setPointSize(16);
        font.setBold(true);
        label_2->setFont(font);
        label_2->setStyleSheet(QString::fromUtf8("border-width: 1px;\n"
"    border-style: solid;\n"
"    border-color: black;\n"
"	border-radius: 7px;"));
        pushButtonView = new QPushButton(query);
        pushButtonView->setObjectName("pushButtonView");
        pushButtonView->setGeometry(QRect(10, 70, 171, 41));
        QFont font1;
        font1.setPointSize(10);
        font1.setBold(true);
        pushButtonView->setFont(font1);
        pushButtonView->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #0089D9;\n"
"	border: none;\n"
"	color: white;\n"
"	border-radius: 7px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background: #00598C;}"));
        pushButtonAny = new QPushButton(query);
        pushButtonAny->setObjectName("pushButtonAny");
        pushButtonAny->setGeometry(QRect(10, 570, 171, 41));
        pushButtonAny->setFont(font1);
        pushButtonAny->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #0089D9;\n"
"	border: none;\n"
"	color: white;\n"
"	border-radius: 7px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background: #00598C;}"));
        pushButtonCase = new QPushButton(query);
        pushButtonCase->setObjectName("pushButtonCase");
        pushButtonCase->setGeometry(QRect(10, 120, 171, 41));
        pushButtonCase->setFont(font1);
        pushButtonCase->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #0089D9;\n"
"	border: none;\n"
"	color: white;\n"
"	border-radius: 7px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background: #00598C;}"));
        pushButtonSqSelect = new QPushButton(query);
        pushButtonSqSelect->setObjectName("pushButtonSqSelect");
        pushButtonSqSelect->setGeometry(QRect(10, 170, 171, 41));
        pushButtonSqSelect->setFont(font1);
        pushButtonSqSelect->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #0089D9;\n"
"	border: none;\n"
"	color: white;\n"
"	border-radius: 7px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background: #00598C;}"));
        pushButtonAll = new QPushButton(query);
        pushButtonAll->setObjectName("pushButtonAll");
        pushButtonAll->setGeometry(QRect(10, 520, 171, 41));
        pushButtonAll->setFont(font1);
        pushButtonAll->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #0089D9;\n"
"	border: none;\n"
"	color: white;\n"
"	border-radius: 7px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background: #00598C;}"));
        pushButtonHaving = new QPushButton(query);
        pushButtonHaving->setObjectName("pushButtonHaving");
        pushButtonHaving->setGeometry(QRect(10, 470, 171, 41));
        pushButtonHaving->setFont(font1);
        pushButtonHaving->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #0089D9;\n"
"	border: none;\n"
"	color: white;\n"
"	border-radius: 7px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background: #00598C;}"));
        pushButtonCSQ3 = new QPushButton(query);
        pushButtonCSQ3->setObjectName("pushButtonCSQ3");
        pushButtonCSQ3->setGeometry(QRect(10, 420, 171, 41));
        pushButtonCSQ3->setFont(font1);
        pushButtonCSQ3->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #0089D9;\n"
"	border: none;\n"
"	color: white;\n"
"	border-radius: 7px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background: #00598C;}"));
        pushButtonCSQ2 = new QPushButton(query);
        pushButtonCSQ2->setObjectName("pushButtonCSQ2");
        pushButtonCSQ2->setGeometry(QRect(10, 370, 171, 41));
        pushButtonCSQ2->setFont(font1);
        pushButtonCSQ2->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #0089D9;\n"
"	border: none;\n"
"	color: white;\n"
"	border-radius: 7px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background: #00598C;}"));
        pushButtonCSQ1 = new QPushButton(query);
        pushButtonCSQ1->setObjectName("pushButtonCSQ1");
        pushButtonCSQ1->setGeometry(QRect(10, 320, 171, 41));
        pushButtonCSQ1->setFont(font1);
        pushButtonCSQ1->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #0089D9;\n"
"	border: none;\n"
"	color: white;\n"
"	border-radius: 7px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background: #00598C;}"));
        pushButtonSqWhere = new QPushButton(query);
        pushButtonSqWhere->setObjectName("pushButtonSqWhere");
        pushButtonSqWhere->setGeometry(QRect(10, 270, 171, 41));
        pushButtonSqWhere->setFont(font1);
        pushButtonSqWhere->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #0089D9;\n"
"	border: none;\n"
"	color: white;\n"
"	border-radius: 7px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background: #00598C;}"));
        pushButtonSqFrom = new QPushButton(query);
        pushButtonSqFrom->setObjectName("pushButtonSqFrom");
        pushButtonSqFrom->setGeometry(QRect(10, 220, 171, 41));
        pushButtonSqFrom->setFont(font1);
        pushButtonSqFrom->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #0089D9;\n"
"	border: none;\n"
"	color: white;\n"
"	border-radius: 7px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background: #00598C;}"));

        retranslateUi(query);

        QMetaObject::connectSlotsByName(query);
    } // setupUi

    void retranslateUi(QWidget *query)
    {
        query->setWindowTitle(QCoreApplication::translate("query", "Form", nullptr));
        label_2->setText(QCoreApplication::translate("query", "\320\227\320\260\320\277\321\200\320\276\321\201\321\213", nullptr));
        pushButtonView->setText(QCoreApplication::translate("query", "VIEW", nullptr));
        pushButtonAny->setText(QCoreApplication::translate("query", "ANY", nullptr));
        pushButtonCase->setText(QCoreApplication::translate("query", "CASE", nullptr));
        pushButtonSqSelect->setText(QCoreApplication::translate("query", "SQ SELECT", nullptr));
        pushButtonAll->setText(QCoreApplication::translate("query", "ALL", nullptr));
        pushButtonHaving->setText(QCoreApplication::translate("query", "HAVING", nullptr));
        pushButtonCSQ3->setText(QCoreApplication::translate("query", "CSQ 3", nullptr));
        pushButtonCSQ2->setText(QCoreApplication::translate("query", "CSQ 2", nullptr));
        pushButtonCSQ1->setText(QCoreApplication::translate("query", "CSQ 1", nullptr));
        pushButtonSqWhere->setText(QCoreApplication::translate("query", "SQ WHERE", nullptr));
        pushButtonSqFrom->setText(QCoreApplication::translate("query", "SQ FROM", nullptr));
    } // retranslateUi

};

namespace Ui {
    class query: public Ui_query {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QUERY_H
