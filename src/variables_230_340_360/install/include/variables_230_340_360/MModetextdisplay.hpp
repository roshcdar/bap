#pragma once
#include <cstdint>
#include <string>
#include <nlohmann/json.hpp>
#include "Variable.hpp"

class MModetextdisplay : public Variable<std::uint8_t, 4> {
public:
    explicit MModetextdisplay(std::uint8_t value = 0);
    explicit MModetextdisplay(const nlohmann::json & j, const std::string & order = "");
};
