#include "../include/DCycloc.hpp"

DCycloc::DCycloc(std::uint16_t value) : Variable("D_CYCLOC", value) {}

DCycloc::DCycloc(const nlohmann::json & j, const std::string & order) : Variable("D_CYCLOC", j, order) {}