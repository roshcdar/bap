#include "../include/TNvcontact.hpp"

TNvcontact::TNvcontact(std::uint8_t value) : Variable("T_NVCONTACT", value) {}

TNvcontact::TNvcontact(const nlohmann::json & j, const std::string & order) : Variable("T_NVCONTACT", j, order) {}