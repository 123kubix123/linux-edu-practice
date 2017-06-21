// Author Jakub Wolski kubixwol@gmail.com licence: GNU GPL v3.0
#include "mainwindow.h"
#include "ui_mainwindow.h"
//globalsy
bool suiczer = false;
int wartoscpaska = 1;
QString zadanko;
QString zalicz;
QString nazwa;
QString nazwapliku;
float max = 0;
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    //chowanie niepotrzebnych aktualnie elementów ui
    ui->setupUi(this);
    ui->tekst->hide();
    ui->Submit->hide();
    ui->exit->hide();
    ui->progressBar->hide();
}
//wywołuje się na początku pokazuje okienko o autorach
void MainWindow::onstart()
{
    QMessageBox::information(this,tr("Informacje"),tr("Autor Jakub Wolski  Kontakt: kubixwol@gmail.com licence: GNU GPL v3.0"));
}




//funkcja odczytująca zadanie
void MainWindow::task_reader()
{
    QString tresc;

    QFile file(zadanko+".txt");
    if(!file.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        ui->blad->setText("Odczytywanie treści zadania nie powiodło się. "+zadanko);
        ui->tekst->hide();
    }
    else
    {

    QTextStream in(&file);
       while (!in.atEnd()) {
           QString line = in.readLine();
           tresc += line+"<br/>";
       }
         ui->tekst->setHtml(tresc);
         // todo: dodac mozliwość ustalania czasu
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}

//funkcja wywoływana po kliknięciu na submit
void MainWindow::on_Submit_clicked()
{
    QMessageBox::StandardButton reply;
    reply = QMessageBox::information(this,tr("Weryfikacja"),tr("Czy jesteś pewny? Nie ma już odwrotu, sprawdź dokładnie czy poprawnie wykonałeś całe zadanie. Po zamknięciu tego okna zadanie zostanie sprawdzone."),QMessageBox::No | QMessageBox::Yes);
    if(reply == QMessageBox::Yes)
    {
    suiczer = false;
    ui->blad->hide();
    ui->Submit->hide();
    QProcess process1;
    process1.startDetached("/bin/bash", QStringList()<< "-c" << "./"+zadanko+".sh");
    //QProcess process;
    //process.startDetached("/bin/bash", QStringList()<< "");
    pasek();
    QTimer *timer=new QTimer(this);
    connect(timer,SIGNAL(timeout()),this,SLOT(wyniker()));
    timer->start(3000);
    }
}

//odświeża pasek postępu sprawdzania zadanka
void MainWindow::refresz()
{
    if(wartoscpaska < 101)
    {
    ui->progressBar->setValue(wartoscpaska);
    wartoscpaska++;
    }
}

//animacja paska postępu jeszcze niezoptymalizowana bo qtimer nie jest zatzrzymany po końcu animacji
void MainWindow::pasek()
{
    ui->progressBar->show();
    ui->blad->setText("Proszę czekać trwa sprawdzanie zadania.");
    QTimer *timer=new QTimer(this);
    connect(timer,SIGNAL(timeout()),this,SLOT(refresz()));
    timer->start(30);

}

// to je funkcja która chowa ui po rozpoczęciu zadania
void MainWindow::chowacz()
{
   ui->comboBox->close();
   ui->InfoWpis->close();
   ui->blad->clear();
   ui->opisy_zadanek->hide();
}

//pokazuje elementy interfejsu do wyświetlania zadania
void MainWindow::szouer()
{
    ui->tekst->show();
    ui->Submit->show();
}

//funkcja wyświetlająca wyniki też niezoptymalizowana bo powinien byc qtimer wystartowany jako single shot a jest jako wywołanie nieskończone
int proba = 0;
void MainWindow::wyniker()
{
    if(proba==0)
    {
    QString wynik;
    QFile file("wynik.txt");
    if(!file.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        ui->blad->setText("Odczytywanie wyników nie powiodło się.");
        ui->tekst->hide();
    }
    else
    {
        QTextStream in(&file);
           while (!in.atEnd()) {
               QString line = in.readLine();
               wynik += line+"<br/>";
           }
        file.close();
    }


    ui->tekst->setHtml(wynik);
    QProcess process;
    process.startDetached("/bin/bash", QStringList()<< "-c" << " rm -rf wynik.txt");
    ui->Submit->close();
    ui->exit->show();
    proba=1;
}
}


//funkcja aktywująca nowe zadanie po wybraniu z listy
void MainWindow::aktywadozadanka()
{
    chowacz();
    task_reader();
    szouer();
    suiczer = true;
}

//obsługa listy z zadaniami
void MainWindow::on_comboBox_activated(const QString &arg1)
{
    QString tmp = arg1;
    if(ui->comboBox->currentText()=="Administracja systemami plików")
    {
        ui->opisy_zadanek->setCurrentIndex(0);
    }
    else if(ui->comboBox->currentText()=="Podstawy zarządzania użytkownikiem, grupami i uprawnieniami")
    {
        ui->opisy_zadanek->setCurrentIndex(1);
    }
    else if(ui->comboBox->currentText()=="Administracja uwierzytelnieniem i bezpieczeństwem użytkowników i grup")
    {
       ui->opisy_zadanek->setCurrentIndex(2);
    }
    else if(ui->comboBox->currentText()=="Praca z poleceniami konsoli")
    {
        ui->opisy_zadanek->setCurrentIndex(3);
    }
    else if(ui->comboBox->currentText()=="Zarządzanie oprogramowaniem")
    {
        ui->opisy_zadanek->setCurrentIndex(4);
    }
    else if(ui->comboBox->currentText()=="Start systemu i poziomy pracy")
    {
        ui->opisy_zadanek->setCurrentIndex(5);
    }
    else if(ui->comboBox->currentText()=="Administrowanie procesami")
    {
        ui->opisy_zadanek->setCurrentIndex(6);
    }
    else if(ui->comboBox->currentText()=="Konfiguracja sieci")
    {
        ui->opisy_zadanek->setCurrentIndex(7);
    }
    else if(ui->comboBox->currentText()=="Zarządzanie sprzętem")
    {
        ui->opisy_zadanek->setCurrentIndex(8);
    }
    else if(ui->comboBox->currentText()=="Zdalna administracja")
    {
        ui->opisy_zadanek->setCurrentIndex(9);
    }
    else if(ui->comboBox->currentText()=="Monitorowanie systemu")
    {
        ui->opisy_zadanek->setCurrentIndex(10);
    }
    else if(ui->comboBox->currentText()=="Planowanie zadań i zabezpieczanie danych")
    {
        ui->opisy_zadanek->setCurrentIndex(11);
    }
    else if(ui->comboBox->currentText()=="Zabezpieczanie danych")
    {
        ui->opisy_zadanek->setCurrentIndex(12);
    }
}

//funkcje aktywowane po kliknięciu rozpocznij
void MainWindow::on_Rzadanie_3_clicked()
{
    zadanko = "zadanie_3";
    aktywadozadanka();
}
void MainWindow::on_Rzadanie_4_clicked()
{
    zadanko = "zadanie_4";
    aktywadozadanka();
}
void MainWindow::on_Rzadanie_5_clicked()
{
    zadanko = "zadanie_5";
    aktywadozadanka();
}
void MainWindow::on_Rzadanie_6_clicked()
{
    zadanko = "zadanie_6";
    aktywadozadanka();
}
void MainWindow::on_Rzadanie_7_clicked()
{
    zadanko = "zadanie_7";
    aktywadozadanka();
}
void MainWindow::on_Rzadanie_8_clicked()
{
    zadanko = "zadanie_8";
    aktywadozadanka();
}
void MainWindow::on_Rzadanie_9_clicked()
{
    zadanko = "zadanie_9";
    aktywadozadanka();
}
void MainWindow::on_Rzadanie_10_clicked()
{
    zadanko = "zadanie_10";
    aktywadozadanka();
}
void MainWindow::on_Rzadanie_11_clicked()
{
    zadanko = "zadanie_11";
    aktywadozadanka();
}
void MainWindow::on_Rzadanie_12_clicked()
{
    zadanko = "zadanie_12";
    aktywadozadanka();
}
void MainWindow::on_Rzadanie_13_clicked()
{
    zadanko = "zadanie_13";
    aktywadozadanka();
}
void MainWindow::on_Rzadanie_14_clicked()
{
    zadanko = "zadanie_14";
    aktywadozadanka();
}
void MainWindow::on_Rzadanie_15_clicked()
{
    zadanko = "zadanie_15";
    aktywadozadanka();
}

//funkcja wyświetlająca okienko o autorach po kliknięciu guzika info
void MainWindow::on_info_clicked()
{
   onstart();
}

//weryfikacja pewności przy zamykaniu
void MainWindow::closeEvent(QCloseEvent *event)
{
    QMessageBox::StandardButton reply;
    reply = QMessageBox::question(this, "Jesteś pewien", "Czy na pewno chcesz zamknąć program?", QMessageBox::Yes | QMessageBox::No);
    if(reply == QMessageBox::Yes)
    {
        event->accept();
    }
    else
    {
        event->ignore();
    }
}
