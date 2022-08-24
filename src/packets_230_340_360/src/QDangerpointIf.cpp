#include "../include/QDangerpointIf.hpp"

QDangerpointIf::QDangerpointIf(const QDangerpoint & qDangerpoint) : qDangerpoint(qDangerpoint) {}

QDangerpointIf::QDangerpointIf(const nlohmann::json & j) : qDangerpoint(j) {}

nlohmann::json QDangerpointIf::ToJson() const {
    return qDangerpoint.ToJson();
}

void  QDangerpointIf::Print( std::ostream & os ) const {
    os << qDangerpoint;
}

std::ostream & operator << ( std::ostream & os, const QDangerpointIf & qDangerPointIf) {
    qDangerPointIf.Print(os);
    return os;
}

std::uint8_t QDangerpointIf::CountLength() const {
    return 1;
}

const QDangerpoint & QDangerpointIf::GetQDangerpoint() const {
    return qDangerpoint;
}