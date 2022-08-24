#include "../include/DEndtimerstartloc.hpp"

DEndtimerstartloc::DEndtimerstartloc(std::uint16_t value) : Variable("D_ENDTIMERSTARTLOC", value) {}

DEndtimerstartloc::DEndtimerstartloc(const nlohmann::json & j, const std::string & order) : Variable("D_ENDTIMERSTARTLOC", j, order) {}