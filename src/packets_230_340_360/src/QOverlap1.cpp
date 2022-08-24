#include "../include/QOverlap1.hpp"
#include "../include/NotPacketException.hpp"

QOverlap1::QOverlap1(const QOverlap & qOverlap, const DStartol & dStartol, const TOl & tOl,
                           const DOl & dOl, const VReleaseol & vReleaseol)
: QOverlapIf(qOverlap), dStartol(dStartol), tOl(tOl), dOl(dOl), vReleaseol(vReleaseol)
{
    Check();
}

QOverlap1::QOverlap1(const nlohmann::json & j)
: QOverlapIf(j), dStartol(j), tOl(j), dOl(j), vReleaseol(j)
{
    if (j.size() != 5)
        throw NotPacketException();
    Check();
}

std::unique_ptr<QOverlapIf> QOverlap1::Clone() const {
    return std::make_unique<QOverlap1>(*this);
}

nlohmann::json QOverlap1::ToJson() const {
    nlohmann::json j = QOverlapIf::ToJson();
    dStartol.ToJson(j);
    tOl.ToJson(j);
    dOl.ToJson(j);
    vReleaseol.ToJson(j);
    return j;
}

std::uint8_t QOverlap1::CountLength() const {
    return 48;
}

void  QOverlap1::Print ( std::ostream & os ) const {
    QOverlapIf::Print(os);
    os << dStartol;
    os << tOl;
    os << dOl;
    os << vReleaseol;
}

const DStartol & QOverlap1::GetDStartol() const {
    return dStartol;
}

const TOl & QOverlap1::GetTOl() const {
    return tOl;
}

const DOl & QOverlap1::GetDOl() const {
    return dOl;
}

const VReleaseol & QOverlap1::GetVReleaseol() const {
    return vReleaseol;
}

void QOverlap1::Check() const {
    if (!qOverlap.GetValue())
        throw NotPacketException();
}