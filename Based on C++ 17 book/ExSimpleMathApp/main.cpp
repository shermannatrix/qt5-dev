#include "mydlg.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MyDlg w;
    w.show();
    return a.exec();
}
