#include "../include/NidPrvbg.hpp"

NidPrvbg::NidPrvbg(std::uint32_t value) : Variable("NID_PRVBG", value) {}

NidPrvbg::NidPrvbg(const nlohmann::json & j, const std::string & order) : Variable("NID_PRVBG", j, order) {}