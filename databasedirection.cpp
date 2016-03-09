#include "databasedirection.h"

DataBaseDirection::DataBaseDirection()
{
}

bool DataBaseDirection::connectDataBase()
{
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("CE_SQLite.dat");
    if (!db.open()) {
        return false;
    }else{
        qDebug()<<"SQLite Ok";
        return true;
    }
}
