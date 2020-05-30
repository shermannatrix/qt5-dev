#ifndef BOXDLG_H
#define BOXDLG_H

#include <QDialog>

namespace Ui {
class BoxDlg;
}

class BoxDlg : public QDialog
{
	Q_OBJECT

public:
	explicit BoxDlg(QWidget *parent = nullptr);
	~BoxDlg();

private:
	Ui::BoxDlg *ui;
};

#endif // BOXDLG_H
