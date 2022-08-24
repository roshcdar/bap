#pragma once
#include <variables_340_360/MNvkvint.hpp>

/**
 * |--------------------------------------------------------------------------------------------|
 * | Name               | Integrated correction factor Kv                                       |
 * |--------------------------------------------------------------------------------------------|
 * | Description        | This is the speed dependent integrated correction factor.             |
 * |                    |                                                                       |
 * |                    | M_NVKVINT(n) is valid for an estimated speed between V_NVKVINT(n) and |
 * |                    | V_NVKVINT(n+1). M_NVKVINT is valid between 0 km/h and V_NVKVINT(1).   |
 * |                    |                                                                       |
 * |                    | This variable is part of the National Values.                         |
 * |--------------------------------------------------------------------------------------------|
 * | Length of variable | Minimum Value | Maximum Value | Resolution/formula                    |
 * |--------------------------------------------------------------------------------------------|
 * | 7 bits             | 0             | 127           | 0.02                                  |
 * |--------------------------------------------------------------------------------------------|
 */
