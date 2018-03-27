#include "QtJson.h"
#include <QJsonDocument>
#include <QFile>

QtJson::QtJson()
{
}

QJsonObject QtJson::readFileToJson(QString fileName)
{
    QFile file(fileName);
    if (!file.open(QIODevice::ReadOnly)) {
        qDebug("fileName: [%s] open fail!", fileName.toStdString().data());
        return QJsonObject();
    }
    QByteArray data = file.readAll();

    QJsonDocument doc(QJsonDocument::fromJson(data));

    file.close();
    return doc.object();
}

bool QtJson::writeJsonToFile(QJsonObject jsonObject, QString fileName)
{
    QFile file(fileName);
    if (!file.open(QIODevice::WriteOnly)) {
        qDebug("fileName: [%s] open fail!", fileName.toStdString().data());
        return false;
    }

    QJsonDocument doc(jsonObject);
    file.write(doc.toJson());

    file.close();
    return true;
}
