#include "../include/TrackPacket138.hpp"
#include "../include/NotPacketException.hpp"

TrackPacket138::TrackPacket138(const NidPacket & nidPacket, const QDir & qDir, const LPacket & lPacket, const QScale & qScale,
                                                   const DStartreverse & dStartreverse, const LReversearea & lReversearea)
: PacketQDirQScale(nidPacket, qDir, lPacket, qScale), dStartreverse(dStartreverse), lReversearea(lReversearea)
{
    Check();
}

TrackPacket138::TrackPacket138(const nlohmann::json & j)
: PacketQDirQScale(j), dStartreverse(j), lReversearea(j)
{
    if (j.size() != 6)
        throw NotPacketException();
    Check();
}

nlohmann::json TrackPacket138::ToJson() const {
    nlohmann::json j = PacketQDirQScale::ToJson();
    dStartreverse.ToJson(j);
    lReversearea.ToJson(j);
    return j;
}

const DStartreverse & TrackPacket138::GetDStartreverse() const {
    return dStartreverse;
}

const LReversearea & TrackPacket138::GetLReversearea() const {
    return lReversearea;
}

void TrackPacket138::Print (std::ostream & os) const {
    PacketQDirQScale::Print(os);
    os << dStartreverse << lReversearea;
}

void TrackPacket138::Check() const {
    if (!(nidPacket.GetValue() == 138 && lPacket.GetValue() == 55))
        throw NotPacketException();
}

void TrackPacket138::PrintPacketName (std::ostream & os) const {
    os << "Reversing area information\n";
}