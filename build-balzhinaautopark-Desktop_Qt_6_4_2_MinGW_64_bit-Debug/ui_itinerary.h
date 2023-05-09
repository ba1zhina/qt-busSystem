/********************************************************************************
** Form generated from reading UI file 'itinerary.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ITINERARY_H
#define UI_ITINERARY_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateTimeEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_itinerary
{
public:
    QTableView *tableView;
    QLabel *label;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QDateTimeEdit *dateTimeEdit;
    QLabel *label_3;
    QDateTimeEdit *dateTimeEdit_2;

    void setupUi(QDialog *itinerary)
    {
        if (itinerary->objectName().isEmpty())
            itinerary->setObjectName("itinerary");
        itinerary->resize(800, 600);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(itinerary->sizePolicy().hasHeightForWidth());
        itinerary->setSizePolicy(sizePolicy);
        tableView = new QTableView(itinerary);
        tableView->setObjectName("tableView");
        tableView->setGeometry(QRect(20, 170, 761, 171));
        label = new QLabel(itinerary);
        label->setObjectName("label");
        label->setGeometry(QRect(20, 10, 231, 31));
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        label->setFont(font);
        verticalLayoutWidget = new QWidget(itinerary);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(20, 49, 351, 111));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(verticalLayoutWidget);
        label_2->setObjectName("label_2");

        verticalLayout->addWidget(label_2);

        dateTimeEdit = new QDateTimeEdit(verticalLayoutWidget);
        dateTimeEdit->setObjectName("dateTimeEdit");

        verticalLayout->addWidget(dateTimeEdit);

        label_3 = new QLabel(verticalLayoutWidget);
        label_3->setObjectName("label_3");

        verticalLayout->addWidget(label_3);

        dateTimeEdit_2 = new QDateTimeEdit(verticalLayoutWidget);
        dateTimeEdit_2->setObjectName("dateTimeEdit_2");

        verticalLayout->addWidget(dateTimeEdit_2);


        retranslateUi(itinerary);

        QMetaObject::connectSlotsByName(itinerary);
    } // setupUi

    void retranslateUi(QDialog *itinerary)
    {
        itinerary->setWindowTitle(QCoreApplication::translate("itinerary", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("itinerary", "\320\234\320\260\321\200\321\210\321\200\321\203\321\202\320\275\321\213\320\265 \320\273\320\270\321\201\321\202\321\213", nullptr));
        label_2->setText(QCoreApplication::translate("itinerary", "TextLabel", nullptr));
        label_3->setText(QCoreApplication::translate("itinerary", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class itinerary: public Ui_itinerary {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ITINERARY_H
