#pragma once
#include <cstdint>
#include <string>
#include <nlohmann/json.hpp>
#include <variables_230_340_360/Variable.hpp>

class NidStm : public Variable<std::uint8_t, 8> {
public:
    explicit NidStm(std::uint8_t value = 0);
    explicit NidStm(const nlohmann::json & j, const std::string & order = "");
};

/**
 * Values must be assigned according to 7.3.1.3 in subset 7 version 2.3.0.
 * |--------------------------------------------------------------------------------------------------------------------------------------|
 * | Name               | STM identity                                                                                                    |
 * |--------------------------------------------------------------------------------------------------------------------------------------|
 * | Description        | One  value  of  this  variable  represents  the  identity  of  an  STM  reflecting  each  composition  of       |
 * |                    | national infrastructure.                                                                                        |
 * |--------------------------------------------------------------------------------------------------------------------------------------|
 * | Length of variable | Minimum Value | Maximum Value | Resolution/formula                                                              |
 * |--------------------------------------------------------------------------------------------------------------------------------------|
 * | 8 bits             | 0             | 255           |                                                                                 |
 * |--------------------------------------------------------------------------------------------------------------------------------------|
 */