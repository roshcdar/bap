#pragma once
#include <variables_230_340_360/DTraction.hpp>
#include "PacketQDirQScale.hpp"

class TrackPacket39Base : public PacketQDirQScale {
public:
    TrackPacket39Base(const NidPacket & nidPacket, const QDir & qDir,  const LPacket & lPacket,
                                       const QScale & qScale, const DTraction & dTraction);
    explicit TrackPacket39Base(const nlohmann::json &j);
    [[nodiscard]] nlohmann::json ToJson() const override;
    [[nodiscard]] const DTraction & GetDTraction() const;
protected:
    void  Print ( std::ostream & os ) const override;
    DTraction dTraction;
private:
    void Check() const;
};
