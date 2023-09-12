#include "BTQssEditor.h"

#include <QCheckBox>

BTQssEditor::BTQssEditor(QWidget*parent)
	:QDialog(parent)
	,ui(new Ui::BTQSSDialog())
{
	ui->setupUi(this);
	ui->treeWidget->setAlternatingRowColors(true);
	ui->tableWidget->setAlternatingRowColors(true);
// 	ui->tableWidget->set
	this->setStyleSheet("QDialog { background-color:#f0f2f5}");



	ui->checkBox->setTristate(true);
	ui->checkBox_2->setTristate(true);
	ui->checkBox_3->setTristate(true);
	ui->checkBox_4->setTristate(true);
}


BTQssEditor::~BTQssEditor()
{
	delete ui;
}
