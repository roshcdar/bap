#include "../include/DRef.hpp"

DRef::DRef(std::int16_t value) : Variable("D_REF", value) {}

DRef::DRef(const nlohmann::json & j, const std::string & order) : Variable("D_REF", j, order) {}