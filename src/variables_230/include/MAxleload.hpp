#pragma once
#include <cstdint>
#include <string>
#include <nlohmann/json.hpp>
#include <variables_230_340_360/Variable.hpp>

class MAxleload : public Variable<std::uint8_t, 7> {
public:
    explicit MAxleload(std::uint8_t value = 0);
    explicit MAxleload(const nlohmann::json & j, const std::string & order = "");
};

/**
 * |----------------------------------------------------------------------------------------------|
 * | Name                    | Axle load                                                          |
 * |----------------------------------------------------------------------------------------------|
 * | Length of variable      | Minimum Value | Maximum Value | Resolution/formula                 |
 * |----------------------------------------------------------------------------------------------|
 * | 7 bits                  | 0             | 80            | 0.5 t                              |
 * |----------------------------------------------------------------------------------------------|
 * | Special/Reserved Values | 81            | Spare                                              |
 * |                         |--------------------------------------------------------------------|
 * |                         | ...           | ...                                                |
 * |                         |--------------------------------------------------------------------|
 * |                         | 125           | Spare                                              |
 * |                         |--------------------------------------------------------------------|
 * |                         | 126           | Axle load above 40 t                               |
 * |                         |--------------------------------------------------------------------|
 * |                         | 127           | Spare                                              |
 * |----------------------------------------------------------------------------------------------|
 */
