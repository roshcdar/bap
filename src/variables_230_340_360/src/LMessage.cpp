#include "../include/LMessage.hpp"

LMessage::LMessage(std::uint16_t value) : Variable("L_MESSAGE", value) {}

LMessage::LMessage(const nlohmann::json & j, const std::string & order) : Variable("L_MESSAGE", j, order) {}