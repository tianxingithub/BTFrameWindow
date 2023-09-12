#include "MsgBox.h"

MsgBox::MsgBox(QWidget* parent)
	: QDialog(parent)
	, ui(new Ui::MsgBoxClass())
{
	ui->setupUi(this);
	ui->msgIcon->setPixmap(QPixmap("E:/images/BTMsgBox/notice.png"));

	QPixmap pixmap("E:/images/BTMsgBox/wrong2.png");
	QIcon icon(pixmap);
	ui->msgX->setIcon(icon);
	ui->msgX->setIconSize(pixmap.size());

	QString title = "<b>" + QString("���Ǵ����ı�") + "< / b>";
	ui->msgTitle->setText(title);
	ui->msgContent->setText(u8"����������");
}

MsgBox::~MsgBox()
{
	delete ui;
}
