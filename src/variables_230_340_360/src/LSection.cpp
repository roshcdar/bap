#include "../include/LSection.hpp"

LSection::LSection(std::uint16_t value) : Variable("L_SECTION", value) {}

LSection::LSection(const nlohmann::json & j, const std::string & order) : Variable("L_SECTION", j, order) {}