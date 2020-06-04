#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>

MainWindow::MainWindow(QWidget *parent)
	: QMainWindow(parent)
	, ui(new Ui::MainWindow)
{
	ui->setupUi(this);

	connect(ui->treeView,
			&QTreeView::clicked,
			this,
			&MainWindow::clicked);
}

MainWindow::~MainWindow()
{
	delete ui;
}

void MainWindow::clicked() {

}

