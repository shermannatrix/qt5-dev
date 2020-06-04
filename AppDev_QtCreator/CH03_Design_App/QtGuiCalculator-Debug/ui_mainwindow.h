/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QPushButton *plusButton;
    QPushButton *minusButton;
    QPushButton *timesButton;
    QPushButton *divideButton;
    QSpacerItem *verticalSpacer_2;
    QLineEdit *argument1Input;
    QSpacerItem *verticalSpacer;
    QLineEdit *argument2Input;
    QSpacerItem *verticalSpacer_3;
    QPushButton *aboutButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 378);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayoutWidget = new QWidget(centralwidget);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(90, 40, 571, 251));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        plusButton = new QPushButton(verticalLayoutWidget);
        plusButton->setObjectName(QString::fromUtf8("plusButton"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(plusButton->sizePolicy().hasHeightForWidth());
        plusButton->setSizePolicy(sizePolicy);
        plusButton->setMinimumSize(QSize(0, 36));
        QFont font;
        font.setFamily(QString::fromUtf8("Avenir Next"));
        font.setPointSize(11);
        plusButton->setFont(font);

        horizontalLayout->addWidget(plusButton);

        minusButton = new QPushButton(verticalLayoutWidget);
        minusButton->setObjectName(QString::fromUtf8("minusButton"));
        sizePolicy.setHeightForWidth(minusButton->sizePolicy().hasHeightForWidth());
        minusButton->setSizePolicy(sizePolicy);
        minusButton->setMinimumSize(QSize(0, 36));
        minusButton->setFont(font);

        horizontalLayout->addWidget(minusButton);

        timesButton = new QPushButton(verticalLayoutWidget);
        timesButton->setObjectName(QString::fromUtf8("timesButton"));
        sizePolicy.setHeightForWidth(timesButton->sizePolicy().hasHeightForWidth());
        timesButton->setSizePolicy(sizePolicy);
        timesButton->setMinimumSize(QSize(0, 36));
        timesButton->setFont(font);

        horizontalLayout->addWidget(timesButton);

        divideButton = new QPushButton(verticalLayoutWidget);
        divideButton->setObjectName(QString::fromUtf8("divideButton"));
        sizePolicy.setHeightForWidth(divideButton->sizePolicy().hasHeightForWidth());
        divideButton->setSizePolicy(sizePolicy);
        divideButton->setMinimumSize(QSize(0, 36));
        divideButton->setFont(font);

        horizontalLayout->addWidget(divideButton);


        verticalLayout->addLayout(horizontalLayout);

        verticalSpacer_2 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_2);

        argument1Input = new QLineEdit(verticalLayoutWidget);
        argument1Input->setObjectName(QString::fromUtf8("argument1Input"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(argument1Input->sizePolicy().hasHeightForWidth());
        argument1Input->setSizePolicy(sizePolicy1);
        argument1Input->setMinimumSize(QSize(0, 35));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Avenir Next"));
        font1.setPointSize(14);
        argument1Input->setFont(font1);

        verticalLayout->addWidget(argument1Input);

        verticalSpacer = new QSpacerItem(20, 5, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer);

        argument2Input = new QLineEdit(verticalLayoutWidget);
        argument2Input->setObjectName(QString::fromUtf8("argument2Input"));
        sizePolicy1.setHeightForWidth(argument2Input->sizePolicy().hasHeightForWidth());
        argument2Input->setSizePolicy(sizePolicy1);
        argument2Input->setMinimumSize(QSize(0, 35));
        argument2Input->setFont(font1);

        verticalLayout->addWidget(argument2Input);

        verticalSpacer_3 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_3);

        aboutButton = new QPushButton(verticalLayoutWidget);
        aboutButton->setObjectName(QString::fromUtf8("aboutButton"));
        aboutButton->setMinimumSize(QSize(0, 30));
        aboutButton->setFont(font);

        verticalLayout->addWidget(aboutButton);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        plusButton->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        minusButton->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        timesButton->setText(QCoreApplication::translate("MainWindow", "*", nullptr));
        divideButton->setText(QCoreApplication::translate("MainWindow", "/", nullptr));
        aboutButton->setText(QCoreApplication::translate("MainWindow", "About", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
