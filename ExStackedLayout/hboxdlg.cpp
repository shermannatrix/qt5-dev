#include "hboxdlg.h"
#include "ui_hboxdlg.h"

HBoxDlg::HBoxDlg(QWidget *parent)
	: QDialog(parent)
	, ui(new Ui::HBoxDlg)
{
	ui->setupUi(this);

	pBtn1 = new QPushButton("Button 1");
	pBtn2 = new QPushButton("Button 2");
	pBtn3 = new QPushButton("Button 3");
	pBtn4 = new QPushButton("Button 4");
	pBtn5 = new QPushButton("Button 5");

	pLayout = new QHBoxLayout(this);

	pLayout -> addWidget(pBtn1);
	pLayout -> addWidget(pBtn2);
	pLayout -> addWidget(pBtn3);
	pLayout -> addWidget(pBtn4);
	pLayout -> addWidget(pBtn5);

	setLayout(pLayout);
}

HBoxDlg::~HBoxDlg()
{
	delete ui;
}

