#include "../include/NidMn.hpp"
#include "checkHexNotAE.hpp"
#include "checkHexF.hpp"
#include "../include/NotVariableException.hpp"

NidMn::NidMn(std::uint32_t value) : Variable("NID_MN", value) {
    Check();
}

NidMn::NidMn(const nlohmann::json & j, const std::string & order) : Variable("NID_MN", j, order) {
    Check();
}

void NidMn::SetValue(std::uint32_t value) {
    Variable::SetValue(value);
    Check();
}

void NidMn::SetValue(const nlohmann::json & j, const std::string & order) {
    Variable::SetValue(j, order);
    Check();
}

void NidMn::Check() const {
    if (!(checkHexNotAE(m_Value) && checkHexF(m_Value) && m_Value != 0xffffff))
        throw NotVariableException();
}