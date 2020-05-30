#ifndef MYDLG_H
#define MYDLG_H

#include <QDialog>
#include <QPushButton>
#include <QLineEdit>
#include <QLabel>
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

private:
	Ui::MyDlg *ui;

	QVBoxLayout *pMainLayout;
	QBoxLayout *pButtonLayout;
	QFormLayout *pFormLayout;

	QLabel *pFirstLabel, *pSecondLabel, *pResultLabel;
	QLineEdit *pFirstEdit, *pSecondEdit, *pResultEdit;
	QPushButton *pAddButton, *pSubtractButton, *pMultiplyButton, *pDivideButton;
};
#endif // MYDLG_H
