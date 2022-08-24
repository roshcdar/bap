#include "../include/QLxstatus.hpp"

QLxstatus::QLxstatus(std::uint8_t value) : Variable("Q_LXSTATUS", value) {}

QLxstatus::QLxstatus(const nlohmann::json & j, const std::string & order) : Variable("Q_LXSTATUS", j, order) {}