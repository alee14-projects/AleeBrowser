#include "mainbrowser.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    mainbrowser w;
    w.show();
    return a.exec();
}
