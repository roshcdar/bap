#include "../include/TMar.hpp"

TMar::TMar(std::uint8_t value) : Variable("T_MAR", value) {}

TMar::TMar(const nlohmann::json & j, const std::string & order) : Variable("T_MAR", j, order) {}