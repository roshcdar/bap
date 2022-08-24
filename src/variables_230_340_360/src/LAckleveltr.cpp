#include "../include/LAckleveltr.hpp"

LAckleveltr::LAckleveltr(std::uint16_t value) : Variable("L_ACKLEVELTR", value) {}

LAckleveltr::LAckleveltr(const nlohmann::json & j, const std::string & order) : Variable("L_ACKLEVELTR", j, order) {}