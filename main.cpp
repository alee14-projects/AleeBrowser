#include "mainbrowser.h"

#include <QApplication>
#include <QDebug>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    mainbrowser browser;
    qDebug() << "Starting Alee Browser";
    browser.show();
    return a.exec();
}
