#ifndef CITYCODEUTILS_H
#define CITYCODEUTILS_H

#include<QString>
#include<QMap>
#include <QFile>
#include <QJsonArray>
#include <QJsonDocument>

class citycodeutils
{
public:
    citycodeutils();

    QMap<QString,QString> cityMap;
    QString getCityCodeFromName(QString cityName);
    void initCityMap();
};

#endif // CITYCODEUTILS_H
