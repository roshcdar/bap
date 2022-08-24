#include "../include/TrackPacket64.hpp"
#include <packets_230_340_360/NotPacketException.hpp>

TrackPacket64::TrackPacket64(const NidPacket & nidPacket, const QDir & qDir, const LPacket & lPacket)
: PacketQDir(nidPacket, qDir, lPacket)
{
    Check();
}

TrackPacket64::TrackPacket64(const nlohmann::json & j)
: PacketQDir(j)
{
    if (j.size() != 3)
       throw NotPacketException();
    Check();
}

void TrackPacket64::PrintPacketName (std::ostream & os) const {
    os << "Inhibition of revocable TSRs from balises in L2/3\n";
}

void TrackPacket64::Check() const {
    if (!(nidPacket.GetValue() == 64 && lPacket.GetValue() == 23))
        throw NotPacketException();
}