#include "../include/Packet.hpp"

Packet::Packet(const NidPacket & nidPacket, const LPacket & lPacket) : nidPacket(nidPacket), lPacket(lPacket) {}

Packet::Packet(const nlohmann::json & j) : nidPacket(j), lPacket(j) {}

nlohmann::json Packet::ToJson() const {
    nlohmann::json j;
    nidPacket.ToJson(j);
    lPacket.ToJson(j);
    return j;
}

void Packet::Print (std::ostream & os) const {
    PrintPacketName(os);
    os << nidPacket;
    os << lPacket;
}

std::ostream & operator << ( std::ostream & os, const Packet & packet) {
    packet.Print(os);
    return os;
}

const NidPacket &  Packet::GetNidPacket() const {
    return nidPacket;
}

const LPacket & Packet::GetLPacket() const {
    return lPacket;
}