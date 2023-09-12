#include "MsgBox.h"

MsgBox::MsgBox(QWidget *parent)
	: QDialog(parent)
	, ui(new Ui::MsgBoxClass())
{
	ui->setupUi(this);
}

MsgBox::~MsgBox()
{
	delete ui;
}
