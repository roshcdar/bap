#pragma once
#include <cstdint>
#include <string>
#include <nlohmann/json.hpp>
#include <variables_230_340_360/Variable.hpp>

class VNvlimsuperv : public Variable<std::uint8_t, 7> {
public:
    explicit VNvlimsuperv(std::uint8_t value = 0);
    explicit VNvlimsuperv(const nlohmann::json & j, const std::string & order = "");
};
