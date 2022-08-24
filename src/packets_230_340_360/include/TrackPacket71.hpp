#pragma once
#include <variables_230_340_360/DAdhesion.hpp>
#include <variables_230_340_360/LAdhesion.hpp>
#include <variables_230_340_360/MAdhesion.hpp>
#include "PacketQDirQScale.hpp"

class TrackPacket71 : public PacketQDirQScale {
public:
    TrackPacket71(const NidPacket & nidPacket, const QDir & qDir, const LPacket & lPacket, const QScale & qScale,
                  const DAdhesion & dAdhesion, const LAdhesion & lAdhesion, const MAdhesion & mAdhesion);
    explicit TrackPacket71(const nlohmann::json & j);
    [[nodiscard]] nlohmann::json ToJson() const override;
    [[nodiscard]] const DAdhesion & GetDAdhesion() const;
    [[nodiscard]] const LAdhesion & GetLAdhesion() const;
    [[nodiscard]] const MAdhesion & GetMAdhesion() const;
protected:
    void Print (std::ostream & os) const override;
    void PrintPacketName (std::ostream & os) const override;
private:
    void Check() const;
    DAdhesion dAdhesion;
    LAdhesion lAdhesion;
    MAdhesion mAdhesion;
};
