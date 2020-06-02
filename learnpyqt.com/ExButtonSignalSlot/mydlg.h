#ifndef MYDLG_H
#define MYDLG_H

#include <QDialog>
#include <QDebug>
#include <QHBoxLayout>
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
	QPushButton *pBtn;
	QHBoxLayout *pLayout;

private slots:
	void onButtonClicked();
};
#endif // MYDLG_H
