#include "../include/TrackPacket40.hpp"
#include <packets_230_340_360/NotPacketException.hpp>

TrackPacket40::TrackPacket40(const NidPacket & nidPacket, const QDir & qDir, const LPacket & lPacket, const QScale & qScale,
                             const DCurrent & dCurrent, const MCurrent & mCurrent)
: PacketQDirQScale(nidPacket, qDir, lPacket, qScale), dCurrent(dCurrent), mCurrent(mCurrent)
{
    Check();
}

TrackPacket40::TrackPacket40(const nlohmann::json & j)
: PacketQDirQScale(j), dCurrent(j), mCurrent(j)
{
    if (j.size() != 6)
        throw NotPacketException();
    Check();
}

nlohmann::json TrackPacket40::ToJson() const {
    nlohmann::json j = PacketQDirQScale::ToJson();
    dCurrent.ToJson(j);
    mCurrent.ToJson(j);
    return j;
}

const DCurrent & TrackPacket40::GetDCurrent() const {
    return dCurrent;
}

const MCurrent & TrackPacket40::GetMCurrent() const {
    return mCurrent;
}

void TrackPacket40::Print (std::ostream & os) const {
    PacketQDirQScale::Print(os);
    os << dCurrent << mCurrent;
}

void TrackPacket40::Check() const {
    if (!(nidPacket.GetValue() == 40 && lPacket.GetValue() == 50))
        throw NotPacketException();
}

void TrackPacket40::PrintPacketName (std::ostream & os) const {
    os << "Track Condition Change of allowed current consumption\n";
}