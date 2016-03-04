#ifndef DATABASEDIRECTION_H
#define DATABASEDIRECTION_H

#include <QtSql>
#include <QtWidgets/QtWidgets>

class DataBaseDirection : public QDialog
{
    Q_OBJECT
public:
    DataBaseDirection();

public:
    void createDataBase(QString base);
    bool connectDataBase();

};
#endif // DATABASEDIRECTION_H
