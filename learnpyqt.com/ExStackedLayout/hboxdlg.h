#ifndef HBOXDLG_H
#define HBOXDLG_H

#include <QDialog>
#include <QHBoxLayout>
#include <QPushButton>

QT_BEGIN_NAMESPACE
namespace Ui { class HBoxDlg; }
QT_END_NAMESPACE

class HBoxDlg : public QDialog
{
	Q_OBJECT

public:
	HBoxDlg(QWidget *parent = nullptr);
	~HBoxDlg();

private:
	Ui::HBoxDlg *ui;
	QPushButton *pBtn1, *pBtn2, *pBtn3, *pBtn4, *pBtn5;
	QHBoxLayout *pLayout;
};
#endif // HBOXDLG_H
