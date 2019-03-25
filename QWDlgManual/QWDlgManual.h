#pragma once

#include <QDialog>
#include <QCheckBox>
#include <QRadioButton>
#include <QPlainTextEdit>
#include <QPushButton>
#include <QHBoxLayout>

class QWDlgManual : public QDialog
{
public:
	QWDlgManual(QWidget *parent = Q_NULLPTR);
	~QWDlgManual();
private:
	QCheckBox* chkBoxUnder;
	QCheckBox* chkBoxItalic;
	QCheckBox* chkBoxBold;
	QRadioButton* rBtnBlack;
	QRadioButton* rBtnRed;
	QRadioButton* rBtnBlue;
	QPlainTextEdit* txtEdit;
	QPushButton* btnOK;
	QPushButton* btnCancel;
	QPushButton* btnClose;
	void iniUI();
	void iniSignalSlots();
private slots:
	void on_chkBoxUnder(bool checked);
	void on_chkBoxItalic(bool checked);
	void on_chkBoxBold(bool checked);
	void setTextFontColor();
protected:
	Q_OBJECT
};