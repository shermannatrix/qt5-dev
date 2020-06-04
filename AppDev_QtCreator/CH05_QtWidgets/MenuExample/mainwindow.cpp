#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
	: QMainWindow(parent)
	, ui(new Ui::MainWindow)
{
	ui->setupUi(this);
	connect(ui->actionAbout, &QAction::triggered, this, &MainWindow::handleAbout);
}

MainWindow::~MainWindow()
{
	delete ui;
}

void MainWindow::handleAbout() {
	// Do something here.
}

