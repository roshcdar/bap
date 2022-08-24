#pragma once
#include <variables_230_340_360/LTafdisplay.hpp>

/**
 * |----------------------------------------------------------------------------------------------|
 * | Name               | Length on which a track ahead free request shall be displayed           |
 * |----------------------------------------------------------------------------------------------|
 * | Length of variable | Minimum Value | Maximum Value | Resolution/formula                      |
 * |----------------------------------------------------------------------------------------------|
 * | 15 bits            | 0             | 32767         | 10 cm, 1 m or 10 m depending on Q_SCALE |
 * |----------------------------------------------------------------------------------------------|
 *
 * @note There is a mistake in definition maximum value in subset 7 version 2.3.0.
 * Maximum value is defined there as 32766, but it is a mistake according to doc. Ing. Martin Leso, Ph.D.
 */
