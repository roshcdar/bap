#pragma once
#include <cstdint>
#include <string>
#include <nlohmann/json.hpp>
#include "Variable.hpp"

class VReleaseol : public Variable<std::uint8_t, 7> {
public:
    explicit VReleaseol(std::uint8_t value = 0);
    explicit VReleaseol(const nlohmann::json & j, const std::string & order = "");
};
