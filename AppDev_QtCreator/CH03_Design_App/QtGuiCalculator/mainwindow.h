#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPair>
#include "resultdialog.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT
	typedef QPair<float, float> Arguments;

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

	Arguments arguments();

public slots:
	void aboutButtonClicked();
	void plusButtonClicked();
	void minusButtonClicked();
	void timesButtonClicked();
	void divideButtonClicked();

	void showResult(float r);

signals:
	void computed(float f);

private:
    Ui::MainWindow *ui;
	ResultDialog* results;
};
#endif // MAINWINDOW_H
