#pragma once
#include <cstdint>
#include <string>
#include <nlohmann/json.hpp>
#include "Variable.hpp"

class VMaxtrain : public Variable<std::uint8_t, 7> {
public:
    explicit VMaxtrain(std::uint8_t value = 0);
    explicit VMaxtrain(const nlohmann::json & j, const std::string & order = "");
};
