#include "../include/QSectiontimer1.hpp"
#include "../include/NotPacketException.hpp"

QSectiontimer1::QSectiontimer1(const QSectiontimer & qSectiontimer, const TSectiontimer & tSectiontimer,
                                     const DSectiontimerstoploc & dSectiontimerstoploc)
 : QSectiontimerIf(qSectiontimer), tSectiontimer(tSectiontimer), dSectiontimerstoploc(dSectiontimerstoploc)
 {
    Check();
 }

QSectiontimer1::QSectiontimer1(const nlohmann::json & j)
: QSectiontimerIf(j), tSectiontimer(j), dSectiontimerstoploc(j) {
    if (j.size() != 3)
        throw NotPacketException();
    Check();
}

std::unique_ptr<QSectiontimerIf> QSectiontimer1::Clone() const {
    return std::make_unique<QSectiontimer1>(*this);
}

nlohmann::json QSectiontimer1::ToJson() const {
    nlohmann::json j = QSectiontimerIf::ToJson();
    tSectiontimer.ToJson(j);
    dSectiontimerstoploc.ToJson(j);
    return j;
}

std::uint8_t QSectiontimer1::CountLength() const {
    return 26;
}

void  QSectiontimer1::Print (std::ostream & os ) const {
    QSectiontimerIf::Print(os);
    os << tSectiontimer;
    os << dSectiontimerstoploc;
}

const TSectiontimer & QSectiontimer1::GetTSectiontimer() const {
    return tSectiontimer;
}

const DSectiontimerstoploc & QSectiontimer1::GetDSectiontimerstoploc() const {
    return dSectiontimerstoploc;
}

void QSectiontimer1::Check() const {
    if (!qSectiontimer.GetValue())
        throw NotPacketException();
}