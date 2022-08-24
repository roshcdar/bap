#pragma once
#include <cstdint>
#include <string>
#include <nlohmann/json.hpp>
#include <variables_230_340_360/Variable.hpp>

class MVersion : public Variable<std::uint8_t, 7> {
public:
    explicit MVersion(std::uint8_t value = 0);
    explicit MVersion(const nlohmann::json & j, const std::string & order = "");
};

/**
 * |------------------------------------------------------------------------------------------------------------|
 * | Name                    | Version of the ETCS language                                                     |
 * |------------------------------------------------------------------------------------------------------------|
 * | Description             | This gives the version of the ETCS language.                                     |
 * |                         |                                                                                  |
 * |                         | Each part indicates the first and second number of the version respectively.     |
 * |                         | - The first number distinguishes not compatible versions. (The three MSB’s)      |
 * |                         | - The second number indicates compatibility within a version X. (The four LSB’s) |
 * |------------------------------------------------------------------------------------------------------------|
 * | Length of variable      | Minimum Value | Maximum Value | Resolution/formula                               |
 * |------------------------------------------------------------------------------------------------------------|
 * | 7 bits                  |               |               |                                                  |
 * |------------------------------------------------------------------------------------------------------------|
 * | Special/Reserved Values | 0-15          | Old systems                                                      |
 * |                         |----------------------------------------------------------------------------------|
 * |                         | 16            | Class 1                                                          |
 * |                         |----------------------------------------------------------------------------------|
 * |                         | 17            | Reserved for future use (this is a valid value)                  |
 * |                         |----------------------------------------------------------------------------------|
 * |                         | ...           | ...                                                              |
 * |                         |----------------------------------------------------------------------------------|
 * |                         | 127           | Reserved for future use (this is a valid value)                  |
 * |------------------------------------------------------------------------------------------------------------|
*/
