#include "MsgBox.h"

MsgBox::MsgBox(QString title, QString content, bool showOK,QWidget* parent)
	: QDialog(parent)
	, ui(new Ui::MsgBoxClass())
{
	ui->setupUi(this);
	this->setStyleSheet("{ background: white;}");
	this->setWindowFlags(Qt::FramelessWindowHint);
	if (showOK) 
	{
		this->setFixedSize(520, 220);
	}
	else 
	{
		this->setFixedSize(340, 150);
	}
	
	ui->msgIcon->setPixmap(QPixmap("E:/images/BTMsgBox/notice2.png"));

	QPixmap pixmap("E:/images/BTMsgBox/wrong2.png");
	QIcon icon(pixmap);
	ui->msgX->setIcon(icon);
	ui->msgX->setIconSize(pixmap.size());

// 	QString title = "<b>" + QString("这是粗体文本") + "< / b>";
	ui->msgTitle->setText(title);
// 	ui->msgContent->setText(u8"这里是详情");
	ui->msgContent->setText(content);
}

MsgBox::~MsgBox()
{
	delete ui;
}
