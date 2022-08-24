#pragma once
#include <variables_230_340_360/DStartreverse.hpp>
#include <variables_230_340_360/LReversearea.hpp>
#include "PacketQDirQScale.hpp"

class TrackPacket138 : public PacketQDirQScale {
public:
    TrackPacket138(const NidPacket & nidPacket, const QDir & qDir, const LPacket & lPacket, const QScale & qScale,
                   const DStartreverse & dStartreverse, const LReversearea & lReversearea);
    explicit TrackPacket138(const nlohmann::json & j);
    [[nodiscard]] nlohmann::json ToJson() const override;
    [[nodiscard]] const DStartreverse & GetDStartreverse() const;
    [[nodiscard]] const LReversearea & GetLReversearea() const;
protected:
    void Print (std::ostream & os) const override;
    void PrintPacketName (std::ostream & os) const override;
private:
    void Check() const;
    DStartreverse dStartreverse;
    LReversearea lReversearea;
};

