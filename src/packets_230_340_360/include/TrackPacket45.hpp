#pragma once
#include <variables_230_340_360/NidMn.hpp>
#include "PacketQDir.hpp"

class TrackPacket45 : public PacketQDir {
public:
    TrackPacket45(const NidPacket & nidPacket, const QDir & qDir, const LPacket & lPacket, const NidMn & nidMn);
    explicit TrackPacket45(const nlohmann::json & j);
    [[nodiscard]] nlohmann::json ToJson() const override;
    [[nodiscard]] const NidMn & GetNidMn() const;
protected:
    void Print (std::ostream & os) const override;
    void PrintPacketName (std::ostream & os) const override;
private:
    void Check() const;
    NidMn nidMn;
};
