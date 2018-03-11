#ifndef CPP_JSON_LIST_CONVERTOR_H
#define CPP_JSON_LIST_CONVERTOR_H

#include <QJsonValue>
#include <QList>
#include "Domain.h"

template <class T>
class JsonListConvertor
{
public:
    JsonListConvertor();

    QList<T *> toList(const QJsonValue jsonList);
    QList<T> toValueList(const QJsonValue jsonList);

    QJsonValue toJson(QList<T *> list);
    QJsonValue toJson(QList<T> list);
};

#include "JsonListConvertorImpl.h"

#endif // CPP_JSON_LIST_CONVERTOR_H
