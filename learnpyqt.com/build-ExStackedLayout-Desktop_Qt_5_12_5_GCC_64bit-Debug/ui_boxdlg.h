/********************************************************************************
** Form generated from reading UI file 'boxdlg.ui'
**
** Created by: Qt User Interface Compiler version 5.12.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BOXDLG_H
#define UI_BOXDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_BoxDlg
{
public:

    void setupUi(QDialog *BoxDlg)
    {
        if (BoxDlg->objectName().isEmpty())
            BoxDlg->setObjectName(QString::fromUtf8("BoxDlg"));
        BoxDlg->resize(400, 300);

        retranslateUi(BoxDlg);

        QMetaObject::connectSlotsByName(BoxDlg);
    } // setupUi

    void retranslateUi(QDialog *BoxDlg)
    {
        BoxDlg->setWindowTitle(QApplication::translate("BoxDlg", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class BoxDlg: public Ui_BoxDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BOXDLG_H
