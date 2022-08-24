#pragma once
#include <cstdint>
#include <string>
#include <nlohmann/json.hpp>
#include "Variable.hpp"

class VTsr : public Variable<std::uint8_t, 7> {
public:
    explicit VTsr(std::uint8_t value = 0);
    explicit VTsr(const nlohmann::json & j, const std::string & order = "");
};
