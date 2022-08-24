#include "../include/TrackPacket39.hpp"
#include <packets_230_340_360/NotPacketException.hpp>

TrackPacket39::TrackPacket39(const NidPacket & nidPacket, const QDir & qDir,  const LPacket & lPacket,
                             const QScale & qScale, const DTraction & dTraction, const MTraction & mTraction)
: TrackPacket39Base(nidPacket, qDir, lPacket, qScale, dTraction), mTraction(mTraction)
{
    Check();
}

TrackPacket39::TrackPacket39(const nlohmann::json &j)
: TrackPacket39Base(j), mTraction(j)
{
    if (j.size() != 6)
        throw NotPacketException();
    Check();
}

nlohmann::json TrackPacket39::ToJson() const {
    nlohmann::json j = TrackPacket39Base::ToJson();
    mTraction.ToJson(j);
    return j;
}

const MTraction & TrackPacket39::GetMTraction() const {
    return mTraction;
}

void  TrackPacket39::Print ( std::ostream & os ) const {
    TrackPacket39Base::Print(os);
    os << mTraction;
}

void TrackPacket39::Check() const {
    if (lPacket.GetValue() != 48)
        throw NotPacketException();
}

void  TrackPacket39::PrintPacketName ( std::ostream & os ) const {
    os << "Track Condition Change of traction power\n";
}