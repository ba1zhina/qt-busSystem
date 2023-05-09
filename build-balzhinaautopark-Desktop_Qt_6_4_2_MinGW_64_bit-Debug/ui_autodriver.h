/********************************************************************************
** Form generated from reading UI file 'autodriver.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AUTODRIVER_H
#define UI_AUTODRIVER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_autodriver
{
public:

    void setupUi(QDialog *autodriver)
    {
        if (autodriver->objectName().isEmpty())
            autodriver->setObjectName("autodriver");
        autodriver->resize(800, 600);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(autodriver->sizePolicy().hasHeightForWidth());
        autodriver->setSizePolicy(sizePolicy);

        retranslateUi(autodriver);

        QMetaObject::connectSlotsByName(autodriver);
    } // setupUi

    void retranslateUi(QDialog *autodriver)
    {
        autodriver->setWindowTitle(QCoreApplication::translate("autodriver", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class autodriver: public Ui_autodriver {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AUTODRIVER_H
