#include "kukulator.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    kukulator w;
    w.show();
    return a.exec();
}
