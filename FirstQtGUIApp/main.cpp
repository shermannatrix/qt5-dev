#include "mainwindow.h"

#include <QApplication>
#include <QWidget>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);

	QWidget myWindow;
	myWindow.setWindowTitle("Hello Qt, my first GUI application.");
	myWindow.show();

	return a.exec();
}
