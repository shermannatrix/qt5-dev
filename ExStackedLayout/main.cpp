#include "hboxdlg.h"

#include <QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	HBoxDlg w;
	w.show();
	return a.exec();
}
