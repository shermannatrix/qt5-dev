#ifndef MYDLG_H
#define MYDLG_H

#include <QDialog>

QT_BEGIN_NAMESPACE
namespace Ui { class MyDlg; }
QT_END_NAMESPACE

class MyDlg : public QDialog
{
    Q_OBJECT

public:
    MyDlg(QWidget *parent = nullptr);
    ~MyDlg();

private:
    Ui::MyDlg *ui;
};
#endif // MYDLG_H
