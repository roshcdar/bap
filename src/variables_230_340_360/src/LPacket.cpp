#include "../include/LPacket.hpp"

LPacket::LPacket(std::uint16_t value) : Variable("L_PACKET", value) {}

LPacket::LPacket(const nlohmann::json & j, const std::string & order) : Variable("L_PACKET", j, order) {}