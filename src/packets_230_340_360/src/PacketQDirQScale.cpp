#include "../include/PacketQDirQScale.hpp"

PacketQDirQScale::PacketQDirQScale(const NidPacket & nidPacket, const QDir & qDir, const LPacket & lPacket, const QScale & qScale)
: PacketQDir(nidPacket, qDir, lPacket), qScale(qScale) {}

PacketQDirQScale::PacketQDirQScale(const nlohmann::json & j) : PacketQDir(j), qScale(j) {}

nlohmann::json PacketQDirQScale::ToJson() const {
    nlohmann::json j = PacketQDir::ToJson();
    qScale.ToJson(j);
    return j;
}

void PacketQDirQScale::Print (std::ostream & os) const {
   PacketQDir::Print(os);
   os << qScale;
}

const QScale & PacketQDirQScale::GetQScale() const {
    return qScale;
}
