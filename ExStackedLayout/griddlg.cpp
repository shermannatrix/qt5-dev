#include "griddlg.h"
#include "ui_griddlg.h"

GridDlg::GridDlg(QWidget *parent) :
	QDialog(parent),
	ui(new Ui::GridDlg)
{
	ui->setupUi(this);
}

GridDlg::~GridDlg()
{
	delete ui;
}
