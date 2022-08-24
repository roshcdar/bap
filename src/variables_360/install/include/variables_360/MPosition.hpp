#pragma once
#include <variables_340_360/MPosition.hpp>

/**
 * |-----------------------------------------------------------------------------------------------------------------------|
 * | Name                    | Track kilometre reference value                                                             |
 * |-----------------------------------------------------------------------------------------------------------------------|
 * | Description             | The geographical position reporting function uses this variables content as a reference     |
 * |                         | value.                                                                                      |
 * |-----------------------------------------------------------------------------------------------------------------------|
 * | Length of variable      | Minimum Value     | Maximum Value      | Resolution/formula                                 |
 * |-----------------------------------------------------------------------------------------------------------------------|
 * | 24 bits                 | 0                 | 9999999            | 1 m                                                |
 * |-----------------------------------------------------------------------------------------------------------------------|
 * | Special/Reserved Values | 10000000-16777214 | Spare                                                                   |
 * |                         |---------------------------------------------------------------------------------------------|
 * |                         | 16777215          | No more geographical position calculation after this reference location |
 * |-----------------------------------------------------------------------------------------------------------------------|
 */