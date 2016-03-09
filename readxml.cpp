#include "readxml.h"
#include <QtCore>

#include <QDebug>

ReadXML::ReadXML(QObject *parent) : QObject(parent)
{
    QTimer *timer = new QTimer(this);
    connect(timer,SIGNAL(timeout()),this,SLOT(updateTime()));
    timer->start(1000);

    QSettings settings("AO_Batrakov_Inc.", "ServerXML");
    prefix = settings.value("numprefix").toString();
    if(prefix.isNull()){
        settings.setValue("numprefix", "SRV");
        prefix = "SRV";
    }
    QSettings iniSettings("ServerXML.ini",QSettings::IniFormat);
    iniSettings.beginGroup("/Nodes");
    QStringList keys = iniSettings.allKeys();
    for(int i = 0; i < keys.size(); ++i){

    }
}

void ReadXML::updateTime()
{
    QFile file;

    file.setFileName("d:/apache/QtProject/ServerEmployee/Change/Obmen.arh");
    if(file.exists()){
        qDebug()<<"Ok";
        file.open(QIODevice::ReadOnly);
        QByteArray byte = file.readAll();
        file.close();
        QByteArray unCompress = qUncompress(byte);
        QFile compressFile;
        compressFile.setFileName("./Obmen.xml");
        compressFile.open(QIODevice::WriteOnly);
        compressFile.write(unCompress);
        compressFile.close();
    }
}
