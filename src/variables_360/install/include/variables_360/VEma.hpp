#pragma once
#include <cstdint>
#include <string>
#include <nlohmann/json.hpp>
#include <variables_230_340_360/Variable.hpp>

class VEma : public Variable<std::uint8_t, 7> {
public:
    explicit VEma(std::uint8_t value = 0);
    explicit VEma(const nlohmann::json & j, const std::string & order = "");
};

/**
 * |------------------------------------------------------------------------------|
 * | Name                    | Permitted speed at the End of Movement Authority   |
 * |------------------------------------------------------------------------------|
 * | Length of variable      | Minimum Value | Maximum Value | Resolution/formula |
 * |------------------------------------------------------------------------------|
 * | 7 bits                  | 0             | 120           | 5 km/h             |
 * |------------------------------------------------------------------------------|
 * | Special/Reserved Values | 121-127       | Spare                              |
 * |------------------------------------------------------------------------------|
 */
