#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>

MainWindow::MainWindow(QWidget *parent)
	: QMainWindow(parent)
	, ui(new Ui::MainWindow)
{
	ui->setupUi(this);

	connect(ui->myLineEdit,
			&QLineEdit::textChanged,
			this,
			&MainWindow::onMyLineEdit_TextChanged);
}

MainWindow::~MainWindow()
{
	delete ui;
}

void MainWindow::onMyLineEdit_TextChanged()
{
	qDebug() << ui->myLineEdit->text();
}
