#include <QtGui>
#include <cstdlib>
#include "mainwindow.h"
#include "databasedirection.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QApplication::setQuitOnLastWindowClosed(false);

    DataBaseDirection dir;
    dir.connectDataBase();

    MainWindow w;
    w.startProcedure();
    
    return a.exec();
}
