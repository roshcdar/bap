#pragma once
#include <packets_230_340_360/PacketQDir.hpp>

class TrackPacket64 : public PacketQDir {
public:
    TrackPacket64(const NidPacket & nidPacket, const QDir & qDir, const LPacket & lPacket);
    explicit TrackPacket64(const nlohmann::json & j);
protected:
    void PrintPacketName (std::ostream & os) const override;
private:
    void Check() const;
};