#include "../include/TrackPacket45.hpp"
#include "../include/NotPacketException.hpp"

TrackPacket45::TrackPacket45(const NidPacket & nidPacket, const QDir & qDir, const LPacket & lPacket, const NidMn & nidMn)
: PacketQDir(nidPacket, qDir, lPacket), nidMn(nidMn) {
   Check();
}

TrackPacket45::TrackPacket45(const nlohmann::json & j) : PacketQDir(j), nidMn(j) {
    if (j.size() != 4)
        throw NotPacketException();
    Check();
}

nlohmann::json TrackPacket45::ToJson() const {
    nlohmann::json j = PacketQDir::ToJson();
    nidMn.ToJson(j);
    return j;
}

void TrackPacket45::Print (std::ostream & os) const {
    PacketQDir::Print(os);
    os << nidMn;
}

const NidMn & TrackPacket45::GetNidMn() const {
    return nidMn;
}

void TrackPacket45::Check() const {
    if (!(nidPacket.GetValue() == 45 && lPacket.GetValue() == 47))
        throw NotPacketException();
}

void TrackPacket45::PrintPacketName (std::ostream & os) const {
    os << "Radio Network registration\n";
}