#include "mydlg.h"
#include "ui_mydlg.h"
#include <QDebug>

MyDlg::MyDlg(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::MyDlg)
{
    ui->setupUi(this);

    connect(
        ui->pAddButton,
        SIGNAL(clicked()),
        this,
        SLOT(onAddButtonClicked()));

    connect(
        ui->pSubtractButton,
        SIGNAL(clicked()),
        this,
        SLOT(onSubtractButtonClicked()));

    connect(
        ui->pMultiplyButton,
        SIGNAL(clicked()),
        this,
        SLOT(onMultiplyButtonClicked()));

    connect(
        ui->pDivideButton,
        SIGNAL(clicked()),
        this,
        SLOT(onDivideButtonClicked()));

    connect(
        ui->pExitButton,
        SIGNAL(clicked()),
        this,
        SLOT(onExitButtonClicked()));
}

MyDlg::~MyDlg()
{
    delete ui;
}


void MyDlg::onAddButtonClicked()
{
    qDebug() << "Add button clicked..." << endl;

    int firstNumber = ui->pFirstEdit->text().toInt();
    int secondNumber = ui->pSecondEdit->text().toInt();
    int result = firstNumber + secondNumber;
    QString strResult;
    strResult.setNum(result);
    ui->pResultEdit->setText(strResult);
}

void MyDlg::onSubtractButtonClicked()
{
    qDebug() << "Subtract button clicked..." << endl;
    int firstNumber = ui->pFirstEdit->text().toInt();
    int secondNumber = ui->pSecondEdit->text().toInt();
    int result = firstNumber - secondNumber;
    QString strResult;
    strResult.setNum(result);
    ui->pResultEdit->setText(strResult);
}

void MyDlg::onMultiplyButtonClicked()
{
    qDebug() << "Multiply button clicked..." << endl;
    int firstNumber = ui->pFirstEdit->text().toInt();
    int secondNumber = ui->pSecondEdit->text().toInt();
    int result = firstNumber * secondNumber;
    QString strResult;
    strResult.setNum(result);
    ui->pResultEdit->setText(strResult);
}

void MyDlg::onDivideButtonClicked()
{
    qDebug() << "Divide button clicked..." << endl;
    int firstNumber = ui->pFirstEdit->text().toInt();
    int secondNumber = ui->pSecondEdit->text().toInt();
    int result = firstNumber / secondNumber;
    QString strResult;
    strResult.setNum(result);
    ui->pResultEdit->setText(strResult);
}

void MyDlg::onExitButtonClicked()
{
    qDebug() << "Exit button clicked..." << endl;
    QApplication::exit();
}
