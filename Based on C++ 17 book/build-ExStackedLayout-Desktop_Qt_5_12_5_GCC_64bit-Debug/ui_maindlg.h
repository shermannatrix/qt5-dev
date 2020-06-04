/********************************************************************************
** Form generated from reading UI file 'maindlg.ui'
**
** Created by: Qt User Interface Compiler version 5.12.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINDLG_H
#define UI_MAINDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_MainDlg
{
public:

    void setupUi(QDialog *MainDlg)
    {
        if (MainDlg->objectName().isEmpty())
            MainDlg->setObjectName(QString::fromUtf8("MainDlg"));
        MainDlg->resize(400, 300);

        retranslateUi(MainDlg);

        QMetaObject::connectSlotsByName(MainDlg);
    } // setupUi

    void retranslateUi(QDialog *MainDlg)
    {
        MainDlg->setWindowTitle(QApplication::translate("MainDlg", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainDlg: public Ui_MainDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINDLG_H
