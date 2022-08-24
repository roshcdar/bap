#include "../include/QEndtimer1.hpp"
#include "../include/NotPacketException.hpp"

QEndtimer1::QEndtimer1(const QEndtimer & qEndtimer, const TEndtimer & tEndtimer,
                             const DEndtimerstartloc & dEndtimerstartloc)
: QEndtimerIf(qEndtimer), tEndtimer(tEndtimer), dEndtimerstartloc(dEndtimerstartloc)
{
    Check();
}

QEndtimer1::QEndtimer1(const nlohmann::json & j)
: QEndtimerIf(j), tEndtimer(j), dEndtimerstartloc(j)
{
    if (j.size() != 3)
        throw NotPacketException();
    Check();
}

std::unique_ptr<QEndtimerIf> QEndtimer1::Clone() const {
    return std::make_unique<QEndtimer1>(*this);
}

nlohmann::json QEndtimer1::ToJson() const {
    nlohmann::json j = QEndtimerIf::ToJson();
    tEndtimer.ToJson(j);
    dEndtimerstartloc.ToJson(j);
    return j;
}

std::uint8_t QEndtimer1::CountLength() const {
    return 26;
}

void  QEndtimer1::Print ( std::ostream & os ) const {
    QEndtimerIf::Print(os);
    os << tEndtimer;
    os << dEndtimerstartloc;
}

const TEndtimer & QEndtimer1::GetTEndtimer() const {
    return tEndtimer;
}

const DEndtimerstartloc & QEndtimer1::GetDEndtimerstartloc() const {
    return dEndtimerstartloc;
}

void QEndtimer1::Check() const {
    if (!qEndtimer.GetValue())
        throw NotPacketException();
}