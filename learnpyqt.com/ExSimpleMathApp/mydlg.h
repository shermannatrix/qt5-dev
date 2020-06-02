#ifndef MYDLG_H
#define MYDLG_H

#include <QDialog>
#include <QPushButton>
#include <QLabel>
#include <QLineEdit>
#include <QVBoxLayout>
#include <QFormLayout>

QT_BEGIN_NAMESPACE
namespace Ui { class MyDlg; }
QT_END_NAMESPACE

class MyDlg : public QDialog
{
    Q_OBJECT

public:
    MyDlg(QWidget *parent = nullptr);
    ~MyDlg();

private slots:
    void onAddButtonClicked();

    void onSubtractButtonClicked();

    void onMultiplyButtonClicked();

    void onDivideButtonClicked();

    void onExitButtonClicked();

private:
    Ui::MyDlg *ui;

};
#endif // MYDLG_H
