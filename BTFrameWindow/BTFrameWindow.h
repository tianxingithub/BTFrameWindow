#pragma once

#include <QtWidgets/QMainWindow>
// #include "ui_BTFrameWindow.h"
#include "bt/BTGui/BTMainWindow.h"

class BTFrameWindow 
	: public BT::BTMainWindow
{
	Q_OBJECT

public:
	BTFrameWindow(QWidget *parent = Q_NULLPTR);
	~BTFrameWindow()
	{

	}

private:
// 	Ui::BTFrameWindowClass ui;
};
