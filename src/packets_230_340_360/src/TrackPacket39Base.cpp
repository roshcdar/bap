#include "../include/TrackPacket39Base.hpp"
#include "../include/NotPacketException.hpp"

TrackPacket39Base::TrackPacket39Base(const NidPacket & nidPacket, const QDir & qDir,  const LPacket & lPacket,
                                  const QScale & qScale, const DTraction & dTraction)
: PacketQDirQScale(nidPacket, qDir, lPacket, qScale), dTraction(dTraction)
{
    Check();
}

TrackPacket39Base::TrackPacket39Base(const nlohmann::json &j)
: PacketQDirQScale(j), dTraction(j)
{
    Check();
}

nlohmann::json TrackPacket39Base::ToJson() const {
    nlohmann::json j = PacketQDirQScale::ToJson();
    dTraction.ToJson(j);
    return j;
}

const DTraction & TrackPacket39Base::GetDTraction() const {
    return dTraction;
}

void  TrackPacket39Base::Print ( std::ostream & os ) const {
    PacketQDirQScale::Print(os);
    os << dTraction;
}

void TrackPacket39Base::Check() const {
    if (nidPacket.GetValue() != 39)
        throw NotPacketException();
}