#include "mydlg.h"
#include "ui_mydlg.h"

MyDlg::MyDlg(QWidget *parent)
	: QDialog(parent)
	, ui(new Ui::MyDlg)
{
	ui->setupUi(this);

	pLayout = new QBoxLayout(QBoxLayout::LeftToRight, this);

	pBtn1 = new QPushButton("Button 1");
	pBtn2 = new QPushButton("Button 2");
	pBtn3 = new QPushButton("Button 3");
	pBtn4 = new QPushButton("Button 4");
	pBtn5 = new QPushButton("Button 5");

	pBtn1->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
	pBtn2->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
	pBtn3->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
	pBtn4->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
	pBtn5->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);

	pLayout->addWidget(pBtn1);
	pLayout->addWidget(pBtn2);
	pLayout->addWidget(pBtn3);
	pLayout->addWidget(pBtn4);
	pLayout->addWidget(pBtn5);

	setLayout(pLayout);

	setWindowTitle("Box Layout");
}

MyDlg::~MyDlg()
{
	delete ui;
}

