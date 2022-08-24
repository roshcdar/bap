#pragma once
#include <cstdint>
#include <string>
#include <nlohmann/json.hpp>
#include <variables_230_340_360/Variable.hpp>

class VLoa : public Variable<std::uint8_t, 7> {
public:
    explicit VLoa(std::uint8_t value = 0);
    explicit VLoa(const nlohmann::json & j, const std::string & order = "");
};
