/********************************************************************************
** Form generated from reading UI file 'mydlg.ui'
**
** Created by: Qt User Interface Compiler version 5.12.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MYDLG_H
#define UI_MYDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MyDlg
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *pMainLayout;
    QFormLayout *pFormLayout;
    QLabel *pFirstLabel;
    QLineEdit *pFirstEdit;
    QLineEdit *pSecondEdit;
    QLabel *pResultLabel;
    QLineEdit *pResultEdit;
    QLabel *pSecondLabel;
    QHBoxLayout *pButtonLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *pAddButton;
    QPushButton *pSubtractButton;
    QPushButton *pMultiplyButton;
    QPushButton *pDivideButton;
    QPushButton *pExitButton;

    void setupUi(QDialog *MyDlg)
    {
        if (MyDlg->objectName().isEmpty())
            MyDlg->setObjectName(QString::fromUtf8("MyDlg"));
        MyDlg->resize(552, 149);
        verticalLayoutWidget = new QWidget(MyDlg);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(11, 10, 531, 130));
        pMainLayout = new QVBoxLayout(verticalLayoutWidget);
        pMainLayout->setObjectName(QString::fromUtf8("pMainLayout"));
        pMainLayout->setContentsMargins(0, 0, 0, 0);
        pFormLayout = new QFormLayout();
        pFormLayout->setObjectName(QString::fromUtf8("pFormLayout"));
        pFirstLabel = new QLabel(verticalLayoutWidget);
        pFirstLabel->setObjectName(QString::fromUtf8("pFirstLabel"));
        QFont font;
        font.setFamily(QString::fromUtf8("Expressway"));
        font.setPointSize(12);
        pFirstLabel->setFont(font);

        pFormLayout->setWidget(0, QFormLayout::LabelRole, pFirstLabel);

        pFirstEdit = new QLineEdit(verticalLayoutWidget);
        pFirstEdit->setObjectName(QString::fromUtf8("pFirstEdit"));
        pFirstEdit->setFont(font);

        pFormLayout->setWidget(0, QFormLayout::FieldRole, pFirstEdit);

        pSecondEdit = new QLineEdit(verticalLayoutWidget);
        pSecondEdit->setObjectName(QString::fromUtf8("pSecondEdit"));
        pSecondEdit->setFont(font);

        pFormLayout->setWidget(1, QFormLayout::FieldRole, pSecondEdit);

        pResultLabel = new QLabel(verticalLayoutWidget);
        pResultLabel->setObjectName(QString::fromUtf8("pResultLabel"));
        pResultLabel->setFont(font);

        pFormLayout->setWidget(2, QFormLayout::LabelRole, pResultLabel);

        pResultEdit = new QLineEdit(verticalLayoutWidget);
        pResultEdit->setObjectName(QString::fromUtf8("pResultEdit"));
        pResultEdit->setFont(font);
        pResultEdit->setReadOnly(true);

        pFormLayout->setWidget(2, QFormLayout::FieldRole, pResultEdit);

        pSecondLabel = new QLabel(verticalLayoutWidget);
        pSecondLabel->setObjectName(QString::fromUtf8("pSecondLabel"));
        pSecondLabel->setFont(font);

        pFormLayout->setWidget(1, QFormLayout::LabelRole, pSecondLabel);


        pMainLayout->addLayout(pFormLayout);

        pButtonLayout = new QHBoxLayout();
        pButtonLayout->setObjectName(QString::fromUtf8("pButtonLayout"));
        horizontalSpacer = new QSpacerItem(98, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        pButtonLayout->addItem(horizontalSpacer);

        pAddButton = new QPushButton(verticalLayoutWidget);
        pAddButton->setObjectName(QString::fromUtf8("pAddButton"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Expressway Rg"));
        font1.setPointSize(10);
        pAddButton->setFont(font1);

        pButtonLayout->addWidget(pAddButton);

        pSubtractButton = new QPushButton(verticalLayoutWidget);
        pSubtractButton->setObjectName(QString::fromUtf8("pSubtractButton"));
        pSubtractButton->setFont(font1);

        pButtonLayout->addWidget(pSubtractButton);

        pMultiplyButton = new QPushButton(verticalLayoutWidget);
        pMultiplyButton->setObjectName(QString::fromUtf8("pMultiplyButton"));
        pMultiplyButton->setFont(font1);

        pButtonLayout->addWidget(pMultiplyButton);

        pDivideButton = new QPushButton(verticalLayoutWidget);
        pDivideButton->setObjectName(QString::fromUtf8("pDivideButton"));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Expressway"));
        font2.setPointSize(10);
        pDivideButton->setFont(font2);

        pButtonLayout->addWidget(pDivideButton);

        pExitButton = new QPushButton(verticalLayoutWidget);
        pExitButton->setObjectName(QString::fromUtf8("pExitButton"));
        pExitButton->setFont(font2);

        pButtonLayout->addWidget(pExitButton);


        pMainLayout->addLayout(pButtonLayout);


        retranslateUi(MyDlg);

        QMetaObject::connectSlotsByName(MyDlg);
    } // setupUi

    void retranslateUi(QDialog *MyDlg)
    {
        MyDlg->setWindowTitle(QApplication::translate("MyDlg", "MyDlg", nullptr));
        pFirstLabel->setText(QApplication::translate("MyDlg", "First Number", nullptr));
        pResultLabel->setText(QApplication::translate("MyDlg", "Result", nullptr));
        pSecondLabel->setText(QApplication::translate("MyDlg", "Second Number", nullptr));
        pAddButton->setText(QApplication::translate("MyDlg", "ADD", nullptr));
        pSubtractButton->setText(QApplication::translate("MyDlg", "SUBTRACT", nullptr));
        pMultiplyButton->setText(QApplication::translate("MyDlg", "MULTIPLY", nullptr));
        pDivideButton->setText(QApplication::translate("MyDlg", "DIVIDE", nullptr));
        pExitButton->setText(QApplication::translate("MyDlg", "EXIT", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MyDlg: public Ui_MyDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYDLG_H
