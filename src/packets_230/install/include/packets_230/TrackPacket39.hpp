#pragma once
#include <variables_230/MTraction.hpp>
#include <packets_230_340_360/TrackPacket39Base.hpp>

class TrackPacket39 : public TrackPacket39Base {
public:
    TrackPacket39(const NidPacket & nidPacket, const QDir & qDir,  const LPacket & lPacket,
                  const QScale & qScale, const DTraction & dTraction, const MTraction & mTraction);
    explicit TrackPacket39(const nlohmann::json &j);
    [[nodiscard]] nlohmann::json ToJson() const override;
    [[nodiscard]] const MTraction & GetMTraction() const;
protected:
    void  Print ( std::ostream & os ) const override;
    void  PrintPacketName ( std::ostream & os ) const override;
private:
    void Check() const;
    MTraction mTraction;
};
