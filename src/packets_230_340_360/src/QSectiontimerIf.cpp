#include "../include/QSectiontimerIf.hpp"

QSectiontimerIf::QSectiontimerIf(const QSectiontimer & qSectiontimer) : qSectiontimer(qSectiontimer) {}

QSectiontimerIf::QSectiontimerIf(const nlohmann::json & j) : qSectiontimer(j) {}

nlohmann::json QSectiontimerIf::ToJson() const {
    return qSectiontimer.ToJson();
}

void  QSectiontimerIf::Print ( std::ostream & os ) const {
    os << qSectiontimer;
}

std::ostream & operator << ( std::ostream & os, const QSectiontimerIf & qSectiontimerIf) {
    qSectiontimerIf.Print(os);
    return os;
}

std::uint8_t QSectiontimerIf::CountLength() const {
    return 1;
}

const QSectiontimer & QSectiontimerIf::GetQSectiontimer() const {
    return qSectiontimer;
}