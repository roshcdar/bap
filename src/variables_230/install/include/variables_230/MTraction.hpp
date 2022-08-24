#pragma once
#include <cstdint>
#include <string>
#include <nlohmann/json.hpp>
#include <variables_230_340_360/Variable.hpp>

class MTraction : public Variable<std::uint8_t, 8> {
public:
    explicit MTraction(std::uint8_t value = 0);
    explicit MTraction(const nlohmann::json & j, const std::string & order = "");
};

/**
 * Values must be assigned according to 7.3.1.3 in subset 7 version 2.3.0.
 * |--------------------------------------------------------------------------------------------------------------------------------------|
 * | Name               | Traction System Type                                                                                            |
 * |--------------------------------------------------------------------------------------------------------------------------------------|
 * | Description        | It defines the traction system to be used on a specific line (diesel/electric/kind of power pickup etc.) or     |
 * |                    | respectively that can be used by a train.                                                                       |
 * |--------------------------------------------------------------------------------------------------------------------------------------|
 * | Length of variable | Minimum Value | Maximum Value | Resolution/formula                                                              |
 * |--------------------------------------------------------------------------------------------------------------------------------------|
 * | 8 bits             | 0             | 255           |                                                                                 |
 * |--------------------------------------------------------------------------------------------------------------------------------------|
 */
