#include "BTQssMoudule.h"
// #include "bt/btmodule/btcat"
#include "BTQssEditor.h"


BTQssMoudule::BTQssMoudule(QObject*parent)
	:BT::BTModule(parent)
{
}


BTQssMoudule::~BTQssMoudule()
{
}

QDialog* BTQssMoudule::editor()
{
	if (!m_editor)
	{
		m_editor = new BTQssEditor;
	}
	return m_editor;
}

void BTQssMoudule::run()
{

}
