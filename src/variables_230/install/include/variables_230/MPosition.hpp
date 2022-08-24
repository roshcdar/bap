#pragma once
#include <cstdint>
#include <string>
#include <nlohmann/json.hpp>
#include <variables_230_340_360/Variable.hpp>

class MPosition : public Variable<std::uint32_t, 20> {
public:
    explicit MPosition(std::uint32_t value = 0);
    explicit MPosition(const nlohmann::json & j, const std::string & order = "");
};

/**
 * |-----------------------------------------------------------------------------------------------------------------|
 * | Name                    | Track kilometre reference value                                                       |
 * |-----------------------------------------------------------------------------------------------------------------|
 * | Description             | The geographical position reporting function uses this variables content as a         |
 * |                         | reference value.                                                                      |
 * |-----------------------------------------------------------------------------------------------------------------|
 * | Length of variable      | Minimum Value | Maximum Value | Resolution/formula                                    |
 * |-----------------------------------------------------------------------------------------------------------------|
 * | 20 bits                 | 0             | 1048574       | 1 m                                                   |
 * |-----------------------------------------------------------------------------------------------------------------|
 * | Special/Reserved Values | 1048575       | No more geographical position reporting after this reference location |
 * |-----------------------------------------------------------------------------------------------------------------|
 */
