#ifndef DATABASEDIRECTION_H
#define DATABASEDIRECTION_H

#include <QtSql>

class DataBaseDirection : public QObject
{
    Q_OBJECT
public:
    DataBaseDirection();

public:
    bool connectDataBase();

};
#endif // DATABASEDIRECTION_H
