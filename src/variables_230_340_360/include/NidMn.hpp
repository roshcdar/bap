#pragma once
#include <cstdint>
#include <string>
#include <nlohmann/json.hpp>
#include "Variable.hpp"

class NidMn : public Variable<std::uint32_t, 24> {
public:
    explicit NidMn(std::uint32_t value = 0);
    explicit NidMn(const nlohmann::json & j, const std::string & order = "");
    void SetValue(std::uint32_t value) override;
    void SetValue(const nlohmann::json & j, const std::string & order = "") override;
private:
    /**
     * Check, if set beforehand m_Value is valid according to
     * its definition in subset 7 version 2.3.0 or 3.4.0 or 3.6.0 (definition is same there).
     * @throws NotVariableException
     */
    void Check() const;
};
