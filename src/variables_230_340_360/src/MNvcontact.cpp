#include "../include/MNvcontact.hpp"

MNvcontact::MNvcontact(std::uint8_t value) : Variable("M_NVCONTACT", value) {}

MNvcontact::MNvcontact(const nlohmann::json & j, const std::string & order) : Variable("M_NVCONTACT", j, order) {}