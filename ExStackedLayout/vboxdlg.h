#ifndef VBOXDLG_H
#define VBOXDLG_H

#include <QDialog>
#include <QHBoxLayout>
#include <QPushButton>

QT_BEGIN_NAMESPACE
namespace Ui { class VBoxDlg; }
QT_END_NAMESPACE


class VBoxDlg : public QDialog
{
	Q_OBJECT
public:
	VBoxDlg(QWidget *parent = nullptr);
	~VBoxDlg();

private:
	Ui::VBoxDlg *ui;
	QPushButton *pBtn1, *pBtn2, *pBtn3, *pBtn4, *pBtn5;
	QVBoxLayout *pLayout;
};

#endif // VBOXDLG_H
