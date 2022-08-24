#include "../include/TrackPacket57.hpp"
#include "../include/NotPacketException.hpp"

TrackPacket57::TrackPacket57(const NidPacket & nidPacket, const QDir & qDir, const LPacket & lPacket, const TMar & tMar, const TTimeoutrqst & tTimeoutrqst, const TCycrqst & tCycrqst)
: PacketQDir(nidPacket, qDir, lPacket), tMar(tMar), tTimeoutrqst(tTimeoutrqst), tCycrqst(tCycrqst) {
    Check();
}

TrackPacket57::TrackPacket57(const nlohmann::json & j) : PacketQDir(j), tMar(j), tTimeoutrqst(j), tCycrqst(j) {
    if (j.size() != 6)
        throw NotPacketException();
    Check();
}

nlohmann::json TrackPacket57::ToJson() const {
    nlohmann::json j = PacketQDir::ToJson();
    tMar.ToJson(j);
    tTimeoutrqst.ToJson(j);
    tCycrqst.ToJson(j);
    return j;
}

void TrackPacket57::Print (std::ostream & os) const {
    PacketQDir::Print(os);
    os << tMar << tTimeoutrqst << tCycrqst;
}

const TMar & TrackPacket57::GetTMar() const {
    return tMar;
}

const TTimeoutrqst & TrackPacket57::GetTTimeoutrqst() const {
    return tTimeoutrqst;
}

const TCycrqst & TrackPacket57::GetTCycrqst() const {
    return tCycrqst;
}

void TrackPacket57::Check() const {
    if (!(nidPacket.GetValue() == 57 && lPacket.GetValue() == 49))
        throw NotPacketException();
}

void TrackPacket57::PrintPacketName (std::ostream & os) const {
    os << "Movement Authority Request Parameters\n";
}