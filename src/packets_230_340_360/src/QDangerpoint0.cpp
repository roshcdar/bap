#include "../include/QDangerpoint0.hpp"
#include "../include/NotPacketException.hpp"

QDangerpoint0::QDangerpoint0(const QDangerpoint & qDangerpoint) : QDangerpointIf(qDangerpoint) {
    Check();
}

QDangerpoint0::QDangerpoint0(const nlohmann::json & j) : QDangerpointIf(j) {
    if (j.size() != 1)
        throw NotPacketException();
    Check();
}

std::unique_ptr<QDangerpointIf> QDangerpoint0::Clone() const {
    return std::make_unique<QDangerpoint0>(*this);
}

void QDangerpoint0::Check() const {
    if (qDangerpoint.GetValue())
        throw NotPacketException();
}