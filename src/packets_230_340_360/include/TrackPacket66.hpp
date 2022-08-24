#pragma once
#include <variables_230_340_360/NidTsr.hpp>
#include "PacketQDir.hpp"

class TrackPacket66 : public PacketQDir {
public:
    TrackPacket66(const NidPacket & nidPacket, const QDir & qDir, const LPacket & lPacket, const NidTsr & nidTsr);
    explicit TrackPacket66(const nlohmann::json & j);
    [[nodiscard]] nlohmann::json ToJson() const override;
    [[nodiscard]] const NidTsr & GetNidTsr() const;
protected:
    void Print (std::ostream & os) const override;
    void PrintPacketName (std::ostream & os) const override;
private:
    void Check() const;
    NidTsr nidTsr;
};
