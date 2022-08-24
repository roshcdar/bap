#pragma once
#include <cstdint>
#include <string>
#include <nlohmann/json.hpp>
#include <variables_230_340_360/Variable.hpp>

class TEma : public Variable<std::uint16_t, 10> {
public:
    explicit TEma(std::uint16_t value = 0);
    explicit TEma(const nlohmann::json & j, const std::string & order = "");
};

/**
 * |---------------------------------------------------------------------------------------------------------------------|
 * | Name                    | Validity time for the target speed at the End of Movement Authority                       |
 * |---------------------------------------------------------------------------------------------------------------------|
 * | Description             | Time for which the target speed is valid measured from the moment information is received |
 * |---------------------------------------------------------------------------------------------------------------------|
 * | Length of variable      | Minimum Value | Maximum Value | Resolution/formula                                        |
 * |---------------------------------------------------------------------------------------------------------------------|
 * | 10 bits                 | 0             | 1022          | 1 s                                                       |
 * |---------------------------------------------------------------------------------------------------------------------|
 * | Special/Reserved Values | 1023          | Infinity                                                                  |
 * |---------------------------------------------------------------------------------------------------------------------|
 */
