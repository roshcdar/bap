#include "../include/NidMessage.hpp"

NidMessage::NidMessage(std::uint8_t value) : Variable("NID_MESSAGE", value) {}

NidMessage::NidMessage(const nlohmann::json & j, const std::string & order) : Variable("NID_MESSAGE", j, order) {}