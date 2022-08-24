#pragma once
#include <cstdint>

/**
 * Check, if value in hexadecimal notation ends with sequence of letters F or
 * doesn't have any letter F at all.
 * @param[in] value value, which is checked
 * @returns true, if value ends with sequence of letters F or doesn't have any F at all, false otherwise
 */
bool checkHexF(std::uint64_t value);
