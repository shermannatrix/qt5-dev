/********************************************************************************
** Form generated from reading UI file 'vboxdlg.ui'
**
** Created by: Qt User Interface Compiler version 5.12.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VBOXDLG_H
#define UI_VBOXDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_VBoxDlg
{
public:

    void setupUi(QDialog *VBoxDlg)
    {
        if (VBoxDlg->objectName().isEmpty())
            VBoxDlg->setObjectName(QString::fromUtf8("VBoxDlg"));
        VBoxDlg->resize(400, 300);

        retranslateUi(VBoxDlg);

        QMetaObject::connectSlotsByName(VBoxDlg);
    } // setupUi

    void retranslateUi(QDialog *VBoxDlg)
    {
        VBoxDlg->setWindowTitle(QApplication::translate("VBoxDlg", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class VBoxDlg: public Ui_VBoxDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VBOXDLG_H
