// Author Jakub Wolski kubixwol@gmail.com licence: GNU GPL v3.0
#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTimer>
#include <QDateTime>
#include <QFile>
#include <QTextStream>
#include <QtXml/QtXml>
#include <QMessageBox>
#include <QApplication>
#include <QCloseEvent>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

protected:
    void closeEvent(QCloseEvent *event);

private slots:

    void task_reader();
    void chowacz();
    void szouer();
    void wyniker();
    void pasek();
    void refresz();
    void aktywadozadanka();
    void on_Submit_clicked();
    void on_comboBox_activated(const QString &arg1);
    void on_Rzadanie_3_clicked();
    void on_Rzadanie_4_clicked();
    void on_Rzadanie_5_clicked();
    void on_Rzadanie_6_clicked();
    void on_Rzadanie_7_clicked();
    void on_Rzadanie_8_clicked();
    void on_Rzadanie_9_clicked();
    void on_Rzadanie_10_clicked();
    void on_Rzadanie_11_clicked();
    void on_Rzadanie_12_clicked();
    void on_Rzadanie_13_clicked();
    void on_Rzadanie_14_clicked();
    void on_Rzadanie_15_clicked();
    void on_info_clicked();

public slots:
    void onstart();
private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
