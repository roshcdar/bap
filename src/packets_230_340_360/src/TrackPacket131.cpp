#include "../include/TrackPacket131.hpp"
#include "../include/NotPacketException.hpp"

TrackPacket131::TrackPacket131(const NidPacket & nidPacket, const QDir & qDir, const LPacket & lPacket, const QScale & qScale, const DRbctr & dRbctr,
                               const NidC & nidC, const NidRbc & nidRbc, const NidRadio & nidRadio, const QSleepsession & qSleepsession)
: PacketQDirQScale(nidPacket, qDir, lPacket, qScale), dRbctr(dRbctr), nidC(nidC), nidRbc(nidRbc), nidRadio(nidRadio), qSleepsession(qSleepsession)
{
    Check();
}

TrackPacket131::TrackPacket131(const nlohmann::json & j)
: PacketQDirQScale(j), dRbctr(j), nidC(j), nidRbc(j), nidRadio(j), qSleepsession(j)
{
    if (j.size() != 9)
        throw NotPacketException();
    Check();
}

nlohmann::json TrackPacket131::ToJson() const {
    nlohmann::json j = PacketQDirQScale::ToJson();
    dRbctr.ToJson(j);
    nidC.ToJson(j);
    nidRbc.ToJson(j);
    nidRadio.ToJson(j);
    qSleepsession.ToJson(j);
    return j;
}

const DRbctr & TrackPacket131::GetDRbctr() const {
    return dRbctr;
}

const NidC & TrackPacket131::GetNidC() const {
    return nidC;
}

const NidRbc & TrackPacket131::GetNidRbc() const {
    return nidRbc;
}

const NidRadio & TrackPacket131::GetNidRadio() const {
    return nidRadio;
}

const QSleepsession & TrackPacket131::GetQSleepsession() const {
    return qSleepsession;
}

void TrackPacket131::Print (std::ostream & os) const {
    PacketQDirQScale::Print(os);
    os << dRbctr << nidC << nidRbc << nidRadio << qSleepsession;
}

void TrackPacket131::Check() const {
    if (!(nidPacket.GetValue() == 131 && lPacket.GetValue() == 129))
        throw NotPacketException();
}

void TrackPacket131::PrintPacketName (std::ostream & os) const {
    os << "RBC transition order\n";
}