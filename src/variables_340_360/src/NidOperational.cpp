#include "../include/NidOperational.hpp"
#include <variables_230_340_360/checkHexF.hpp>
#include <variables_230_340_360/NotVariableException.hpp>

NidOperational::NidOperational(std::uint32_t value) : Variable("NID_OPERATIONAL", value) {
    Check();
}

NidOperational::NidOperational(const nlohmann::json & j, const std::string & order) : Variable("NID_OPERATIONAL", j, order) {
    Check();
}

void NidOperational::SetValue(std::uint32_t value) {
    Variable::SetValue(value);
    Check();
}

void NidOperational::SetValue(const nlohmann::json & j, const std::string & order) {
    Variable::SetValue(j, order);
    Check();
}

void NidOperational::Check() const {
    if (!checkHexF(m_Value))
        throw NotVariableException();
}