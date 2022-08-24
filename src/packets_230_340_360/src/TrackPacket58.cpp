#include "../include/TrackPacket58.hpp"
#include <cstdint>
#include "../include/NotPacketException.hpp"

TrackPacket58::TrackPacket58(const NidPacket & nidPacket, const QDir & qDir, const LPacket & lPacket,
                             const QScale & qScale, const TCycloc & tCycloc, const DCycloc & dCycloc,
                             const MLoc & mLoc, const NIter & nIter, const std::vector<DLoc> & dLocs,
                             const std::vector<QLgtloc> & qLgtlocs)
: PacketQDirQScale(nidPacket, qDir, lPacket, qScale), tCycloc(tCycloc),dCycloc(dCycloc), mLoc(mLoc), nIter(nIter), dLocs(dLocs), qLgtlocs(qLgtlocs) {
    Check();
}

TrackPacket58::TrackPacket58(const nlohmann::json & j) : PacketQDirQScale(j), tCycloc(j), dCycloc(j), mLoc(j), nIter(j) {
    if (j.size() != 10)
        throw NotPacketException();
    try {
        for (const auto & it : j.at("dLocs"))
            dLocs.emplace_back(DLoc(it));
        for (const auto & it : j.at("qLgtlocs"))
            qLgtlocs.emplace_back(QLgtloc(it));
    }
    catch (nlohmann::json::exception &e) {
        throw NotPacketException();
    }
    Check();
}

nlohmann::json TrackPacket58::ToJson() const {
    nlohmann::json j = PacketQDirQScale::ToJson();
    tCycloc.ToJson(j);
    dCycloc.ToJson(j);
    mLoc.ToJson(j);
    nIter.ToJson(j);
    for (const auto & dLoc : dLocs)
        j["dLocs"].emplace_back(dLoc.ToJson());
    for (const auto & qLgtloc : qLgtlocs)
        j["qLgtlocs"].emplace_back(qLgtloc.ToJson());
    return j;
}

void TrackPacket58::Print (std::ostream & os) const {
    PacketQDirQScale::Print(os);
    os << tCycloc << dCycloc << mLoc << nIter;
    std::uint8_t iter = nIter.GetValue();
    for (std::uint8_t i = 0; i < iter; ++i) {
        os << "------------\n";
        os << dLocs[i];
        os << qLgtlocs[i];
    }
    if (iter)
        os << "------------\n";
}

const TCycloc & TrackPacket58::GetTCycloc() const {
    return tCycloc;
}

const DCycloc & TrackPacket58::GetDCycloc() const {
    return dCycloc;
}

const MLoc & TrackPacket58::GetMLoc() const {
    return mLoc;
}

const NIter & TrackPacket58::GetNIter() const {
    return nIter;
}

const std::vector<DLoc> & TrackPacket58::GetDLocs() const {
    return dLocs;
}

const std::vector<QLgtloc> & TrackPacket58::GetQLgtlocs() const {
    return qLgtlocs;
}

void TrackPacket58::Check() const {
    std::uint16_t iter = nIter.GetValue();
    if (!(nidPacket.GetValue() == 58 && dLocs.size() == iter && qLgtlocs.size() == iter
          && lPacket.GetValue() == 56 + iter * 15 + iter))
        throw NotPacketException();
}

void TrackPacket58::PrintPacketName (std::ostream & os) const {
    os << "Position Report Parameters\n";
}