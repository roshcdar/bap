#include "../include/TrackPacket15.hpp"
#include <packets_230_340_360/NotPacketException.hpp>

TrackPacket15::TrackPacket15(const NidPacket & nidPacket, const QDir & qDir,  const LPacket & lPacket, const QScale & qScale, const VLoa & vLoa, const TLoa & tLoa,
                             const NIter & nIter, const std::vector<LSection> & lSections, const std::vector<copy_ptr<const QSectiontimerIf>> & qSectiontimerIfs,
                             const LEndsection & lEndsection, const copy_ptr<const QSectiontimerIf> & qSectiontimerIf, const copy_ptr<const QEndtimerIf> & qEndtimerIf,
                             const copy_ptr<const QDangerpointIf> & qDangerpointIf, const copy_ptr<const QOverlapIf> & qOverlapIf)
: TrackPacket15Base(nidPacket, qDir, lPacket, qScale, nIter, lSections, qSectiontimerIfs, lEndsection,
                    qSectiontimerIf, qEndtimerIf, qDangerpointIf, qOverlapIf), vLoa(vLoa), tLoa(tLoa) {
    Check();
}

TrackPacket15::TrackPacket15(const nlohmann::json &j) : TrackPacket15Base(j), vLoa(j), tLoa(j) {
    if (j.size() != 14)
        throw NotPacketException();
    Check();
}

nlohmann::json TrackPacket15::ToJson() const {
    nlohmann::json j = TrackPacket15Base::ToJson();
    vLoa.ToJson(j);
    tLoa.ToJson(j);
    return j;
}

const VLoa & TrackPacket15::GetVLoa() const {
    return vLoa;
}

const TLoa & TrackPacket15::GetTLoa() const {
    return tLoa;
}

void TrackPacket15::PrintVersionSpecific(std::ostream & os) const {
    os << vLoa;
    os << tLoa;
}

void TrackPacket15::Check() const {
    std::uint16_t length = 62 + nIter.GetValue() * 15 + qSectiontimerIf -> CountLength() + qEndtimerIf -> CountLength() + qDangerpointIf -> CountLength() + qOverlapIf -> CountLength();
    for (const auto & timer : qSectiontimerIfs)
        length += timer -> CountLength();
    if (lPacket.GetValue() != length)
        throw NotPacketException();
}


