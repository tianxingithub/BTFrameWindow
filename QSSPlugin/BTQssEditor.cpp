#include "BTQssEditor.h"



BTQssEditor::BTQssEditor(QWidget*parent)
	:QDialog(parent)
	,ui(new Ui::BTQSSDialog())
{
	ui->setupUi(this);
	ui->treeWidget->setAlternatingRowColors(true);
	ui->tableWidget->setAlternatingRowColors(true);
// 	ui->tableWidget->set
}


BTQssEditor::~BTQssEditor()
{
	delete ui;
}
