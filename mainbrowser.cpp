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
    ui->setupUi(this);
    ui->webView->load(QUrl("https://about:blank"));
}

mainbrowser::~mainbrowser()
{
    qDebug() << "Closing Alee Browser...";
    delete ui;
}


void mainbrowser::on_actionQuit_triggered()
{
    close();
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

void mainbrowser::on_backButton_clicked()
{
    ui->webView->back();
}

void mainbrowser::on_forwardButton_clicked()
{
    ui->webView->forward();
}

void mainbrowser::on_refreshButton_clicked()
{
    ui->webView->reload();
}
