#include "mydlg.h"
#include "ui_mydlg.h"

MyDlg::MyDlg(QWidget *parent)
	: QDialog(parent)
	, ui(new Ui::MyDlg)
{
	ui->setupUi(this);

	pAddButton = new QPushButton("Add");
	pSubtractButton = new QPushButton("Subtract");
	pMultiplyButton = new QPushButton("Multiply");
	pDivideButton = new QPushButton("Divide");

	pButtonLayout = new QBoxLayout(QBoxLayout::RightToLeft);

	pButtonLayout->addWidget(pDivideButton);
	pButtonLayout->addWidget(pMultiplyButton);
	pButtonLayout->addWidget(pSubtractButton);
	pButtonLayout->addWidget(pAddButton);

	pFormLayout = new QFormLayout();

	pFirstEdit = new QLineEdit;
	pSecondEdit = new QLineEdit;
	pResultEdit = new QLineEdit;
	pResultEdit->setReadOnly(true);

	pFormLayout->addRow("First number", pFirstEdit);
	pFormLayout->addRow("Second number:", pSecondEdit);
	pFormLayout->addRow("Result", pResultEdit);

	pMainLayout = new QVBoxLayout(this);

	pMainLayout->addItem(pFormLayout);
	pMainLayout->addItem(pButtonLayout);

	setLayout(pMainLayout);
}

MyDlg::~MyDlg()
{
	delete ui;
}

