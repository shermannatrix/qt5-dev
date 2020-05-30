#include "maindlg.h"
#include "ui_maindlg.h"

MainDlg::MainDlg(QWidget *parent) :
	QDialog(parent),
	ui(new Ui::MainDlg)
{
	ui->setupUi(this);

	pHBoxDlg = new HBoxDlg(this);
	pVBoxDlg = new VBoxDlg(this);
	pBoxDlg = new BoxDlg(this);
	pGridDlg = new GridDlg(this);

	pStackedLayout = new QStackedLayout();
	pStackedLayout -> addWidget(pHBoxDlg);
	pStackedLayout -> addWidget(pVBoxDlg);
	pStackedLayout -> addWidget(pBoxDlg);
	pStackedLayout -> addWidget(pGridDlg);

	pNavigationLayout = new QBoxLayout(QBoxLayout::RightToLeft);

	btnPrev = new QPushButton("Prev Dialog");
	btnNext = new QPushButton("Next Dialog");
	btnExit = new QPushButton("Exit App");

	pNavigationLayout -> addWidget(btnExit);
	pNavigationLayout -> addWidget(btnNext);
	pNavigationLayout -> addWidget(btnPrev);
	pNavigationLayout -> addStretch();

	pMainLayout = new QVBoxLayout(this);
	pMainLayout -> addLayout(pStackedLayout);
	pMainLayout -> addLayout(pNavigationLayout);

	setLayout(pMainLayout);

	connect (
		btnPrev,
		SIGNAL(clicked()),
		this,
		SLOT (onBtnPrevClicked()));

	connect (
		btnNext,
		SIGNAL(clicked()),
		this,
		SLOT (onBtnNextClicked()));

	connect (
		btnExit,
		SIGNAL(clicked()),
		this,
		SLOT (onBtnExitClicked()));
}

MainDlg::~MainDlg()
{
	delete ui;
}

void MainDlg::onBtnPrevClicked() {
	int currentDlgIndex = pStackedLayout->currentIndex();

	if (currentDlgIndex > 0)
		pStackedLayout->setCurrentIndex(currentDlgIndex - 1);
}

void MainDlg::onBtnNextClicked() {
	int currentDlgIndex = pStackedLayout->currentIndex();

	if (currentDlgIndex < 3)
		pStackedLayout->setCurrentIndex(currentDlgIndex + 1);
}

void MainDlg::onBtnExitClicked() {
	close();
}
