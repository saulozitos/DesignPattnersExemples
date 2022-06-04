#include "controller.h"
#include <QCoreApplication>

int
main(int argc, char* argv[])
{
    QCoreApplication a(argc, argv);

    Controller c;

    return a.exec();
}
