#include "../include/TCycloc.hpp"

TCycloc::TCycloc(std::uint8_t value) : Variable("T_CYCLOC", value) {}

TCycloc::TCycloc(const nlohmann::json & j, const std::string & order) : Variable("T_CYCLOC", j, order) {}