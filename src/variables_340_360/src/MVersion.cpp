#include "../include/MVersion.hpp"
#include <variables_230_340_360/NotVariableException.hpp>

MVersion::MVersion(std::uint8_t value) : Variable("M_VERSION", value) {
    Check();
}

MVersion::MVersion(const nlohmann::json & j, const std::string & order) : Variable("M_VERSION", j, order) {
    Check();
}

void MVersion::SetValue(std::uint8_t value) {
    Variable::SetValue(value);
    Check();
}

void MVersion::SetValue(const nlohmann::json & j, const std::string & order) {
    Variable::SetValue(j, order);
    Check();
}

void MVersion::Check() const {
   if (m_Value >= 18 && m_Value <= 31)
       throw NotVariableException();
}