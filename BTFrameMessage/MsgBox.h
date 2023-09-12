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
	QPoint mousePoint;      //鼠标相对于窗体的位置
	bool isMousePressed;    //鼠标是否按下

	virtual void mousePressEvent(QMouseEvent* event);  //鼠标按下事件
	virtual void mouseMoveEvent(QMouseEvent* event);   //窗体拖动事件
	virtual void mouseReleaseEvent(QMouseEvent* event);//鼠标释放事件
	void rejectSlot();
	void okSlot();

private:
	Ui::MsgBoxClass *ui;
};
