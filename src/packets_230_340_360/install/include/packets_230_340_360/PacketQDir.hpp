#pragma once
#include <variables_230_340_360/QDir.hpp>
#include "Packet.hpp"

class PacketQDir : public Packet {
public:
    PacketQDir(const NidPacket & nidPacket, const QDir & qDir, const LPacket & lPacket);
    explicit PacketQDir(const nlohmann::json & j);
    [[nodiscard]] nlohmann::json ToJson() const override;
    [[nodiscard]] const QDir & GetQDir() const;
protected:
    void Print (std::ostream & os) const override;
    QDir qDir;
};
