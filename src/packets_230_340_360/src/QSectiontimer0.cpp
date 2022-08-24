#include "../include/QSectiontimer0.hpp"
#include "../include/NotPacketException.hpp"

QSectiontimer0::QSectiontimer0(const QSectiontimer & qSectiontimer) : QSectiontimerIf(qSectiontimer) {
    Check();
}

QSectiontimer0::QSectiontimer0(const nlohmann::json & j) : QSectiontimerIf(j) {
    if (j.size() != 1)
        throw NotPacketException();
    Check();
}

std::unique_ptr<QSectiontimerIf> QSectiontimer0::Clone() const {
    return std::make_unique<QSectiontimer0>(*this);
}

void QSectiontimer0::Check() const {
    if (qSectiontimer.GetValue())
        throw NotPacketException();
}