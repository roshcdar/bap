#pragma once
#include <cstdint>
#include <string>
#include <nlohmann/json.hpp>
#include <variables_230_340_360/Variable.hpp>

class NidPrvbg : public Variable<std::uint32_t, 24> {
public:
    explicit NidPrvbg(std::uint32_t value = 0);
    explicit NidPrvbg(const nlohmann::json & j, const std::string & order = "");
};

/**
 * |----------------------------------------------------------------------------------------------------------------------------|
 * | Name                    | Identity of  the previous balise group                                                           |
 * |----------------------------------------------------------------------------------------------------------------------------|
 * | Description             | Previous balise group detected when running towards the balise group identified as LRBG with no  |
 * |                         | change of direction in-between.                                                                  |
 * |                         |                                                                                                  |
 * |                         | Country/region identity (NID_C) + balise identity number of the previous balise group (NID_BG).  |
 * |----------------------------------------------------------------------------------------------------------------------------|
 * | Length of variable      | Minimum Value | Maximum Value | Resolution/formula                                               |
 * |----------------------------------------------------------------------------------------------------------------------------|
 * | 24 bits                 | 0             | 16777214      |                                                                  |
 * |----------------------------------------------------------------------------------------------------------------------------|
 * | Special/Reserved Values | 16777215      | Unknown                                                                          |
 * |----------------------------------------------------------------------------------------------------------------------------|
 */