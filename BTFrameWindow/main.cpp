#include "BTFrameWindow.h"
#include <QtWidgets/QApplication>
#include <QDebug>

#include <QFile>
#include <QTextStream>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	BTFrameWindow w;
// 	a.setStyleSheet("");
	QString qssFile = QString("F:/QSS/BTFrameStyle.css");
// 	QString qssFile = QString("BTFrameStyle.css");
// 	QString qssFile = QString("D:/tianxin/Desktop/stylesheets/focus_highlighting.css");
	QFile styleFile(qssFile);
	if (styleFile.open(QIODevice::ReadOnly | QIODevice::Text))
	{
		QTextStream styleStream(&styleFile);
		QString style = styleStream.readAll();
		w.setStyleSheet(style);
// 		qDebug() << "**********************************************";
		styleFile.close();
	}

	w.show();
	return a.exec();
}
