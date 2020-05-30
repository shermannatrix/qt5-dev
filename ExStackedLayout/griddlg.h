#ifndef GRIDDLG_H
#define GRIDDLG_H

#include <QDialog>
#include <QGridLayout>
#include <QPushButton>

namespace Ui {
class GridDlg;
}

class GridDlg : public QDialog
{
	Q_OBJECT

public:
	explicit GridDlg(QWidget *parent = nullptr);
	~GridDlg();

private:
	Ui::GridDlg *ui;
	QPushButton *pBtn1, *pBtn2, *pBtn3, *pBtn4, *pBtn5;
	QPushButton *pBtn6, *pBtn7, *pBtn8, *pBtn9, *pBtn10;
	QGridLayout *pLayout;
};

#endif // GRIDDLG_H
