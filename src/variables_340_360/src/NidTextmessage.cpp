#include "../include/NidTextmessage.hpp"

NidTextmessage::NidTextmessage(std::uint8_t value) : Variable("NID_TEXTMESSAGE", value) {}

NidTextmessage::NidTextmessage(const nlohmann::json & j, const std::string & order) : Variable("NID_TEXTMESSAGE", j, order) {}