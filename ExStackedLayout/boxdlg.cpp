#include "boxdlg.h"
#include "ui_boxdlg.h"

BoxDlg::BoxDlg(QWidget *parent) :
	QDialog(parent),
	ui(new Ui::BoxDlg)
{
	ui->setupUi(this);

	pBtn1 = new QPushButton("Button 1");
	pBtn2 = new QPushButton("Button 2");
	pBtn3 = new QPushButton("Button 3");
	pBtn4 = new QPushButton("Button 4");
	pBtn5 = new QPushButton("Button 5");

	pLayout = new QBoxLayout(QBoxLayout::BottomToTop, this);

	pLayout -> addWidget(pBtn1);
	pLayout -> addWidget(pBtn2);
	pLayout -> addWidget(pBtn3);
	pLayout -> addWidget(pBtn4);
	pLayout -> addWidget(pBtn5);

	setLayout(pLayout);
}

BoxDlg::~BoxDlg()
{
	delete ui;
}
