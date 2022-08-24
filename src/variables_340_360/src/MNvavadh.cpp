#include "../include/MNvavadh.hpp"

MNvavadh::MNvavadh(std::uint8_t value) : Variable("M_NVAVADH", value) {}

MNvavadh::MNvavadh(const nlohmann::json & j, const std::string & order) : Variable("M_NVAVADH", j, order) {}