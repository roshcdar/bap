#pragma once
#include <variables_230_340_360/QRbc.hpp>
#include <variables_230_340_360/NidC.hpp>
#include <variables_230_340_360/NidRbc.hpp>
#include <variables_230_340_360/NidRadio.hpp>
#include <variables_230_340_360/QSleepsession.hpp>
#include "PacketQDir.hpp"

class TrackPacket42 : public PacketQDir {
public:
    TrackPacket42(const NidPacket & nidPacket, const QDir & qDir, const LPacket & lPacket, const QRbc & qRbc,
                  const NidC & nidC, const NidRbc & nidRbc, const NidRadio & nidRadio, const QSleepsession & qSleepsession);
    explicit TrackPacket42(const nlohmann::json & j);
    [[nodiscard]] nlohmann::json ToJson() const override;
    [[nodiscard]] const QRbc & GetQRbc() const;
    [[nodiscard]] const NidC & GetNidC() const;
    [[nodiscard]] const NidRbc & GetNidRbc() const;
    [[nodiscard]] const NidRadio & GetNidRadio() const;
    [[nodiscard]] const QSleepsession & GetQSleepsession() const;
protected:
    void Print (std::ostream & os) const override;
    void PrintPacketName (std::ostream & os) const override;
private:
    void Check() const;
    QRbc qRbc;
    NidC nidC;
    NidRbc nidRbc;
    NidRadio nidRadio;
    QSleepsession qSleepsession;
};