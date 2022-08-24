#pragma once
#include <variables_340_360/MVoltage.hpp>

/**
 * |------------------------------------------------------------------------------------------------------------------------|
 * | Name                    | Traction System voltage                                                                      |
 * |------------------------------------------------------------------------------------------------------------------------|
 * | Description             | It indicates the voltage of the traction system installed on a specific line or respectively |
 * |                         | that can be used by an engine.                                                               |
 * |                         |                                                                                              |
 * |                         | The identity of the traction system is given by M_VOLTAGE and, if M_VOLTAGE ≠ 0, by the      |
 * |                         | country identifier of the traction system (NID_CTRACTION).                                   |
 * |------------------------------------------------------------------------------------------------------------------------|
 * | Length of variable      | Minimum Value | Maximum Value | Resolution/formula                                           |
 * |------------------------------------------------------------------------------------------------------------------------|
 * | 4 bits                  |               |               |                                                              |
 * |------------------------------------------------------------------------------------------------------------------------|
 * | Special/Reserved Values | 0             | Line not fitted with any traction system                                     |
 * |                         |----------------------------------------------------------------------------------------------|
 * |                         | 1             | AC 25 kV 50 Hz                                                               |
 * |                         |----------------------------------------------------------------------------------------------|
 * |                         | 2             | AC 15 kV 16.7 Hz                                                             |
 * |                         |----------------------------------------------------------------------------------------------|
 * |                         | 3             | DC 3 kV                                                                      |
 * |                         |----------------------------------------------------------------------------------------------|
 * |                         | 4             | DC 1.5 kV                                                                    |
 * |                         |----------------------------------------------------------------------------------------------|
 * |                         | 5             | DC 600/750 V                                                                 |
 * |                         |----------------------------------------------------------------------------------------------|
 * |                         | 6-15          | Spare                                                                        |
 * |------------------------------------------------------------------------------------------------------------------------|
*/