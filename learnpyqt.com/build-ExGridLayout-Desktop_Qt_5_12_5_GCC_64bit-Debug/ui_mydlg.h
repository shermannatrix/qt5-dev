/********************************************************************************
** Form generated from reading UI file 'mydlg.ui'
**
** Created by: Qt User Interface Compiler version 5.12.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MYDLG_H
#define UI_MYDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_MyDlg
{
public:

    void setupUi(QDialog *MyDlg)
    {
        if (MyDlg->objectName().isEmpty())
            MyDlg->setObjectName(QString::fromUtf8("MyDlg"));
        MyDlg->resize(800, 600);

        retranslateUi(MyDlg);

        QMetaObject::connectSlotsByName(MyDlg);
    } // setupUi

    void retranslateUi(QDialog *MyDlg)
    {
        MyDlg->setWindowTitle(QApplication::translate("MyDlg", "MyDlg", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MyDlg: public Ui_MyDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYDLG_H
