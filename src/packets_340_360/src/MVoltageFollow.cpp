#include "../include/MVoltageFollow.hpp"
#include <packets_230_340_360/NotPacketException.hpp>

MVoltageFollow::MVoltageFollow(const MVoltage & mVoltage, const NidCtraction & nidCtraction)
 : MVoltageIf(mVoltage), nidCtraction(nidCtraction)
 {
    Check();
 }

MVoltageFollow::MVoltageFollow(const nlohmann::json & j)
: MVoltageIf(j), nidCtraction(j) {
    if (j.size() != 2)
        throw NotPacketException();
    Check();
}

std::unique_ptr<MVoltageIf> MVoltageFollow::Clone() const {
    return std::make_unique<MVoltageFollow>(*this);
}

nlohmann::json MVoltageFollow::ToJson() const {
    nlohmann::json j = MVoltageIf::ToJson();
    nidCtraction.ToJson(j);
    return j;
}

std::uint8_t MVoltageFollow::CountLength() const {
    return 14;
}

void MVoltageFollow::Print (std::ostream & os ) const {
    MVoltageIf::Print(os);
    os << nidCtraction;
}

const NidCtraction & MVoltageFollow::GetNidCtraction() const {
    return nidCtraction;
}

void MVoltageFollow::Check() const {
    if (!mVoltage.GetValue())
        throw NotPacketException();
}