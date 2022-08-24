#pragma once
#include <variables_230_340_360/QText.hpp>

/**
 * Values must be assigned according to 7.3.1.3 in subset 7 version 2.3.0.
 * |-------------------------------------------------------------------------------------------------|
 * | Name               | Fixed message to be displayed                                              |
 * |-------------------------------------------------------------------------------------------------|
 * | Description        | Q_TEXT is a pointer to select a fixed text message from the defined table. |
 * |                    | The language selected by the driver for the MMI shall be used additionally |
 * |                    | as a qualifier to choose the appropriate language table.                   |
 * |-------------------------------------------------------------------------------------------------|
 * | Length of variable | Minimum Value | Maximum Value | Resolution/formula                         |
 * |-------------------------------------------------------------------------------------------------|
 * | 8 bits             | 0             | 255           |                                            |
 * |-------------------------------------------------------------------------------------------------|
 */
