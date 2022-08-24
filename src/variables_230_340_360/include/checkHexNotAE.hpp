#pragma once
#include <cstdint>

/**
 * Check, if value in hexadecimal notation doesn't have letters A-E.
 * @param[in] value value, which is checked
 * @returns true, if value in hexadecimal notation doesn't have letters A-E, false otherwise
 */
bool checkHexNotAE(std::uint64_t value);
