#pragma once
#include <variables_230_340_360/NidTsr.hpp>
#include <variables_230_340_360/DTsr.hpp>
#include <variables_230_340_360/LTsr.hpp>
#include <variables_230_340_360/QFront.hpp>
#include <variables_230_340_360/VTsr.hpp>
#include "PacketQDirQScale.hpp"

class TrackPacket65 : public PacketQDirQScale {
public:
    TrackPacket65(const NidPacket & nidPacket, const QDir & qDir, const LPacket & lPacket, const QScale & qScale, const NidTsr & nidTsr,
                  const DTsr & dTsr, const LTsr & lTsr, const QFront & qFront, const VTsr & vTsr);
    explicit TrackPacket65(const nlohmann::json & j);
    [[nodiscard]] nlohmann::json ToJson() const override;
    [[nodiscard]] const NidTsr & GetNidTsr() const;
    [[nodiscard]] const DTsr & GetDTsr() const;
    [[nodiscard]] const LTsr & GetLTsr() const;
    [[nodiscard]] const QFront & GetQFront() const;
    [[nodiscard]] const VTsr & GetVTsr() const;
protected:
    void Print (std::ostream & os) const override;
    void PrintPacketName (std::ostream & os) const override;
private:
    void Check() const;
    NidTsr nidTsr;
    DTsr dTsr;
    LTsr lTsr;
    QFront qFront;
    VTsr vTsr;
};
