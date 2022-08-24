#pragma once
#include <cstdint>
#include <string>
#include <nlohmann/json.hpp>
#include <variables_230_340_360/Variable.hpp>

class MVersion : public Variable<std::uint8_t, 7> {
public:
    explicit MVersion(std::uint8_t value = 0);
    explicit MVersion(const nlohmann::json & j, const std::string & order = "");
    void SetValue(std::uint8_t value) override;
    void SetValue(const nlohmann::json & j, const std::string & order) override;
private:
    /**
     * Check, if set beforehand m_Value is valid according to
     * its definition in subset 7 version 3.4.0 or 3.6.0 (definition is same there).
     * @throws NotVariableException
     */
    void Check() const;
};
