#include <QtGui>
#include <cstdlib>
#include "databasedirection.h"
#include "update.h"
#include "readxml.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QApplication::setQuitOnLastWindowClosed(false);

    Update update;
    update.iniVersion();

    DataBaseDirection dir;
    dir.connectDataBase();
    
    ReadXML readXML;

    return a.exec();
}
