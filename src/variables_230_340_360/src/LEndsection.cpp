#include "../include/LEndsection.hpp"

LEndsection::LEndsection(std::uint16_t value) : Variable("L_ENDSECTION", value) {}

LEndsection::LEndsection(const nlohmann::json & j, const std::string & order) : Variable("L_ENDSECTION", j, order) {}