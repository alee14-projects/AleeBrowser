#include "mainbrowser.h"
#include "ui_mainbrowser.h"
#include <QtWebKitWidgets/QWebView>
#include <QUrl>
#include <QDebug>

mainbrowser::mainbrowser(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::mainbrowser)
{
    //QString url = ui->lineEdit->text();
    ui->setupUi(this);
    ui->webView->load(QUrl("https://google.com"));

}

mainbrowser::~mainbrowser()
{
    delete ui;
}


void mainbrowser::on_actionQuit_triggered()
{
    close();
}

void mainbrowser::on_searchButton_clicked()
{
    qDebug() << "Search pressed!";
}
