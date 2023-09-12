#include "MsgBox.h"
#include <QMouseEvent>
#include <QPushButton>

BTMsgBox::BTMsgBox(QString title, QString content, bool showOK,QWidget* parent)
	: QDialog(parent)
	, ui(new Ui::MsgBoxClass())
{
	ui->setupUi(this);
	this->setStyleSheet("{ background: white;}");
	this->setWindowFlags(Qt::FramelessWindowHint);
	if (showOK) 
	{
		this->setFixedSize(340, 160);
	}
	else 
	{
		this->setFixedSize(340, 100);
	}
	
	ui->msgIcon->setPixmap(QPixmap("E:/images/BTMsgBox/notice2.png"));

	QPixmap pixmap("E:/images/BTMsgBox/wrong2.png");
	QIcon icon(pixmap);
	ui->msgX->setIcon(icon);
	ui->msgX->setIconSize(pixmap.size());

// 	QString title = "<b>" + QString("���Ǵ����ı�") + "< / b>";
	ui->msgTitle->setText(title);
// 	ui->msgContent->setText(u8"����������");
	ui->msgContent->setText(content);


// 	connect(ui->frame, &QFrame::mousePressEvent, this, &BTMsgBox::mousePressEvent);
// 	connect(ui->frame, &QFrame::mouseMoveEvent, this, &BTMsgBox::mouseMoveEvent);
// 	connect(ui->frame, &QFrame::mouseReleaseEvent, this, &BTMsgBox::mouseReleaseEvent);
	connect(ui->msgX, &QPushButton::clicked, this, &BTMsgBox::rejectSlot);
	connect(ui->msgOK, &QPushButton::clicked, this, &BTMsgBox::okSlot);
}

BTMsgBox::~BTMsgBox()
{
	delete ui;
}


void BTMsgBox::mousePressEvent(QMouseEvent* event)
{
	mousePoint = event->pos();    //�������ڴ����λ��
	isMousePressed = true;        //��갴��
	event->accept();
}

void BTMsgBox::mouseMoveEvent(QMouseEvent* event)
{
	//��������������
	if (isMousePressed == true)
	{

		//����������Ļ��λ��
		QPoint curMousePoint = event->globalPos() - mousePoint;
		//�ƶ�������λ��
		move(curMousePoint);
	}
	event->accept();
}

void BTMsgBox::mouseReleaseEvent(QMouseEvent* event)
{
	//���δ����
	isMousePressed = false;
	event->accept();
}

void BTMsgBox::rejectSlot()
{
	this->reject();
}

void BTMsgBox::okSlot()
{
	this->accept();
}
