#include "../include/TrackPacket39.hpp"
#include "../include/MVoltageNotFollow.hpp"
#include "../include/MVoltageFollow.hpp"
#include <packets_230_340_360/NotPacketException.hpp>

TrackPacket39::TrackPacket39(const NidPacket & nidPacket, const QDir & qDir,  const LPacket & lPacket,
                             const QScale & qScale, const DTraction & dTraction, const copy_ptr<const MVoltageIf> & mVoltageIf)
: TrackPacket39Base(nidPacket, qDir, lPacket, qScale, dTraction), mVoltageIf(mVoltageIf)
{
    Check();
}

TrackPacket39::TrackPacket39(const nlohmann::json &j)
: TrackPacket39Base(j)
{
    if (j.size() != 6)
        throw NotPacketException();
    try {
        MVoltage mVoltageHelper(j.at("mVoltageIf"));
        if (mVoltageHelper.GetValue())
            mVoltageIf = std::make_unique<MVoltageFollow>(j.at("mVoltageIf"));
        else
            mVoltageIf = std::make_unique<MVoltageNotFollow>(j.at("mVoltageIf"));
    }
    catch (nlohmann::json::exception &e) {
        throw NotPacketException();
    }
    Check();
}

nlohmann::json TrackPacket39::ToJson() const {
    nlohmann::json j = TrackPacket39Base::ToJson();
    j["mVoltageIf"] = mVoltageIf->ToJson();
    return j;
}

const copy_ptr<const MVoltageIf> & TrackPacket39::GetMVoltageIf() const {
    return mVoltageIf;
}

void  TrackPacket39::Print ( std::ostream & os ) const {
    TrackPacket39Base::Print(os);
    os << *mVoltageIf;
}

void TrackPacket39::Check() const {
    if (!(mVoltageIf != nullptr && lPacket.GetValue() == (40 + mVoltageIf->CountLength())))
        throw NotPacketException();
}

void  TrackPacket39::PrintPacketName ( std::ostream & os ) const {
    os << "Track Condition Change of traction system\n";
}