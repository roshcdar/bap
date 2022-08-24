#include "../include/TrackPacket15.hpp"
#include <packets_230_340_360/NotPacketException.hpp>

TrackPacket15::TrackPacket15(const NidPacket & nidPacket, const QDir & qDir,  const LPacket & lPacket, const QScale & qScale, const VEma & vEma, const TEma & tEma,
                             const NIter & nIter, const std::vector<LSection> & lSections, const std::vector<copy_ptr<const QSectiontimerIf>> & qSectiontimerIfs,
                             const LEndsection & lEndsection, const copy_ptr<const QSectiontimerIf> & qSectiontimerIf, const copy_ptr<const QEndtimerIf> & qEndtimerIf,
                             const copy_ptr<const QDangerpointIf> & qDangerpointIf, const copy_ptr<const QOverlapIf> & qOverlapIf)
: TrackPacket15Base(nidPacket, qDir, lPacket, qScale, nIter, lSections, qSectiontimerIfs, lEndsection,
                    qSectiontimerIf, qEndtimerIf, qDangerpointIf, qOverlapIf), vEma(vEma), tEma(tEma) {
    Check();
}

TrackPacket15::TrackPacket15(const nlohmann::json &j) : TrackPacket15Base(j), vEma(j), tEma(j) {
    if (j.size() != 14)
        throw NotPacketException();
    Check();
}

nlohmann::json TrackPacket15::ToJson() const {
    nlohmann::json j = TrackPacket15Base::ToJson();
    vEma.ToJson(j);
    tEma.ToJson(j);
    return j;
}

const VEma & TrackPacket15::GetVEma() const {
    return vEma;
}

const TEma & TrackPacket15::GetTEma() const {
    return tEma;
}

void TrackPacket15::PrintVersionSpecific(std::ostream & os) const {
    os << vEma;
    os << tEma;
}

void TrackPacket15::Check() const {
    std::uint16_t length = 62 + nIter.GetValue() * 15 + qSectiontimerIf -> CountLength() + qEndtimerIf -> CountLength() + qDangerpointIf -> CountLength() + qOverlapIf -> CountLength();
    for (const auto & timer : qSectiontimerIfs)
        length += timer -> CountLength();
    if (lPacket.GetValue() != length)
        throw NotPacketException();
}


