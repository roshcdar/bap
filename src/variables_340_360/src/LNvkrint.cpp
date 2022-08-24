#include "../include/LNvkrint.hpp"

LNvkrint::LNvkrint(std::uint8_t value) : Variable("L_NVKRINT", value) {}

LNvkrint::LNvkrint(const nlohmann::json & j, const std::string & order) : Variable("L_NVKRINT", j, order) {}