#include "../include/TCycrqst.hpp"

TCycrqst::TCycrqst(std::uint8_t value) : Variable("T_CYCRQST", value) {}

TCycrqst::TCycrqst(const nlohmann::json & j, const std::string & order) : Variable("T_CYCRQST", j, order) {}