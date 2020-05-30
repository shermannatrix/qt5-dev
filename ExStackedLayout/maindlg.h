#ifndef MAINDLG_H
#define MAINDLG_H

// built-in Qt headers goes here
#include <QWidget>
#include <QDialog>
#include <QPushButton>
#include <QStackedLayout>
#include <QBoxLayout>
#include <QVBoxLayout>

// Custom headers goes here
#include "hboxdlg.h"
#include "vboxdlg.h"
#include "boxdlg.h"
#include "griddlg.h"

namespace Ui {
class MainDlg;
}

class MainDlg : public QDialog
{
	Q_OBJECT

public:
	explicit MainDlg(QWidget *parent = nullptr);
	~MainDlg();

private:
	Ui::MainDlg *ui;

	QStackedLayout *pStackedLayout;
	QBoxLayout *pNavigationLayout;
	QVBoxLayout *pMainLayout;
	QPushButton *btnPrev, *btnNext, *btnExit;

	HBoxDlg *pHBoxDlg;
	VBoxDlg *pVBoxDlg;
	BoxDlg *pBoxDlg;
	GridDlg *pGridDlg;

private slots:
	void onBtnPrevClicked();
	void onBtnNextClicked();
	void onBtnExitClicked();
};

#endif // MAINDLG_H
