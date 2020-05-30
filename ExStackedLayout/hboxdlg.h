#ifndef HBOXDLG_H
#define HBOXDLG_H

#include <QDialog>

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
};
#endif // HBOXDLG_H
