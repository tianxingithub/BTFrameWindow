#include "BTQssEditor.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    BTQssEditor w;
    w.show();
    return a.exec();
}
