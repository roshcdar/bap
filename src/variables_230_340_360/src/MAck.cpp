#include "../include/MAck.hpp"

MAck::MAck(std::uint8_t value) : Variable("M_ACK", value) {}

MAck::MAck(const nlohmann::json & j, const std::string & order) : Variable("M_ACK", j, order) {}