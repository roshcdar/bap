#pragma once
#include <cstdint>
#include <iostream>
#include <string>
#include <nlohmann/json.hpp>

template <class T, std::uint8_t P>
class Variable {
public:
    Variable(const std::string & name, T value);
    virtual ~Variable() = default;
    Variable(const std::string & name, const nlohmann::json & j, const std::string & order = "");
    void ToJson(nlohmann::json & j, const std::string & order = "") const;
    [[nodiscard]] nlohmann::json ToJson() const;
    friend std::ostream & operator << ( std::ostream & os, const Variable<T,P> & variable) {
        os << variable.m_Name << ": " << std::to_string(variable.m_Value) << "\n";
        return os;
    }
    friend bool operator==(const Variable<T,P> & lhs, const Variable<T, P> & rhs) {
        if (lhs.m_Name == rhs.m_Name && lhs.m_Value == rhs.m_Value)
            return true;
        return false;
    }
    friend bool operator!=(const Variable<T,P> & lhs, const Variable<T, P> & rhs) {
        return !(lhs==rhs);
    }
    virtual void SetValue(T value);
    virtual void SetValue(const nlohmann::json & j, const std::string & order = "");
    T GetValue() const;
    [[nodiscard]] const std::string & GetName() const;
protected:
    std::string m_Name;
    T m_Value;
private:
    void SetJson(const nlohmann::json & j, const std::string & order);
    void Check() const;
};

#include "Variable.tpp"



