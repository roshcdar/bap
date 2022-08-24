#pragma once
#include <vector>
#include <variables_230_340_360/TCycloc.hpp>
#include <variables_230_340_360/DCycloc.hpp>
#include <variables_230_340_360/MLoc.hpp>
#include <variables_230_340_360/NIter.hpp>
#include <variables_230_340_360/DLoc.hpp>
#include <variables_230_340_360/QLgtloc.hpp>
#include "PacketQDirQScale.hpp"

class TrackPacket58 : public PacketQDirQScale {
public:
    TrackPacket58(const NidPacket & nidPacket, const QDir & qDir, const LPacket & lPacket,
                  const QScale & qScale, const TCycloc & tCycloc, const DCycloc & dCycloc,
                  const MLoc & mLoc, const NIter & nIter, const std::vector<DLoc> & dLocs,
                  const std::vector<QLgtloc> & qLgtlocs);
    explicit TrackPacket58(const nlohmann::json & j);
    [[nodiscard]] nlohmann::json ToJson() const override;
    [[nodiscard]] const TCycloc & GetTCycloc() const;
    [[nodiscard]] const DCycloc & GetDCycloc() const;
    [[nodiscard]] const MLoc & GetMLoc() const;
    [[nodiscard]] const NIter & GetNIter() const;
    [[nodiscard]] const std::vector<DLoc> & GetDLocs() const;
    [[nodiscard]] const std::vector<QLgtloc> & GetQLgtlocs() const;
protected:
    void Print (std::ostream & os) const override;
    void PrintPacketName (std::ostream & os) const override;
private:
    void Check() const;
    TCycloc tCycloc;
    DCycloc dCycloc;
    MLoc mLoc;
    NIter nIter;
    std::vector<DLoc> dLocs;
    std::vector<QLgtloc> qLgtlocs;
};
