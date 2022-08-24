#include "../include/QDangerpoint1.hpp"
#include "../include/NotPacketException.hpp"

QDangerpoint1::QDangerpoint1(const QDangerpoint & qDangerpoint, const DDp & dDp, const VReleasedp & vReleasedp)
: QDangerpointIf(qDangerpoint), dDp(dDp), vReleasedp(vReleasedp) {
    Check();
}

QDangerpoint1::QDangerpoint1(const nlohmann::json & j) : QDangerpointIf(j), dDp(j), vReleasedp(j) {
    if (j.size() != 3)
        throw NotPacketException();
    Check();
}

std::unique_ptr<QDangerpointIf> QDangerpoint1::Clone() const {
    return std::make_unique<QDangerpoint1>(*this);
}

nlohmann::json QDangerpoint1::ToJson() const {
    nlohmann::json j = QDangerpointIf::ToJson();
    dDp.ToJson(j);
    vReleasedp.ToJson(j);
    return j;
}

std::uint8_t QDangerpoint1::CountLength() const {
    return 23;
}

void  QDangerpoint1::Print (std::ostream & os ) const {
    QDangerpointIf::Print(os);
    os << dDp;
    os << vReleasedp;
}

const DDp & QDangerpoint1::GetDDp() const {
    return dDp;
}

const VReleasedp & QDangerpoint1::GetVReleasedp() const {
    return vReleasedp;
}

void QDangerpoint1::Check() const {
    if (!qDangerpoint.GetValue())
        throw NotPacketException();
}