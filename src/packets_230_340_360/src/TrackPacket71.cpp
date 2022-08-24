#include "../include/TrackPacket71.hpp"
#include "../include/NotPacketException.hpp"

TrackPacket71::TrackPacket71(const NidPacket & nidPacket, const QDir & qDir, const LPacket & lPacket, const QScale & qScale,
                             const DAdhesion & dAdhesion, const LAdhesion & lAdhesion, const MAdhesion & mAdhesion)
: PacketQDirQScale(nidPacket, qDir, lPacket, qScale), dAdhesion(dAdhesion), lAdhesion(lAdhesion), mAdhesion(mAdhesion)
{
    Check();
}

TrackPacket71::TrackPacket71(const nlohmann::json & j) : PacketQDirQScale(j), dAdhesion(j), lAdhesion(j), mAdhesion(j) {
    if (j.size() != 7)
        throw NotPacketException();
    Check();
}

nlohmann::json TrackPacket71::ToJson() const {
    nlohmann::json j = PacketQDirQScale::ToJson();
    dAdhesion.ToJson(j);
    lAdhesion.ToJson(j);
    mAdhesion.ToJson(j);
    return j;
}

const DAdhesion & TrackPacket71::GetDAdhesion() const {
    return dAdhesion;
}

const LAdhesion & TrackPacket71::GetLAdhesion() const {
    return lAdhesion;
}

const MAdhesion & TrackPacket71::GetMAdhesion() const {
    return mAdhesion;
}

void TrackPacket71::Print (std::ostream & os) const {
    PacketQDirQScale::Print(os);
    os << dAdhesion << lAdhesion << mAdhesion;
}

void TrackPacket71::Check() const {
    if (!(nidPacket.GetValue() == 71 && lPacket.GetValue() == 56))
        throw NotPacketException();
}

void TrackPacket71::PrintPacketName (std::ostream & os) const {
    os << "Adhesion factor\n";
}