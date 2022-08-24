#pragma once
#include <variables_340_360/DCurrent.hpp>
#include <variables_340_360/MCurrent.hpp>
#include <packets_230_340_360/PacketQDirQScale.hpp>

class TrackPacket40 : public PacketQDirQScale {
public:
    TrackPacket40(const NidPacket & nidPacket, const QDir & qDir, const LPacket & lPacket, const QScale & qScale,
                  const DCurrent & dCurrent, const MCurrent & mCurrent);
    explicit TrackPacket40(const nlohmann::json & j);
    [[nodiscard]] nlohmann::json ToJson() const override;
    [[nodiscard]] const DCurrent & GetDCurrent() const;
    [[nodiscard]] const MCurrent & GetMCurrent() const;
protected:
    void Print (std::ostream & os) const override;
    void PrintPacketName (std::ostream & os) const override;
private:
    void Check() const;
    DCurrent dCurrent;
    MCurrent mCurrent;
};
