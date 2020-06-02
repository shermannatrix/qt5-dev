#ifndef MYDLG_H
#define MYDLG_H

#include <QDialog>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QPushButton>

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
	QPushButton *pBtn1, *pBtn2, *pBtn3;
	// QHBoxLayout *pLayout;
	QVBoxLayout *pLayout;
};
#endif // MYDLG_H
