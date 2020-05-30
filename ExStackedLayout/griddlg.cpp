#include "griddlg.h"
#include "ui_griddlg.h"

GridDlg::GridDlg(QWidget *parent) :
	QDialog(parent),
	ui(new Ui::GridDlg)
{
	ui->setupUi(this);

	pBtn1 = new QPushButton("Button 1");
	pBtn2 = new QPushButton("Button 2");
	pBtn3 = new QPushButton("Button 3");
	pBtn4 = new QPushButton("Button 4");
	pBtn5 = new QPushButton("Button 5");

	pBtn6 = new QPushButton("Button 6");
	pBtn7 = new QPushButton("Button 7");
	pBtn8 = new QPushButton("Button 8");
	pBtn9 = new QPushButton("Button 9");
	pBtn10 = new QPushButton("Button 10");

	pLayout = new QGridLayout(this);

	pLayout -> addWidget(pBtn1, 0, 0);	// first row, first col
	pLayout -> addWidget(pBtn2, 0, 1);	// first row, second col
	pLayout -> addWidget(pBtn3, 0, 2);	// first row, third col
	pLayout -> addWidget(pBtn4, 0, 3);	// first row, fourth col
	pLayout -> addWidget(pBtn5, 0, 4);	// first row, fifth col

	pLayout -> addWidget(pBtn6, 1, 0);	// second row, first col
	pLayout -> addWidget(pBtn7, 1, 1);	// second row, second col
	pLayout -> addWidget(pBtn8, 1, 2);	// second row, third col
	pLayout -> addWidget(pBtn9, 1, 3);	// second row, fourth col
	pLayout -> addWidget(pBtn10, 1, 4);	// second row, fifth col

	setLayout(pLayout);
}

GridDlg::~GridDlg()
{
	delete ui;
}
