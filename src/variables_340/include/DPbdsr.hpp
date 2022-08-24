#pragma once
#include <variables_340_360/DPbdsr.hpp>

/**
 * |---------------------------------------------------------------------------------------------------------------------------|
 * | Name               | Incremental distance to the start of the next speed restriction to ensure permitted braking distance |
 * |---------------------------------------------------------------------------------------------------------------------------|
 * | Length of variable | Minimum Value | Maximum Value | Resolution/formula                                                   |
 * |---------------------------------------------------------------------------------------------------------------------------|
 * | 15 bits            | 0             | 32767         | 10 cm, 1 m or 10 m depending on Q_SCALE                              |
 * |---------------------------------------------------------------------------------------------------------------------------|
 */
