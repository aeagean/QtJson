#ifndef QTJSON_H
#define QTJSON_H

#include <QJsonObject>

class QtJson
{
public:
    QtJson();

    static QJsonObject readFileToJson(QString fileName);
    static bool writeJsonToFile(QJsonObject jsonObject, QString fileName);
};

#endif // QTJSON_H
