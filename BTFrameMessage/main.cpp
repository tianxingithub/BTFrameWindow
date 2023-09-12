#include "BTFrameMessage.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    BTFrameMessage w;
    w.show();
    return a.exec();
}
