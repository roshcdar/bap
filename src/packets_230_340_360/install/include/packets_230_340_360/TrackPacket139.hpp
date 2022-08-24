#pragma once
#include <variables_230_340_360/DReverse.hpp>
#include <variables_230_340_360/VReverse.hpp>
#include "PacketQDirQScale.hpp"

class TrackPacket139 : public PacketQDirQScale {
public:
    TrackPacket139(const NidPacket & nidPacket, const QDir & qDir, const LPacket & lPacket, const QScale & qScale,
                   const DReverse & dReverse, const VReverse & vReverse);
    explicit TrackPacket139(const nlohmann::json & j);
    [[nodiscard]] nlohmann::json ToJson() const override;
    [[nodiscard]] const DReverse & GetDReverse() const;
    [[nodiscard]] const VReverse & GetVReverse() const;
protected:
    void Print (std::ostream & os) const override;
    void PrintPacketName (std::ostream & os) const override;
private:
    void Check() const;
    DReverse dReverse;
    VReverse vReverse;
};
