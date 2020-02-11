#include "mainbrowser.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    mainbrowser browser;
    browser.show();
    return a.exec();
}
