#include "../include/NidPrvlrbg.hpp"

NidPrvlrbg::NidPrvlrbg(std::uint32_t value) : Variable("NID_PRVLRBG", value) {}

NidPrvlrbg::NidPrvlrbg(const nlohmann::json & j, const std::string & order) : Variable("NID_PRVLRBG", j, order) {}