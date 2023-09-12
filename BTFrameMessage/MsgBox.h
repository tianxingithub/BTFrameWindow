#pragma once

#include <QDialog>
#include "ui_MsgBox.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MsgBoxClass; };
QT_END_NAMESPACE

class MsgBox : public QDialog
{
	Q_OBJECT

public:
	MsgBox(QString title = "title", QString content = "content", bool showOK = false, QWidget* parent = nullptr);
	~MsgBox();

private:
	Ui::MsgBoxClass *ui;
};
