/********************************************************************************
** Form generated from reading UI file 'routes.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ROUTES_H
#define UI_ROUTES_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_routes
{
public:

    void setupUi(QDialog *routes)
    {
        if (routes->objectName().isEmpty())
            routes->setObjectName("routes");
        routes->resize(800, 600);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(routes->sizePolicy().hasHeightForWidth());
        routes->setSizePolicy(sizePolicy);

        retranslateUi(routes);

        QMetaObject::connectSlotsByName(routes);
    } // setupUi

    void retranslateUi(QDialog *routes)
    {
        routes->setWindowTitle(QCoreApplication::translate("routes", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class routes: public Ui_routes {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ROUTES_H
