#ifndef BOXDLG_H
#define BOXDLG_H

#include <QDialog>
#include <QPushButton>
#include <QBoxLayout>

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
	QPushButton *pBtn1, *pBtn2, *pBtn3, *pBtn4, *pBtn5;
	QBoxLayout *pLayout;
};

#endif // BOXDLG_H
