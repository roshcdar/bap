#include "../include/TrackPacket139.hpp"
#include "../include/NotPacketException.hpp"

TrackPacket139::TrackPacket139(const NidPacket & nidPacket, const QDir & qDir, const LPacket & lPacket, const QScale & qScale,
                                                                 const DReverse & dReverse, const VReverse & vReverse)
: PacketQDirQScale(nidPacket, qDir, lPacket, qScale), dReverse(dReverse), vReverse(vReverse)
{
    Check();
}

TrackPacket139::TrackPacket139(const nlohmann::json & j)
: PacketQDirQScale(j), dReverse(j), vReverse(j)
{
    if (j.size() != 6)
        throw NotPacketException();
    Check();
}

nlohmann::json TrackPacket139::ToJson() const {
    nlohmann::json j = PacketQDirQScale::ToJson();
    dReverse.ToJson(j);
    vReverse.ToJson(j);
    return j;
}

const DReverse & TrackPacket139::GetDReverse() const {
    return dReverse;
}

const VReverse & TrackPacket139::GetVReverse() const {
    return vReverse;
}

void TrackPacket139::Print (std::ostream & os) const {
    PacketQDirQScale::Print(os);
    os << dReverse << vReverse;
}

void TrackPacket139::Check() const {
    if (!(nidPacket.GetValue() == 139 && lPacket.GetValue() == 47))
        throw NotPacketException();
}

void TrackPacket139::PrintPacketName (std::ostream & os) const {
    os << "Reversing supervision information\n";
}