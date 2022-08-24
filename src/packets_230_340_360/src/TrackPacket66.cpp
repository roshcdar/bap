#include "../include/TrackPacket66.hpp"
#include "../include/NotPacketException.hpp"

TrackPacket66::TrackPacket66(const NidPacket & nidPacket, const QDir & qDir, const LPacket & lPacket, const NidTsr & nidTsr)
: PacketQDir(nidPacket, qDir, lPacket), nidTsr(nidTsr)
{
    Check();
}

TrackPacket66::TrackPacket66(const nlohmann::json & j)
: PacketQDir(j), nidTsr(j)
{
    if (j.size() != 4)
        throw NotPacketException();
    Check();
}

nlohmann::json TrackPacket66::ToJson() const {
    nlohmann::json j = PacketQDir::ToJson();
    nidTsr.ToJson(j);
    return j;
}

const NidTsr & TrackPacket66::GetNidTsr() const {
    return nidTsr;
}

void TrackPacket66::Print (std::ostream & os) const {
    PacketQDir::Print(os);
    os << nidTsr;
}

void TrackPacket66::Check() const {
    if (!(nidPacket.GetValue() == 66 && lPacket.GetValue() == 31))
        throw NotPacketException();
}

void TrackPacket66::PrintPacketName (std::ostream & os) const {
    os << "Temporary Speed Restriction Revocation\n";
}