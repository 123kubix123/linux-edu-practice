// Author Jakub Wolski kubixwol@gmail.com licence: GNU GPL v3.0
#include "mainwindow.h"


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
        w.onstart();
        w.show();
    return a.exec();
}

