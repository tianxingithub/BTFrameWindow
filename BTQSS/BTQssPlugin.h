#pragma once

#include "bt/btmodule/BTPlugin.h"
#include <QObject>

class BTQssPlugin :public BT::BTPlugin
{
	Q_OBJECT
	Q_PLUGIN_METADATA(IID BTPlugin_IID)
public:
	BTQssPlugin(QObject *parent = nullptr);
	~BTQssPlugin();

	BT::BTModule* createCustomModule();
};

