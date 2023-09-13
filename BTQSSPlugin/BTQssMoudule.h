#pragma once
#include "bt/btmodule/BTModule.h"
class BTQssEditor;
class BTQssMoudule :public BT::BTModule
{
	Q_OBJECT
	DefineNonpointerMember(QString, InputFile)
	DefineNonpointerMember(QString, outputDir)
public:
	BTQssMoudule(QObject*parent = nullptr);
	~BTQssMoudule();
	QDialog* editor()override;
	void run() override;
private:
	BTQssEditor* m_editor{ nullptr };
};

