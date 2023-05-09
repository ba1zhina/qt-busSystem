/********************************************************************************
** Form generated from reading UI file 'automobiles.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AUTOMOBILES_H
#define UI_AUTOMOBILES_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_automobiles
{
public:
    QPushButton *pushButton;

    void setupUi(QDialog *automobiles)
    {
        if (automobiles->objectName().isEmpty())
            automobiles->setObjectName("automobiles");
        automobiles->resize(800, 600);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(automobiles->sizePolicy().hasHeightForWidth());
        automobiles->setSizePolicy(sizePolicy);
        pushButton = new QPushButton(automobiles);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(150, 240, 93, 29));

        retranslateUi(automobiles);

        QMetaObject::connectSlotsByName(automobiles);
    } // setupUi

    void retranslateUi(QDialog *automobiles)
    {
        automobiles->setWindowTitle(QCoreApplication::translate("automobiles", "Dialog", nullptr));
        pushButton->setText(QCoreApplication::translate("automobiles", "PushButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class automobiles: public Ui_automobiles {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AUTOMOBILES_H
