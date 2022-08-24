#include "../include/NidLrbg.hpp"

NidLrbg::NidLrbg(std::uint32_t value) : Variable("NID_LRBG", value) {}

NidLrbg::NidLrbg(const nlohmann::json & j, const std::string & order) : Variable("NID_LRBG", j, order) {}