#include "../include/MVoltageNotFollow.hpp"
#include <packets_230_340_360/NotPacketException.hpp>

MVoltageNotFollow::MVoltageNotFollow(const MVoltage & mVoltage) : MVoltageIf(mVoltage) {
    Check();
}

MVoltageNotFollow::MVoltageNotFollow(const nlohmann::json & j) : MVoltageIf(j) {
    if (j.size() != 1)
        throw NotPacketException();
    Check();
}

std::unique_ptr<MVoltageIf> MVoltageNotFollow::Clone() const {
    return std::make_unique<MVoltageNotFollow>(*this);
}

void MVoltageNotFollow::Check() const {
    if (mVoltage.GetValue())
        throw NotPacketException();
}