#pragma once

#include <QDialog>
#include "ui_MsgBox.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MsgBoxClass; };
QT_END_NAMESPACE

class BTMsgBox : public QDialog
{
	Q_OBJECT

public:
	BTMsgBox(QString title = "title", QString content = "content", bool showOK = false, QWidget* parent = nullptr);
	~BTMsgBox();
public:
	QPoint mousePoint;      //�������ڴ����λ��
	bool isMousePressed;    //����Ƿ���

	virtual void mousePressEvent(QMouseEvent* event);  //��갴���¼�
	virtual void mouseMoveEvent(QMouseEvent* event);   //�����϶��¼�
	virtual void mouseReleaseEvent(QMouseEvent* event);//����ͷ��¼�
	void rejectSlot();
	void okSlot();

private:
	Ui::MsgBoxClass *ui;
};
