#include "../include/QMarqstreason.hpp"
#include <variables_230_340_360/NotVariableException.hpp>

QMarqstreason::QMarqstreason(std::uint8_t value) : Variable("Q_MARQSTREASON", value) {
    Check();
}

QMarqstreason::QMarqstreason(const nlohmann::json & j, const std::string & order) : Variable("Q_MARQSTREASON", j, order) {
    Check();
}

void QMarqstreason::SetValue(std::uint8_t value) {
    Variable::SetValue(value);
    Check();
}

void QMarqstreason::SetValue(const nlohmann::json & j, const std::string & order) {
    Variable::SetValue(j, order);
    Check();
}

void QMarqstreason::Check() const {
    if (!m_Value)
        throw NotVariableException();
}
