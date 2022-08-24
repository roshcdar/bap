#pragma once
#include <cstdint>
#include <string>
#include <nlohmann/json.hpp>
#include <variables_230_340_360/Variable.hpp>

class QTrackdel : public Variable<std::uint8_t, 1> {
public:
    explicit QTrackdel(std::uint8_t value = 0);
    explicit QTrackdel(const nlohmann::json & j, const std::string & order = "");
};

/**
 * |----------------------------------------------------------------------------------------------------------------------------|
 * | Name                    | Track description deleted                                                                        |
 * |----------------------------------------------------------------------------------------------------------------------------|
 * | Description             | Qualifier to indicate whether the onboard has deleted (for any reason) track description or not. |
 * |----------------------------------------------------------------------------------------------------------------------------|
 * | Length of variable      | Minimum Value | Maximum Value | Resolution/formula                                               |
 * |----------------------------------------------------------------------------------------------------------------------------|
 * | 1 bit                   |               |               |                                                                  |
 * |----------------------------------------------------------------------------------------------------------------------------|
 * | Special/Reserved Values | 0             | No track description deleted                                                     |
 * |                         |--------------------------------------------------------------------------------------------------|
 * |                         | 1             | Track description deleted                                                        |
 * |----------------------------------------------------------------------------------------------------------------------------|
 */
