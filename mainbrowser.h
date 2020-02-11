#ifndef MAINBROWSER_H
#define MAINBROWSER_H

#include <QMainWindow>
#include <QtWebKit>
#include <QtWebKitWidgets/QWebView>
#include <QUrl>
#include <QDebug>

QT_BEGIN_NAMESPACE
namespace Ui { class mainbrowser; }
QT_END_NAMESPACE

class mainbrowser : public QMainWindow
{
    Q_OBJECT

public:
    mainbrowser(QWidget *parent = nullptr);
    ~mainbrowser();

private slots:
    void on_actionQuit_triggered();

    void on_urlBar_returnPressed();

    void on_actionAbout_triggered();

    void bUrl();

    void on_backButton_clicked();

    void on_forwardButton_clicked();

    void on_refreshButton_clicked();

    void on_webView_loadStarted();

    void on_webView_titleChanged(const QString &title);

private:
    Ui::mainbrowser *ui;
    QString url;
};
#endif // MAINBROWSER_H
