#include "qserver.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Qserver w;
    w.show();
    return a.exec();
}
