/********************************************************************************
** Form generated from reading UI file 'griddlg.ui'
**
** Created by: Qt User Interface Compiler version 5.12.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GRIDDLG_H
#define UI_GRIDDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_GridDlg
{
public:

    void setupUi(QDialog *GridDlg)
    {
        if (GridDlg->objectName().isEmpty())
            GridDlg->setObjectName(QString::fromUtf8("GridDlg"));
        GridDlg->resize(400, 300);

        retranslateUi(GridDlg);

        QMetaObject::connectSlotsByName(GridDlg);
    } // setupUi

    void retranslateUi(QDialog *GridDlg)
    {
        GridDlg->setWindowTitle(QApplication::translate("GridDlg", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GridDlg: public Ui_GridDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GRIDDLG_H
