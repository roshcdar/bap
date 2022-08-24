#include "../include/DSectiontimerstoploc.hpp"

DSectiontimerstoploc::DSectiontimerstoploc(std::uint16_t value) : Variable("D_SECTIONTIMERSTOPLOC", value) {}

DSectiontimerstoploc::DSectiontimerstoploc(const nlohmann::json & j, const std::string & order) : Variable("D_SECTIONTIMERSTOPLOC", j, order) {}