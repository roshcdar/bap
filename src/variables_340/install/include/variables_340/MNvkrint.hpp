#pragma once
#include <variables_340_360/MNvkrint.hpp>

/**
 * |--------------------------------------------------------------------------------------------------------|
 * | Name               | Integrated correction factor Kr                                                   |
 * |--------------------------------------------------------------------------------------------------------|
 * | Description        | This is the train length dependent integrated correction factor.                  |
 * |                    |                                                                                   |
 * |                    | M_NVKRINT(l) is valid for a train length between L_NVKRINT(l) and L_NVKRINT(l+1). |
 * |                    | M_NVKRINT is valid between 0m and L_NVKRINT(1).                                   |
 * |                    |                                                                                   |
 * |                    | This variable is part of the National Values.                                     |
 * |--------------------------------------------------------------------------------------------------------|
 * | Length of variable | Minimum Value | Maximum Value | Resolution/formula                                |
 * |--------------------------------------------------------------------------------------------------------|
 * | 5 bits             | 0             | 31           | 0.05                                               |
 * |--------------------------------------------------------------------------------------------------------|
 */
