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
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *buttonOne;
    QPushButton *buttonTwo;
    QPushButton *buttonThree;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        horizontalLayoutWidget = new QWidget(centralwidget);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(70, 10, 621, 51));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        buttonOne = new QPushButton(horizontalLayoutWidget);
        buttonOne->setObjectName(QString::fromUtf8("buttonOne"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(buttonOne->sizePolicy().hasHeightForWidth());
        buttonOne->setSizePolicy(sizePolicy);
        buttonOne->setMinimumSize(QSize(0, 40));
        QFont font;
        font.setFamily(QString::fromUtf8("Realist"));
        font.setPointSize(12);
        font.setBold(true);
        font.setWeight(75);
        buttonOne->setFont(font);

        horizontalLayout->addWidget(buttonOne);

        buttonTwo = new QPushButton(horizontalLayoutWidget);
        buttonTwo->setObjectName(QString::fromUtf8("buttonTwo"));
        sizePolicy.setHeightForWidth(buttonTwo->sizePolicy().hasHeightForWidth());
        buttonTwo->setSizePolicy(sizePolicy);
        buttonTwo->setMinimumSize(QSize(0, 40));
        buttonTwo->setFont(font);

        horizontalLayout->addWidget(buttonTwo);

        buttonThree = new QPushButton(horizontalLayoutWidget);
        buttonThree->setObjectName(QString::fromUtf8("buttonThree"));
        sizePolicy.setHeightForWidth(buttonThree->sizePolicy().hasHeightForWidth());
        buttonThree->setSizePolicy(sizePolicy);
        buttonThree->setMinimumSize(QSize(0, 40));
        buttonThree->setFont(font);

        horizontalLayout->addWidget(buttonThree);

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
        buttonOne->setText(QCoreApplication::translate("MainWindow", "BUTTON 1", nullptr));
        buttonTwo->setText(QCoreApplication::translate("MainWindow", "BUTTON 2", nullptr));
        buttonThree->setText(QCoreApplication::translate("MainWindow", "BUTTON 3", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
