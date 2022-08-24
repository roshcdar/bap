#pragma once
#include <cstdint>
#include <string>
#include <nlohmann/json.hpp>
#include <variables_230_340_360/Variable.hpp>

class QNvsrbktrg : public Variable<std::uint8_t, 1> {
public:
    explicit QNvsrbktrg(std::uint8_t value);
    explicit QNvsrbktrg(const nlohmann::json & j, const std::string & order = "");
};

/**
 * |--------------------------------------------------------------------------------------------------|
 * | Name                    | Permission to use service brake when braking to a target is supervised |
 * |--------------------------------------------------------------------------------------------------|
 * | Description             | This variable is part of the National Values.                          |
 * |--------------------------------------------------------------------------------------------------|
 * | Length of variable      | Minimum Value | Maximum Value | Resolution/formula                     |
 * |--------------------------------------------------------------------------------------------------|
 * | 1 bit                   |               |               |                                        |
 * |--------------------------------------------------------------------------------------------------|
 * | Special/Reserved Values | 0             | No                                                     |
 * |                         |------------------------------------------------------------------------|
 * |                         | 1             | Yes                                                    |
 * |--------------------------------------------------------------------------------------------------|
 */
