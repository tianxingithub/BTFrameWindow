#include "BTQssPlugin.h"
#include "BTQssMoudule.h"


BTQssPlugin::BTQssPlugin(QObject *parent)
	:BT::BTPlugin(parent)
{

}


BTQssPlugin::~BTQssPlugin()
{
}

BT::BTModule* BTQssPlugin::createCustomModule()
{
	return new BTQssMoudule;
}
