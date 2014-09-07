#include "ViewportStateTester.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    ViewportStateTester w;
    w.show();
    return a.exec();
}
