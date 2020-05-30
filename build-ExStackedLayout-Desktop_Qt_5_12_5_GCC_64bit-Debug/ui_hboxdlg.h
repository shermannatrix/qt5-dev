/********************************************************************************
** Form generated from reading UI file 'hboxdlg.ui'
**
** Created by: Qt User Interface Compiler version 5.12.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HBOXDLG_H
#define UI_HBOXDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_HBoxDlg
{
public:

    void setupUi(QDialog *HBoxDlg)
    {
        if (HBoxDlg->objectName().isEmpty())
            HBoxDlg->setObjectName(QString::fromUtf8("HBoxDlg"));
        HBoxDlg->resize(800, 600);

        retranslateUi(HBoxDlg);

        QMetaObject::connectSlotsByName(HBoxDlg);
    } // setupUi

    void retranslateUi(QDialog *HBoxDlg)
    {
        HBoxDlg->setWindowTitle(QApplication::translate("HBoxDlg", "HBoxDlg", nullptr));
    } // retranslateUi

};

namespace Ui {
    class HBoxDlg: public Ui_HBoxDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HBOXDLG_H
