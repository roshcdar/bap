#include "../include/MVoltageIf.hpp"

MVoltageIf::MVoltageIf(const MVoltage & mVoltage) : mVoltage(mVoltage) {}

MVoltageIf::MVoltageIf(const nlohmann::json & j) : mVoltage(j) {}

nlohmann::json MVoltageIf::ToJson() const {
    return mVoltage.ToJson();
}

std::ostream & operator << ( std::ostream & os, const MVoltageIf & mVoltageIf) {
    mVoltageIf.Print(os);
    return os;
}

const MVoltage & MVoltageIf::GetMVoltage() const {
    return mVoltage;
}

void  MVoltageIf::Print ( std::ostream & os ) const {
    os << mVoltage;
}

std::uint8_t MVoltageIf::CountLength() const {
    return 4;
}
