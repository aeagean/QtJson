#ifndef CPP_DOMAIN_H
#define CPP_DOMAIN_H

#include <QJsonObject>

class Domain
{
public:
    Domain() {}

    virtual void fromJson(const QJsonObject data) = 0;
    virtual QJsonObject toJson() = 0;
};

#endif // CPP_DOMAIN_H
