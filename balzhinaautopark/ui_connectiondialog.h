/********************************************************************************
** Form generated from reading UI file 'connectiondialog.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONNECTIONDIALOG_H
#define UI_CONNECTIONDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_connectionDialog
{
public:
    QLineEdit *lineEditUsername;
    QLineEdit *lineEditPassword;
    QLabel *labelUzename;
    QLabel *labelPassword;
    QPushButton *pushButtonConnection;
    QLabel *labelLogin;

    void setupUi(QWidget *connectionDialog)
    {
        if (connectionDialog->objectName().isEmpty())
            connectionDialog->setObjectName("connectionDialog");
        connectionDialog->setWindowModality(Qt::NonModal);
        connectionDialog->resize(358, 397);
        connectionDialog->setMinimumSize(QSize(358, 397));
        connectionDialog->setMaximumSize(QSize(358, 397));
        QFont font;
        font.setFamilies({QString::fromUtf8("Bahnschrift Light")});
        font.setPointSize(10);
        font.setBold(false);
        connectionDialog->setFont(font);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/new/img/icon.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        connectionDialog->setWindowIcon(icon);
        connectionDialog->setStyleSheet(QString::fromUtf8("QWidget{\n"
"	background-color: white;\n"
"	}"));
        lineEditUsername = new QLineEdit(connectionDialog);
        lineEditUsername->setObjectName("lineEditUsername");
        lineEditUsername->setGeometry(QRect(20, 190, 311, 32));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Segoe UI")});
        font1.setPointSize(11);
        font1.setBold(false);
        lineEditUsername->setFont(font1);
        lineEditUsername->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    border-width: 1px;\n"
"    border-style: solid;\n"
"    border-color: black;\n"
"	border-radius: 7px;\n"
"}"));
        lineEditPassword = new QLineEdit(connectionDialog);
        lineEditPassword->setObjectName("lineEditPassword");
        lineEditPassword->setGeometry(QRect(20, 250, 311, 32));
        lineEditPassword->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    border-width: 1px;\n"
"    border-style: solid;\n"
"    border-color: black;\n"
"	border-radius: 7px;\n"
"}"));
        lineEditPassword->setEchoMode(QLineEdit::Password);
        labelUzename = new QLabel(connectionDialog);
        labelUzename->setObjectName("labelUzename");
        labelUzename->setGeometry(QRect(20, 170, 163, 16));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Segoe UI")});
        font2.setPointSize(10);
        font2.setBold(false);
        labelUzename->setFont(font2);
        labelPassword = new QLabel(connectionDialog);
        labelPassword->setObjectName("labelPassword");
        labelPassword->setGeometry(QRect(20, 230, 66, 16));
        labelPassword->setFont(font2);
        pushButtonConnection = new QPushButton(connectionDialog);
        pushButtonConnection->setObjectName("pushButtonConnection");
        pushButtonConnection->setGeometry(QRect(20, 290, 311, 36));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Segoe UI")});
        font3.setPointSize(10);
        font3.setBold(true);
        pushButtonConnection->setFont(font3);
        pushButtonConnection->setStyleSheet(QString::fromUtf8("\n"
"QPushButton{\n"
"	background-color: #0089D9;\n"
"	border: none;\n"
"	color: white;\n"
"	border-radius: 7px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background: #00598C;}"));
        labelLogin = new QLabel(connectionDialog);
        labelLogin->setObjectName("labelLogin");
        labelLogin->setGeometry(QRect(110, 100, 141, 31));
        QFont font4;
        font4.setFamilies({QString::fromUtf8("Segoe UI")});
        font4.setPointSize(12);
        font4.setBold(true);
        labelLogin->setFont(font4);

        retranslateUi(connectionDialog);

        QMetaObject::connectSlotsByName(connectionDialog);
    } // setupUi

    void retranslateUi(QWidget *connectionDialog)
    {
        connectionDialog->setWindowTitle(QCoreApplication::translate("connectionDialog", "\320\237\320\276\320\264\320\272\320\273\321\216\321\207\320\265\320\275\320\270\320\265", nullptr));
        labelUzename->setText(QCoreApplication::translate("connectionDialog", "\320\230\320\274\321\217 \320\277\320\276\320\273\321\214\320\267\320\276\320\262\320\260\321\202\320\265\320\273\321\217", nullptr));
        labelPassword->setText(QCoreApplication::translate("connectionDialog", "\320\237\320\260\321\200\320\276\320\273\321\214", nullptr));
        pushButtonConnection->setText(QCoreApplication::translate("connectionDialog", "\320\237\320\276\320\264\320\272\320\273\321\216\321\207\320\270\321\202\321\214\321\201\321\217", nullptr));
        labelLogin->setText(QCoreApplication::translate("connectionDialog", "\320\220\320\262\321\202\320\276\321\200\320\270\320\267\320\260\321\206\320\270\321\217", nullptr));
    } // retranslateUi

};

namespace Ui {
    class connectionDialog: public Ui_connectionDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONNECTIONDIALOG_H
