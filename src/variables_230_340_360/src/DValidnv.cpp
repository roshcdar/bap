#include "../include/DValidnv.hpp"

DValidnv::DValidnv(std::uint16_t value) : Variable("D_VALIDNV", value) {}

DValidnv::DValidnv(const nlohmann::json & j, const std::string & order) : Variable("D_VALIDNV", j, order) {}