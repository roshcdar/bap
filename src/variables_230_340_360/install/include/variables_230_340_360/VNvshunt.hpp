#pragma once
#include <cstdint>
#include <string>
#include <nlohmann/json.hpp>
#include "Variable.hpp"

class VNvshunt : public Variable<std::uint8_t, 7> {
public:
    explicit VNvshunt(std::uint8_t value = 0);
    explicit VNvshunt(const nlohmann::json & j, const std::string & order = "");
};
