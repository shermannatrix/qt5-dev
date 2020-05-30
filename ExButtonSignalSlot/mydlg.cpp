#include "mydlg.h"
#include "ui_mydlg.h"

MyDlg::MyDlg(QWidget *parent)
	: QDialog(parent)
	, ui(new Ui::MyDlg)
{
	ui->setupUi(this);
}

MyDlg::~MyDlg()
{
	delete ui;
}

