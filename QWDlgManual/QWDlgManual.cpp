#include "QWDlgManual.h"

void QWDlgManual::on_chkBoxUnder(bool checked)
{
	QFont font = txtEdit->font();
	font.setUnderline(checked);
	txtEdit->setFont(font);
}

QWDlgManual::QWDlgManual(QWidget *parent) : QDialog(parent)
{
	iniUI();
	iniSignalSlots();
	setWindowTitle("Form created mannually");
}

void QWDlgManual::iniUI()
{
	chkBoxUnder = new QCheckBox(tr("Underline"));
	chkBoxItalic = new QCheckBox(tr("Italic"));
	chkBoxBold = new QCheckBox(tr("Bold"));
	QHBoxLayout* HLayFirst = new QHBoxLayout;
	HLayFirst->addWidget(chkBoxUnder);
	HLayFirst->addWidget(chkBoxItalic);
	HLayFirst->addWidget(chkBoxBold);
	rBtnBlack = new QRadioButton(tr("Black"));
	rBtnBlack->setChecked(true);
	rBtnRed = new QRadioButton(tr("Red"));
	rBtnBlue = new QRadioButton(tr("Blue"));
	QHBoxLayout* HLaySecond = new QHBoxLayout;
	HLaySecond->addWidget(rBtnBlack);
	HLaySecond->addWidget(rBtnRed);
	HLaySecond->addWidget(rBtnBlue);
	btnOK = new QPushButton(tr("OK"));
	btnCancel = new QPushButton(tr("cancel"));
	btnClose = new QPushButton(tr("close"));
	QHBoxLayout* HLayThird = new QHBoxLayout;
	HLayThird->addStretch();
	HLayThird->addWidget(btnOK);
	HLayThird->addWidget(btnCancel);
	HLayThird->addStretch();
	HLayThird->addWidget(btnClose);
	txtEdit = new QPlainTextEdit;
	txtEdit->setPlainText("Hello world\n\nIt is my demo");
	QFont font = txtEdit->font();
	font.setPointSize(20);
	txtEdit->setFont(font);
	QVBoxLayout* VLay = new QVBoxLayout;
	VLay->addLayout(HLayFirst);
	VLay->addLayout(HLaySecond);
	VLay->addLayout(HLayThird);
	setLayout(VLay);
}