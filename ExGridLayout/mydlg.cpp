#include "mydlg.h"
#include "ui_mydlg.h"

MyDlg::MyDlg(QWidget *parent)
	: QDialog(parent)
	, ui(new Ui::MyDlg)
{
	ui->setupUi(this);

	pLayout = new QGridLayout(this);

	pBtn1 = new QPushButton("Button 1");
	pBtn2 = new QPushButton("Button 2");
	pBtn3 = new QPushButton("Button 3");
	pBtn4 = new QPushButton("Button 4");

	pBtn5 = new QPushButton("Button 5");
	pBtn6 = new QPushButton("Button 6");
	pBtn7 = new QPushButton("Button 7");
	pBtn8 = new QPushButton("Button 8");

	pBtn3->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);

	pLayout->addWidget(pBtn1, 0, 0, 1, 1);	// First row, first col - Takes one row and one column
	pLayout->addWidget(pBtn2, 0, 1, 1, 2);	// First row, second col - Takes one row and two columns
	pLayout->addWidget(pBtn3, 0, 3, 2, 1);	// First row, fourth col - Takes two rows and one column
	pLayout->addWidget(pBtn4, 1, 0, 1, 3);	// Second row, first col - Takes one rwo and three columns

	pLayout->addWidget(pBtn5, 2, 0);	// Third row, first column - Takes one row and one column
	pLayout->addWidget(pBtn6, 2, 1);	// Third row, second column - Takes one row and two columns
	pLayout->addWidget(pBtn7, 2, 2);	// Third row, third column - Takes two rows and one column
	pLayout->addWidget(pBtn8, 2, 3);	// Third row, fourth column - Takes one row and one column

	setLayout(pLayout);

	setWindowTitle("Grid Layout");
}

MyDlg::~MyDlg()
{
	delete ui;
}

