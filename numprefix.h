#ifndef NUMPREFIX_H
#define NUMPREFIX_H

#include <QObject>

class NumPrefix : public QObject
{
    Q_OBJECT
public:
    NumPrefix();

public slots:
    QString getPrefix(QString tableName);

};

#endif // NUMPREFIX_H
