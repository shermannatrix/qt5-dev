#include "mydlg.h"
#include "ui_mydlg.h"

MyDlg::MyDlg(QWidget *parent)
	: QDialog(parent)
	, ui(new Ui::MyDlg)
{
	ui->setupUi(this);
	pLayout = new QVBoxLayout(this);
	pBtn1 = new QPushButton("Button 1");
	pBtn2 = new QPushButton("Button 2");
	pBtn3 = new QPushButton("Button 3");

	pLayout->addWidget(pBtn1);
	pLayout->addWidget(pBtn2);
	pLayout->addWidget(pBtn3);

	setLayout(pLayout);

	setWindowTitle("Vertical Box Layout");
}

MyDlg::~MyDlg()
{
	delete ui;
}

