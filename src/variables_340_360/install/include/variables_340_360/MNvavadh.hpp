#pragma once
#include <cstdint>
#include <string>
#include <nlohmann/json.hpp>
#include <variables_230_340_360/Variable.hpp>

class MNvavadh : public Variable<std::uint8_t, 5> {
public:
    explicit MNvavadh(std::uint8_t value = 0);
    explicit MNvavadh(const nlohmann::json & j, const std::string & order = "");
};
