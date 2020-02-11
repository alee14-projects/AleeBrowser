#ifndef MAINBROWSER_H
#define MAINBROWSER_H

#include <QMainWindow>

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

    void on_searchButton_clicked();

    void on_lineEdit_returnPressed();

    void on_actionAbout_triggered();

    void bUrl();

    void on_webView_urlChanged(const QUrl &arg1);

private:
    Ui::mainbrowser *ui;
    QString url;
};
#endif // MAINBROWSER_H
