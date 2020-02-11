#include "mainbrowser.h"
#include "ui_mainbrowser.h"
#include "about.h"
#include <QtWebKitWidgets/QWebView>
#include <QUrl>
#include <QDebug>

void mainbrowser::bUrl() {
    url = ui->lineEdit->text();
    ui->webView->load(QUrl(url));
}

mainbrowser::mainbrowser(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::mainbrowser)
{
    //QString url = ui->lineEdit->text();
    ui->setupUi(this);
    ui->webView->load(QUrl("https://about:blank"));
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
    bUrl();
}

void mainbrowser::on_lineEdit_returnPressed()
{
    bUrl();
}

void mainbrowser::on_actionAbout_triggered()
{
    About about;
    about.exec();
}

void mainbrowser::on_webView_urlChanged(const QUrl &arg1)
{
    qDebug() << "Loading" << url;

}
