#include "citycodeutils.h"

citycodeutils::citycodeutils()
{

}

QString citycodeutils::getCityCodeFromName(QString cityName)
{
    if(cityMap.isEmpty())
    {
        initCityMap();
    }
    return cityMap[cityName];
}

void citycodeutils::initCityMap()
{
    QFile file(":/citycode.json");
    file.open(QIODevice::ReadOnly);
    QByteArray rawData = file.readAll();
    file.close();

    QJsonDocument jsonDoc = QJsonDocument::fromJson(rawData);
    if(jsonDoc.isArray())
    {
        QJsonArray citys = jsonDoc.array();
        for(QJsonValue value : citys)
        {
            if(value.isObject())
            {
                QString cityName = value["city_name"].toString();
                QString cityCode = value["city_code"].toString();
                cityMap .insert(cityName,cityCode);
            }
        }
    }
}
