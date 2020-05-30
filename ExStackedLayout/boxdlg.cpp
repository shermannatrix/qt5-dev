#include "boxdlg.h"
#include "ui_boxdlg.h"

BoxDlg::BoxDlg(QWidget *parent) :
	QDialog(parent),
	ui(new Ui::BoxDlg)
{
	ui->setupUi(this);
}

BoxDlg::~BoxDlg()
{
	delete ui;
}
