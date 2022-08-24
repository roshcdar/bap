#include "../include/NidRadio.hpp"
#include "checkHexNotAE.hpp"
#include "checkHexF.hpp"
#include "../include/NotVariableException.hpp"

NidRadio::NidRadio(std::uint64_t value) : Variable("NID_RADIO", value) {
    Check();
}

NidRadio::NidRadio(const nlohmann::json & j, const std::string & order) : Variable("NID_RADIO", j, order) {
    Check();
}

void NidRadio::SetValue(std::uint64_t value) {
    Variable::SetValue(value);
    Check();
}

void NidRadio::SetValue(const nlohmann::json & j, const std::string & order) {
    Variable::SetValue(j, order);
    Check();
}

void NidRadio::Check() const {
    if (!(checkHexNotAE(m_Value) && checkHexF(m_Value)))
        throw NotVariableException();
}
