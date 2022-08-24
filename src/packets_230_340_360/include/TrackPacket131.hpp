#pragma once
#include <variables_230_340_360/DRbctr.hpp>
#include <variables_230_340_360/NidC.hpp>
#include <variables_230_340_360/NidRbc.hpp>
#include <variables_230_340_360/NidRadio.hpp>
#include <variables_230_340_360/QSleepsession.hpp>
#include "PacketQDirQScale.hpp"

class TrackPacket131 : public PacketQDirQScale {
public:
    TrackPacket131(const NidPacket & nidPacket, const QDir & qDir, const LPacket & lPacket, const QScale & qScale, const DRbctr & dRbctr,
                   const NidC & nidC, const NidRbc & nidRbc, const NidRadio & nidRadio, const QSleepsession & qSleepsession);
    explicit TrackPacket131(const nlohmann::json & j);
    [[nodiscard]] nlohmann::json ToJson() const override;
    [[nodiscard]] const DRbctr & GetDRbctr() const;
    [[nodiscard]] const NidC & GetNidC() const;
    [[nodiscard]] const NidRbc & GetNidRbc() const;
    [[nodiscard]] const NidRadio & GetNidRadio() const;
    [[nodiscard]] const QSleepsession & GetQSleepsession() const;
protected:
    void Print (std::ostream & os) const override;
    void PrintPacketName (std::ostream & os) const override;
private:
    void Check() const;
    DRbctr dRbctr;
    NidC nidC;
    NidRbc nidRbc;
    NidRadio nidRadio;
    QSleepsession qSleepsession;
};
