#include "mydlg.h"
#include "ui_mydlg.h"

MyDlg::MyDlg(QWidget *parent)
	: QDialog(parent)
	, ui(new Ui::MyDlg)
{
	ui->setupUi(this);

	pLayout = new QHBoxLayout(this);

	pBtn = new QPushButton("Click Me");

	pLayout->addWidget(pBtn);

	setLayout(pLayout);

	setWindowTitle("Signals and Slots");

	connect(
		pBtn,
		SIGNAL(clicked()),
		this,
		SLOT(onButtonClicked())
		);
}

void MyDlg::onButtonClicked() {
	qDebug() << "Button clicked...";
}

MyDlg::~MyDlg()
{
	delete ui;
}

