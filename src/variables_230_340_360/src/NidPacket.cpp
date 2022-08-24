#include "../include/NidPacket.hpp"

NidPacket::NidPacket(std::uint8_t value) : Variable("NID_PACKET", value) {}

NidPacket::NidPacket(const nlohmann::json & j, const std::string & order) : Variable("NID_PACKET", j, order) {}