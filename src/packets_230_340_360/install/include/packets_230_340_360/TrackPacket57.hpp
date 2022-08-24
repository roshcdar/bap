#pragma once
#include <variables_230_340_360/TMar.hpp>
#include <variables_230_340_360/TTimeoutrqst.hpp>
#include <variables_230_340_360/TCycrqst.hpp>
#include "PacketQDir.hpp"

class TrackPacket57 : public PacketQDir {
public:
    TrackPacket57(const NidPacket & nidPacket, const QDir & qDir, const LPacket & lPacket, const TMar & tMar, const TTimeoutrqst & tTimeoutrqst, const TCycrqst & tCycrqst);
    explicit TrackPacket57(const nlohmann::json & j);
    [[nodiscard]] nlohmann::json ToJson() const override;
    [[nodiscard]] const TMar & GetTMar() const;
    [[nodiscard]] const TTimeoutrqst & GetTTimeoutrqst() const;
    [[nodiscard]] const TCycrqst & GetTCycrqst() const;
protected:
    void Print (std::ostream & os) const override;
    void PrintPacketName (std::ostream & os) const override;
private:
    void Check() const;
    TMar tMar;
    TTimeoutrqst tTimeoutrqst;
    TCycrqst tCycrqst;
};
