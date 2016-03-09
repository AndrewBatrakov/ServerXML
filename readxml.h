#ifndef READXML_H
#define READXML_H

#include <QObject>

class ReadXML : public QObject
{
    Q_OBJECT
public:
    explicit ReadXML(QObject *parent = 0);


signals:

public slots:
    void updateTime();

private:
    QString prefix;
};

#endif // READXML_H
