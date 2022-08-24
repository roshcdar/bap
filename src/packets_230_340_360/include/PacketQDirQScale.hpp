#pragma once
#include <variables_230_340_360/QScale.hpp>
#include "PacketQDir.hpp"

class PacketQDirQScale : public PacketQDir {
public:
    PacketQDirQScale(const NidPacket & nidPacket, const QDir & qDir, const LPacket & lPacket, const QScale & qScale);
    explicit PacketQDirQScale(const nlohmann::json & j);
    [[nodiscard]] nlohmann::json ToJson() const override;
    [[nodiscard]] const QScale & GetQScale() const;
protected:
    void Print (std::ostream & os) const override;
    QScale qScale;
};
