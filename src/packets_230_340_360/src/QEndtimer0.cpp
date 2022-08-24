#include "../include/QEndtimer0.hpp"
#include "../include/NotPacketException.hpp"

QEndtimer0::QEndtimer0(const QEndtimer & qEndtimer) : QEndtimerIf(qEndtimer) {
    Check();
}

QEndtimer0::QEndtimer0(const nlohmann::json & j) : QEndtimerIf(j) {
    if (j.size() != 1)
        throw NotPacketException();
    Check();
}

std::unique_ptr<QEndtimerIf> QEndtimer0::Clone() const {
    return std::make_unique<QEndtimer0>(*this);
}

void QEndtimer0::Check() const {
    if (qEndtimer.GetValue())
        throw NotPacketException();
}