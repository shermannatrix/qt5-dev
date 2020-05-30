#ifndef GRIDDLG_H
#define GRIDDLG_H

#include <QDialog>

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
};

#endif // GRIDDLG_H
