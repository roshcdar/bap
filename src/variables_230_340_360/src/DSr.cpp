#include "../include/DSr.hpp"

DSr::DSr(std::uint16_t value) : Variable("D_SR", value) {}

DSr::DSr(const nlohmann::json & j, const std::string & order) : Variable("D_SR", j, order) {}