#include "BTFrameWindow.h"
#include "bt/BTGui/BTRibbonCategory.h"
#include "bt/BTGui/BTRibbonPannel.h"


BTFrameWindow::BTFrameWindow(QWidget *parent)
	: BT::BTMainWindow(parent)
{
// 	ui.setupUi(this);
	addRibbonCategory(QString("test1"))->addRibbonPannel("tstt11")->addTemplateAction(QString("test12"),"","");
	addRibbonCategory(QString("test2"))->addRibbonPannel("tstt221")->addTemplateAction(QString("test12"), "", "");
	addRibbonCategory(QString("test3"))->addRibbonPannel("tstt1331")->addTemplateAction(QString("test1332"), "", "");
	addRibbonCategory(QString("test4"))->addRibbonPannel("tstt134431")->addTemplateAction(QString("test1442"), "", "");
}
