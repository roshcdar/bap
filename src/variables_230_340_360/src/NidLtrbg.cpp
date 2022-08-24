#include "../include/NidLtrbg.hpp"

NidLtrbg::NidLtrbg(std::uint32_t value) : Variable("NID_LTRBG", value) {}

NidLtrbg::NidLtrbg(const nlohmann::json & j, const std::string & order) : Variable("NID_LTRBG", j, order) {}