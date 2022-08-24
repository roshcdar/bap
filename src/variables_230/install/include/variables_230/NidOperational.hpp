#pragma once
#include <cstdint>
#include <string>
#include <nlohmann/json.hpp>
#include <variables_230_340_360/Variable.hpp>

class NidOperational : public Variable<std::uint32_t, 32> {
public:
    explicit NidOperational(std::uint32_t value = 0);
    explicit NidOperational(const nlohmann::json & j, const std::string & order = "");
    void SetValue(std::uint32_t value) override;
    void SetValue(const nlohmann::json & j, const std::string & order = "") override;
private:
    /**
     * Check, if set beforehand m_Value is valid according to its definition in subset 7 version 2.3.0.
     * @throws NotVariableException
     */
    void Check() const;
};

/**
 * Values must be assigned according to 7.3.1.3 in subset 7 version 2.3.0.
 * |-------------------------------------------------------------------------------------------------------------------------------|
 * | Name                    | Train Running Number                                                                                |
 * |-------------------------------------------------------------------------------------------------------------------------------|
 * | Description             | This is the operational train running number.                                                       |
 * |-------------------------------------------------------------------------------------------------------------------------------|
 * | Length of variable      | Minimum Value        | Maximum Value                     | Resolution/formula                       |
 * |-------------------------------------------------------------------------------------------------------------------------------|
 * | 32 bits                 | 0                    | 9999 9999 (Binary Coded Decimal) | Binary Coded Decimal                      |
 * |-------------------------------------------------------------------------------------------------------------------------------|
 * | Special/Reserved Values | For each digit;                                                                                     |
 * |                         |-----------------------------------------------------------------------------------------------------|
 * |                         | Values A–E           | Not Used                                                                     |
 * |                         |-----------------------------------------------------------------------------------------------------|
 * |                         | F                    | Use value F for digit to indicate no digit (if number shorter than 8 digits) |
 * |                         |-----------------------------------------------------------------------------------------------------|
 * |                         | Exception: FFFF FFFF | Unknown                                                                      |
 * |-------------------------------------------------------------------------------------------------------------------------------|
 */
