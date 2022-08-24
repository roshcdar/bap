#include "../include/PacketQDir.hpp"

PacketQDir::PacketQDir(const NidPacket & nidPacket, const QDir & qDir, const LPacket & lPacket) : Packet(nidPacket, lPacket), qDir(qDir) {}

PacketQDir::PacketQDir(const nlohmann::json & j) : Packet(j), qDir(j) {}

nlohmann::json PacketQDir::ToJson() const {
    nlohmann::json j = Packet::ToJson();
    qDir.ToJson(j);
    return j;
}

void PacketQDir::Print (std::ostream & os) const {
    PrintPacketName(os);
    os << nidPacket;
    os << qDir;
    os << lPacket;
}

const QDir & PacketQDir::GetQDir() const {
    return qDir;
}
