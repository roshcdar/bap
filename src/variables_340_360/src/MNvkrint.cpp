#include "../include/MNvkrint.hpp"

MNvkrint::MNvkrint(std::uint8_t value) : Variable("M_NVKRINT", value) {}

MNvkrint::MNvkrint(const nlohmann::json & j, const std::string & order) : Variable("M_NVKRINT", j, order) {}