#include "../include/TrackPacket42.hpp"
#include "../include/NotPacketException.hpp"

TrackPacket42::TrackPacket42(const NidPacket & nidPacket, const QDir & qDir, const LPacket & lPacket, const QRbc & qRbc,
                             const NidC & nidC, const NidRbc & nidRbc, const NidRadio & nidRadio, const QSleepsession & qSleepsession)
: PacketQDir(nidPacket, qDir, lPacket), qRbc(qRbc), nidC(nidC), nidRbc(nidRbc), nidRadio(nidRadio), qSleepsession(qSleepsession)
{
    Check();
}

TrackPacket42::TrackPacket42(const nlohmann::json & j)
: PacketQDir(j), qRbc(j), nidC(j), nidRbc(j), nidRadio(j), qSleepsession(j)
{
    if (j.size() != 8)
        throw NotPacketException();
    Check();
}

nlohmann::json TrackPacket42::ToJson() const {
    nlohmann::json j = PacketQDir::ToJson();
    qRbc.ToJson(j);
    nidC.ToJson(j);
    nidRbc.ToJson(j);
    nidRadio.ToJson(j);
    qSleepsession.ToJson(j);
    return j;
}

const QRbc & TrackPacket42::GetQRbc() const {
    return qRbc;
}

const NidC & TrackPacket42::GetNidC() const {
    return nidC;
}

const NidRbc & TrackPacket42::GetNidRbc() const {
    return nidRbc;
}

const NidRadio & TrackPacket42::GetNidRadio() const {
    return nidRadio;
}

const QSleepsession & TrackPacket42::GetQSleepsession() const {
    return qSleepsession;
}

void TrackPacket42::Print (std::ostream & os) const {
    PacketQDir::Print(os);
    os << qRbc << nidC << nidRbc << nidRadio << qSleepsession;
}

void TrackPacket42::Check() const {
    if (!(nidPacket.GetValue() == 42 && lPacket.GetValue() == 113))
        throw NotPacketException();
}

void TrackPacket42::PrintPacketName (std::ostream & os) const {
    os << "Session Management\n";
}