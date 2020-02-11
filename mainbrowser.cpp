#include "mainbrowser.h"
#include "ui_mainbrowser.h"
#include "about.h"

void mainbrowser::bUrl() {
    url = ui->urlBar->text();
    ui->webView->load(QUrl("http://" + url));
}

mainbrowser::mainbrowser(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::mainbrowser)
{
    ui->setupUi(this);
    QWidget::setWindowTitle("Alee Browser");
    ui->urlBar->setText("about:blank");
}

mainbrowser::~mainbrowser()
{
    qDebug() << "Closing Alee Browser...";
    ui->webView->deleteLater();
    delete ui;
}


void mainbrowser::on_actionQuit_triggered()
{
    close();
}

void mainbrowser::on_urlBar_returnPressed()
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

void mainbrowser::on_webView_loadStarted()
{

}

void mainbrowser::on_webView_titleChanged(const QString &title)
{
    if (title == NULL) {
    QWidget::setWindowTitle("Alee Browser");
    } else {
    QWidget::setWindowTitle(title + " - Alee Browser");
    }
}
