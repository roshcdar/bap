#include "../include/QNvsrbktrg.hpp"

QNvsrbktrg::QNvsrbktrg(std::uint8_t value) : Variable("Q_NVSRBKTRG", value) {}

QNvsrbktrg::QNvsrbktrg(const nlohmann::json & j, const std::string & order) : Variable("Q_NVSRBKTRG", j, order) {}