#include "hboxdlg.h"
#include "ui_hboxdlg.h"

HBoxDlg::HBoxDlg(QWidget *parent)
	: QDialog(parent)
	, ui(new Ui::HBoxDlg)
{
	ui->setupUi(this);
}

HBoxDlg::~HBoxDlg()
{
	delete ui;
}

