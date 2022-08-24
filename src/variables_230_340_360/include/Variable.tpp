#include "Variable.hpp"
#include <limits>
#include "NotVariableException.hpp"

template <class T, std::uint8_t P>
Variable<T, P>::Variable(const std::string & name, T value) : m_Name(name), m_Value(value) {
    Check();
}

template <class T, std::uint8_t P>
Variable<T, P>::Variable(const std::string & name, const nlohmann::json & j, const std::string & order) : m_Name(name) {
    SetJson(j, order);
    Check();
}

template <class T, std::uint8_t P>
void Variable<T, P>::ToJson(nlohmann::json & j, const std::string & order) const {
    j[m_Name + order] = m_Value;
}

template <class T, std::uint8_t P>
nlohmann::json Variable<T, P>::ToJson() const {
    nlohmann::json j;
    j[m_Name] = m_Value;
    return j;
}

template <class T, std::uint8_t P>
void Variable<T, P>::SetValue(T value) {
    m_Value = value;
    Check();
}

template <class T, std::uint8_t P>
void Variable<T, P>::SetValue(const nlohmann::json & j, const std::string & order) {
    SetJson(j, order);
    Check();
}

template <class T, std::uint8_t P>
T Variable<T, P>::GetValue() const {
    return m_Value;
}

template <class T, std::uint8_t P>
const std::string & Variable<T, P>::GetName() const {
    return m_Name;
}

template <class T, std::uint8_t P>
void Variable<T, P>::SetJson(const nlohmann::json & j, const std::string & order) {
    try {
        j.at(m_Name + order).get_to(m_Value);
    }
    catch (nlohmann::json::exception &e) {
        throw NotVariableException();
    }
}

template <class T, std::uint8_t P>
void Variable<T, P>::Check() const {
    if (std::numeric_limits<T>::digits <= P)
        return;
    if (P == 0 || !((m_Value >= 0 && m_Value >> P == 0) || (m_Value < 0  && m_Value >> P == -1)))
        throw NotVariableException();
}
