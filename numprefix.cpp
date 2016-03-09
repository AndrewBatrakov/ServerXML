#include <QtSql>

#include "numprefix.h"

NumPrefix::NumPrefix()
{
}

QString NumPrefix::getPrefix(QString tableName)
{
    QString returnString;

    QSettings settings("AO_Batrakov_Inc.", "ServerXML");
    QString  prefName= settings.value("numprefix").toString();
    QSqlQuery query;
    QString stringQuery = "SELECT ";
    stringQuery += tableName;
    stringQuery += "id FROM ";
    stringQuery += tableName;
    stringQuery += " WHERE ";
    stringQuery += tableName;
    stringQuery += "id LIKE '%";
    stringQuery += prefName;
    stringQuery += "%' ";
    stringQuery += " ORDER BY ";
    stringQuery += tableName;
    stringQuery += "id";
    query.exec(stringQuery);
    QString numberTemp, numberLast;

    query.last();
    numberLast = query.value(0).toString();
    if(numberLast == ""){
        numberLast = "0";
    }
    numberTemp = numberLast.right(9);
    int numNum = numberTemp.toInt();
    ++numNum;
    QString nTemp = QString::number(numNum);
    int www;
    www = nTemp.count();
    for(int i = www; i < 9; ++i){
        returnString += "0";
    }
    returnString += QString::number(numNum);
    returnString = prefName + returnString;

    return returnString;
}
