/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionTest1;
    QAction *actionTest2;
    QAction *actionTest3;
    QAction *actionTest4;
    QAction *actionTest5;
    QAction *actionTest1_2;
    QWidget *centralWidget;
    QPushButton *Submit;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *InfoWpis;
    QTextBrowser *tekst;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *exit;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *blad;
    QProgressBar *progressBar;
    QStackedWidget *opisy_zadanek;
    QWidget *zadanie_3;
    QLabel *opis;
    QPushButton *Rzadanie_3;
    QPushButton *pushButton;
    QWidget *zadanie_4;
    QPushButton *Rzadanie_4;
    QLabel *opis_2;
    QWidget *zadanie_5;
    QPushButton *Rzadanie_5;
    QLabel *opis_3;
    QWidget *zadanie_6;
    QPushButton *Rzadanie_6;
    QLabel *opis_4;
    QWidget *zadanie_7;
    QPushButton *Rzadanie_7;
    QLabel *opis_5;
    QWidget *zadanie_8;
    QPushButton *Rzadanie_8;
    QLabel *opis_6;
    QWidget *zadanie_9;
    QPushButton *Rzadanie_9;
    QLabel *opis_7;
    QWidget *zadanie_10;
    QPushButton *Rzadanie_10;
    QLabel *opis_8;
    QWidget *zadanie_11;
    QPushButton *Rzadanie_11;
    QLabel *opis_9;
    QWidget *zadanie_12;
    QPushButton *Rzadanie_12;
    QLabel *opis_10;
    QWidget *zadanie_13;
    QPushButton *Rzadanie_13;
    QLabel *opis_11;
    QWidget *zadanie_14;
    QPushButton *Rzadanie_14;
    QLabel *opis_12;
    QWidget *zadanie_15;
    QPushButton *Rzadanie_15;
    QLabel *opis_13;
    QComboBox *comboBox;
    QPushButton *info;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(900, 600);
        MainWindow->setMinimumSize(QSize(900, 600));
        MainWindow->setMaximumSize(QSize(900, 600));
        MainWindow->setCursor(QCursor(Qt::ArrowCursor));
        QIcon icon;
        icon.addFile(QStringLiteral(":/icons/egzaminator-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        actionTest1 = new QAction(MainWindow);
        actionTest1->setObjectName(QStringLiteral("actionTest1"));
        actionTest1->setCheckable(false);
        actionTest2 = new QAction(MainWindow);
        actionTest2->setObjectName(QStringLiteral("actionTest2"));
        actionTest3 = new QAction(MainWindow);
        actionTest3->setObjectName(QStringLiteral("actionTest3"));
        actionTest4 = new QAction(MainWindow);
        actionTest4->setObjectName(QStringLiteral("actionTest4"));
        actionTest5 = new QAction(MainWindow);
        actionTest5->setObjectName(QStringLiteral("actionTest5"));
        actionTest1_2 = new QAction(MainWindow);
        actionTest1_2->setObjectName(QStringLiteral("actionTest1_2"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        Submit = new QPushButton(centralWidget);
        Submit->setObjectName(QStringLiteral("Submit"));
        Submit->setEnabled(true);
        Submit->setGeometry(QRect(750, 530, 131, 23));
        Submit->setFlat(false);
        horizontalLayoutWidget = new QWidget(centralWidget);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(10, 10, 871, 24));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        InfoWpis = new QLabel(horizontalLayoutWidget);
        InfoWpis->setObjectName(QStringLiteral("InfoWpis"));

        horizontalLayout->addWidget(InfoWpis);

        tekst = new QTextBrowser(centralWidget);
        tekst->setObjectName(QStringLiteral("tekst"));
        tekst->setGeometry(QRect(10, 60, 871, 411));
        QFont font;
        font.setPointSize(10);
        tekst->setFont(font);
        horizontalLayoutWidget_2 = new QWidget(centralWidget);
        horizontalLayoutWidget_2->setObjectName(QStringLiteral("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(10, 480, 691, 31));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        exit = new QPushButton(centralWidget);
        exit->setObjectName(QStringLiteral("exit"));
        exit->setGeometry(QRect(750, 530, 131, 23));
        verticalLayoutWidget = new QWidget(centralWidget);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(10, 510, 691, 31));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        blad = new QLabel(verticalLayoutWidget);
        blad->setObjectName(QStringLiteral("blad"));

        verticalLayout->addWidget(blad);

        progressBar = new QProgressBar(centralWidget);
        progressBar->setObjectName(QStringLiteral("progressBar"));
        progressBar->setGeometry(QRect(10, 540, 691, 23));
        progressBar->setValue(1);
        opisy_zadanek = new QStackedWidget(centralWidget);
        opisy_zadanek->setObjectName(QStringLiteral("opisy_zadanek"));
        opisy_zadanek->setGeometry(QRect(400, 40, 481, 521));
        zadanie_3 = new QWidget();
        zadanie_3->setObjectName(QStringLiteral("zadanie_3"));
        opis = new QLabel(zadanie_3);
        opis->setObjectName(QStringLiteral("opis"));
        opis->setGeometry(QRect(0, 0, 511, 31));
        Rzadanie_3 = new QPushButton(zadanie_3);
        Rzadanie_3->setObjectName(QStringLiteral("Rzadanie_3"));
        Rzadanie_3->setGeometry(QRect(354, 480, 121, 23));
        pushButton = new QPushButton(zadanie_3);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(350, 460, 16, 16));
        pushButton->setFlat(true);
        opisy_zadanek->addWidget(zadanie_3);
        zadanie_4 = new QWidget();
        zadanie_4->setObjectName(QStringLiteral("zadanie_4"));
        Rzadanie_4 = new QPushButton(zadanie_4);
        Rzadanie_4->setObjectName(QStringLiteral("Rzadanie_4"));
        Rzadanie_4->setGeometry(QRect(354, 480, 121, 23));
        opis_2 = new QLabel(zadanie_4);
        opis_2->setObjectName(QStringLiteral("opis_2"));
        opis_2->setGeometry(QRect(0, 0, 511, 31));
        opisy_zadanek->addWidget(zadanie_4);
        zadanie_5 = new QWidget();
        zadanie_5->setObjectName(QStringLiteral("zadanie_5"));
        Rzadanie_5 = new QPushButton(zadanie_5);
        Rzadanie_5->setObjectName(QStringLiteral("Rzadanie_5"));
        Rzadanie_5->setGeometry(QRect(354, 480, 121, 23));
        opis_3 = new QLabel(zadanie_5);
        opis_3->setObjectName(QStringLiteral("opis_3"));
        opis_3->setGeometry(QRect(0, 0, 511, 31));
        opisy_zadanek->addWidget(zadanie_5);
        zadanie_6 = new QWidget();
        zadanie_6->setObjectName(QStringLiteral("zadanie_6"));
        Rzadanie_6 = new QPushButton(zadanie_6);
        Rzadanie_6->setObjectName(QStringLiteral("Rzadanie_6"));
        Rzadanie_6->setGeometry(QRect(354, 480, 121, 23));
        opis_4 = new QLabel(zadanie_6);
        opis_4->setObjectName(QStringLiteral("opis_4"));
        opis_4->setGeometry(QRect(0, 0, 511, 31));
        opisy_zadanek->addWidget(zadanie_6);
        zadanie_7 = new QWidget();
        zadanie_7->setObjectName(QStringLiteral("zadanie_7"));
        Rzadanie_7 = new QPushButton(zadanie_7);
        Rzadanie_7->setObjectName(QStringLiteral("Rzadanie_7"));
        Rzadanie_7->setGeometry(QRect(354, 480, 121, 23));
        opis_5 = new QLabel(zadanie_7);
        opis_5->setObjectName(QStringLiteral("opis_5"));
        opis_5->setGeometry(QRect(0, 0, 511, 31));
        opisy_zadanek->addWidget(zadanie_7);
        zadanie_8 = new QWidget();
        zadanie_8->setObjectName(QStringLiteral("zadanie_8"));
        Rzadanie_8 = new QPushButton(zadanie_8);
        Rzadanie_8->setObjectName(QStringLiteral("Rzadanie_8"));
        Rzadanie_8->setGeometry(QRect(354, 480, 121, 23));
        opis_6 = new QLabel(zadanie_8);
        opis_6->setObjectName(QStringLiteral("opis_6"));
        opis_6->setGeometry(QRect(0, 0, 511, 31));
        opisy_zadanek->addWidget(zadanie_8);
        zadanie_9 = new QWidget();
        zadanie_9->setObjectName(QStringLiteral("zadanie_9"));
        Rzadanie_9 = new QPushButton(zadanie_9);
        Rzadanie_9->setObjectName(QStringLiteral("Rzadanie_9"));
        Rzadanie_9->setGeometry(QRect(354, 480, 121, 23));
        opis_7 = new QLabel(zadanie_9);
        opis_7->setObjectName(QStringLiteral("opis_7"));
        opis_7->setGeometry(QRect(0, 0, 511, 31));
        opisy_zadanek->addWidget(zadanie_9);
        zadanie_10 = new QWidget();
        zadanie_10->setObjectName(QStringLiteral("zadanie_10"));
        Rzadanie_10 = new QPushButton(zadanie_10);
        Rzadanie_10->setObjectName(QStringLiteral("Rzadanie_10"));
        Rzadanie_10->setGeometry(QRect(354, 480, 121, 23));
        opis_8 = new QLabel(zadanie_10);
        opis_8->setObjectName(QStringLiteral("opis_8"));
        opis_8->setGeometry(QRect(0, 0, 511, 31));
        opisy_zadanek->addWidget(zadanie_10);
        zadanie_11 = new QWidget();
        zadanie_11->setObjectName(QStringLiteral("zadanie_11"));
        Rzadanie_11 = new QPushButton(zadanie_11);
        Rzadanie_11->setObjectName(QStringLiteral("Rzadanie_11"));
        Rzadanie_11->setGeometry(QRect(354, 480, 121, 23));
        opis_9 = new QLabel(zadanie_11);
        opis_9->setObjectName(QStringLiteral("opis_9"));
        opis_9->setGeometry(QRect(0, 0, 511, 31));
        opisy_zadanek->addWidget(zadanie_11);
        zadanie_12 = new QWidget();
        zadanie_12->setObjectName(QStringLiteral("zadanie_12"));
        Rzadanie_12 = new QPushButton(zadanie_12);
        Rzadanie_12->setObjectName(QStringLiteral("Rzadanie_12"));
        Rzadanie_12->setGeometry(QRect(354, 480, 121, 23));
        opis_10 = new QLabel(zadanie_12);
        opis_10->setObjectName(QStringLiteral("opis_10"));
        opis_10->setGeometry(QRect(0, 0, 511, 31));
        opisy_zadanek->addWidget(zadanie_12);
        zadanie_13 = new QWidget();
        zadanie_13->setObjectName(QStringLiteral("zadanie_13"));
        Rzadanie_13 = new QPushButton(zadanie_13);
        Rzadanie_13->setObjectName(QStringLiteral("Rzadanie_13"));
        Rzadanie_13->setGeometry(QRect(354, 480, 121, 23));
        opis_11 = new QLabel(zadanie_13);
        opis_11->setObjectName(QStringLiteral("opis_11"));
        opis_11->setGeometry(QRect(0, 0, 511, 31));
        opisy_zadanek->addWidget(zadanie_13);
        zadanie_14 = new QWidget();
        zadanie_14->setObjectName(QStringLiteral("zadanie_14"));
        Rzadanie_14 = new QPushButton(zadanie_14);
        Rzadanie_14->setObjectName(QStringLiteral("Rzadanie_14"));
        Rzadanie_14->setGeometry(QRect(354, 480, 121, 23));
        opis_12 = new QLabel(zadanie_14);
        opis_12->setObjectName(QStringLiteral("opis_12"));
        opis_12->setGeometry(QRect(0, 0, 511, 31));
        opisy_zadanek->addWidget(zadanie_14);
        zadanie_15 = new QWidget();
        zadanie_15->setObjectName(QStringLiteral("zadanie_15"));
        Rzadanie_15 = new QPushButton(zadanie_15);
        Rzadanie_15->setObjectName(QStringLiteral("Rzadanie_15"));
        Rzadanie_15->setGeometry(QRect(354, 480, 121, 23));
        opis_13 = new QLabel(zadanie_15);
        opis_13->setObjectName(QStringLiteral("opis_13"));
        opis_13->setGeometry(QRect(0, 0, 511, 31));
        opisy_zadanek->addWidget(zadanie_15);
        comboBox = new QComboBox(centralWidget);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(10, 40, 381, 20));
        comboBox->setMaxVisibleItems(15);
        info = new QPushButton(centralWidget);
        info->setObjectName(QStringLiteral("info"));
        info->setGeometry(QRect(10, 570, 16, 16));
        MainWindow->setCentralWidget(centralWidget);
        tekst->raise();
        Submit->raise();
        horizontalLayoutWidget->raise();
        horizontalLayoutWidget_2->raise();
        exit->raise();
        verticalLayoutWidget->raise();
        progressBar->raise();
        opisy_zadanek->raise();
        comboBox->raise();
        info->raise();

        retranslateUi(MainWindow);
        QObject::connect(exit, SIGNAL(clicked()), MainWindow, SLOT(close()));

        Submit->setDefault(false);
        opisy_zadanek->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Linux edu practice", 0));
        actionTest1->setText(QApplication::translate("MainWindow", "Test1", 0));
        actionTest2->setText(QApplication::translate("MainWindow", "Test2", 0));
        actionTest3->setText(QApplication::translate("MainWindow", "Test3", 0));
        actionTest4->setText(QApplication::translate("MainWindow", "Test4", 0));
        actionTest5->setText(QApplication::translate("MainWindow", "Test5", 0));
        actionTest1_2->setText(QApplication::translate("MainWindow", "Test1", 0));
        Submit->setText(QApplication::translate("MainWindow", "Submit", 0));
        InfoWpis->setText(QApplication::translate("MainWindow", "Wybierz zadanie: ", 0));
        exit->setText(QApplication::translate("MainWindow", "Exit", 0));
        blad->setText(QString());
        opis->setText(QApplication::translate("MainWindow", "Tworzenie partycji, konserwacja systemu plik\303\263w", 0));
        Rzadanie_3->setText(QApplication::translate("MainWindow", "Rozpocznij", 0));
        pushButton->setText(QString());
        Rzadanie_4->setText(QApplication::translate("MainWindow", "Rozpocznij", 0));
        opis_2->setText(QApplication::translate("MainWindow", "Tworzenie u\305\274ytkownik\303\263w, grup, ustawienia domy\305\233lne", 0));
        Rzadanie_5->setText(QApplication::translate("MainWindow", "Rozpocznij", 0));
        opis_3->setText(QApplication::translate("MainWindow", "Zabezpieczenia i bezpiecze\305\204stwo u\305\274ytkownik\303\263w i systemu; uprawnienia do plik\303\263w", 0));
        Rzadanie_6->setText(QApplication::translate("MainWindow", "Rozpocznij", 0));
        opis_4->setText(QApplication::translate("MainWindow", "Polecenia konsoli, u\305\274ycie tekstowych narz\304\231dzi w wierszu polece\305\204, potoki i przekierowania", 0));
        Rzadanie_7->setText(QApplication::translate("MainWindow", "Rozpocznij", 0));
        opis_5->setText(QApplication::translate("MainWindow", "Instalacja, aktualizacja i usuwanie oprogramowania, repozytoria i pakiety", 0));
        Rzadanie_8->setText(QApplication::translate("MainWindow", "Rozpocznij", 0));
        opis_6->setText(QApplication::translate("MainWindow", "Konfiguracja programu \305\202aduj\304\205cego, konfiguracja us\305\202ug", 0));
        Rzadanie_9->setText(QApplication::translate("MainWindow", "Rozpocznij", 0));
        opis_7->setText(QApplication::translate("MainWindow", "Zarz\304\205dzanie procesami \342\200\223 priorytety, uruchamianie w tle, zatrzymywanie", 0));
        Rzadanie_10->setText(QApplication::translate("MainWindow", "Rozpocznij", 0));
        opis_8->setText(QApplication::translate("MainWindow", "Konfiguracja interfejs\303\263w sieciowych, regu\305\202 firewall, routingu", 0));
        Rzadanie_11->setText(QApplication::translate("MainWindow", "Rozpocznij", 0));
        opis_9->setText(QApplication::translate("MainWindow", "Konfiguracja sprz\304\231tu za pomoc\304\205 us\305\202ugi udev, modu\305\202y j\304\205dra", 0));
        Rzadanie_12->setText(QApplication::translate("MainWindow", "Rozpocznij", 0));
        opis_10->setText(QApplication::translate("MainWindow", "SSH, telnet", 0));
        Rzadanie_13->setText(QApplication::translate("MainWindow", "Rozpocznij", 0));
        opis_11->setText(QApplication::translate("MainWindow", "Konfiguracja log\303\263w systemowych \342\200\223 syslog-ng, logrotate", 0));
        Rzadanie_14->setText(QApplication::translate("MainWindow", "Rozpocznij", 0));
        opis_12->setText(QApplication::translate("MainWindow", "Planowanie zada\305\204 za pomoc\304\205 cron, at", 0));
        Rzadanie_15->setText(QApplication::translate("MainWindow", "Rozpocznij", 0));
        opis_13->setText(QApplication::translate("MainWindow", "Tworzenie kopii zapasowych katalog\303\263w \342\200\223 rsync, tar", 0));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Administracja systemami plik\303\263w", 0)
         << QApplication::translate("MainWindow", "Podstawy zarz\304\205dzania u\305\274ytkownikiem, grupami i uprawnieniami", 0)
         << QApplication::translate("MainWindow", "Administracja uwierzytelnieniem i bezpiecze\305\204stwem u\305\274ytkownik\303\263w i grup", 0)
         << QApplication::translate("MainWindow", "Praca z poleceniami konsoli", 0)
         << QApplication::translate("MainWindow", "Zarz\304\205dzanie oprogramowaniem", 0)
         << QApplication::translate("MainWindow", "Start systemu i poziomy pracy", 0)
         << QApplication::translate("MainWindow", "Administrowanie procesami", 0)
         << QApplication::translate("MainWindow", "Konfiguracja sieci", 0)
         << QApplication::translate("MainWindow", "Zarz\304\205dzanie sprz\304\231tem", 0)
         << QApplication::translate("MainWindow", "Zdalna administracja", 0)
         << QApplication::translate("MainWindow", "Monitorowanie systemu", 0)
         << QApplication::translate("MainWindow", "Planowanie zada\305\204 i zabezpieczanie danych", 0)
         << QApplication::translate("MainWindow", "Zabezpieczanie danych", 0)
        );
        info->setText(QApplication::translate("MainWindow", "i", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
