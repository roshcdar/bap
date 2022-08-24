#include "../include/TrackPacket65.hpp"
#include "../include/NotPacketException.hpp"

TrackPacket65::TrackPacket65(const NidPacket & nidPacket, const QDir & qDir, const LPacket & lPacket, const QScale & qScale, const NidTsr & nidTsr,
                             const DTsr & dTsr, const LTsr & lTsr, const QFront & qFront, const VTsr & vTsr)
: PacketQDirQScale(nidPacket, qDir, lPacket, qScale), nidTsr(nidTsr), dTsr(dTsr), lTsr(lTsr), qFront(qFront), vTsr(vTsr)
{
    Check();
}

TrackPacket65::TrackPacket65(const nlohmann::json & j)
: PacketQDirQScale(j), nidTsr(j), dTsr(j), lTsr(j), qFront(j), vTsr(j)
{
    if (j.size() != 9)
        throw NotPacketException();
    Check();
}

nlohmann::json TrackPacket65::ToJson() const {
    nlohmann::json j = PacketQDirQScale::ToJson();
    nidTsr.ToJson(j);
    dTsr.ToJson(j);
    lTsr.ToJson(j);
    qFront.ToJson(j);
    vTsr.ToJson(j);
    return j;
}

const NidTsr & TrackPacket65::GetNidTsr() const {
    return nidTsr;
}

const DTsr & TrackPacket65::GetDTsr() const {
    return dTsr;
}

const LTsr & TrackPacket65::GetLTsr() const {
    return lTsr;
}

const QFront & TrackPacket65::GetQFront() const {
    return qFront;
}

const VTsr & TrackPacket65::GetVTsr() const {
    return vTsr;
}

void TrackPacket65::Print (std::ostream & os) const {
    PacketQDirQScale::Print(os);
    os << nidTsr << dTsr << lTsr << qFront << vTsr;
}

void TrackPacket65::Check() const {
    if (!(nidPacket.GetValue() == 65 && lPacket.GetValue() == 71))
        throw NotPacketException();
}

void TrackPacket65::PrintPacketName (std::ostream & os) const {
    os << "Temporary Speed Restriction\n";
}