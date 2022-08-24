#include "../include/LReversearea.hpp"

LReversearea::LReversearea(std::uint16_t value) : Variable("L_REVERSEAREA", value) {}

LReversearea::LReversearea(const nlohmann::json & j, const std::string & order) : Variable("L_REVERSEAREA", j, order) {}