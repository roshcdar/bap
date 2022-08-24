#include "../include/QEndtimerIf.hpp"

QEndtimerIf::QEndtimerIf(const QEndtimer & qEndtimer) : qEndtimer(qEndtimer) {}

QEndtimerIf::QEndtimerIf(const nlohmann::json & j) : qEndtimer(j) {}

nlohmann::json QEndtimerIf::ToJson() const {
    return qEndtimer.ToJson();
}

void  QEndtimerIf::Print ( std::ostream & os ) const {
    os << qEndtimer;
}

std::ostream & operator << ( std::ostream & os, const QEndtimerIf & qEndtimerIf) {
    qEndtimerIf.Print(os);
    return os;
}

std::uint8_t QEndtimerIf::CountLength() const {
    return 1;
}

const QEndtimer & QEndtimerIf::GetQEndtimer() const {
    return qEndtimer;
}