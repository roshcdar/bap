#pragma once
#include <variables_230_340_360/NcTrain.hpp>

/**
 * Values must be assigned according to 7.3.1.3 in subset 7 version 2.3.0.
 * |----------------------------------------------------------------------------------------------------------------|
 * | Name                    | International Category to which belongs the train                                    |
 * |----------------------------------------------------------------------------------------------------------------|
 * | Description             | Train category used for the static speed profile calculation.                        |
 * |                         |                                                                                      |
 * |                         | Thanks  to  NC_TRAIN, the train knows the SSP it must obey. By receiving a list of   |
 * |                         | static speed profile, thanks to NC_TRAIN, the train can select the SSP it must obey. |
 * |                         |                                                                                      |
 * |                         | Each bit represents one category. A train can belong to various categories.          |
 * |                         | @note So all numbers from 0 to 16777215 can be used as values for this variable.     |
 * |----------------------------------------------------------------------------------------------------------------|
 * | Length of variable      | Minimum Value | Maximum Value | Resolution/formula                                   |
 * |----------------------------------------------------------------------------------------------------------------|
 * | 24 bits                 |               |               |                                                      |
 * |----------------------------------------------------------------------------------------------------------------|
 * | Special/Reserved Values | 0             | Basic static speed profile                                           |
 * |                         |--------------------------------------------------------------------------------------|
 * |                         | 1             | Active tilting  SSP                                                  |
 * |                         |--------------------------------------------------------------------------------------|
 * |                         | 2             | Passive tilting SSP                                                  |
 * |                         |--------------------------------------------------------------------------------------|
 * |                         | 4             | Cross wind sensitivity                                               |
 * |                         |--------------------------------------------------------------------------------------|
 * |                         | 8             | Spare                                                                |
 * |                         |--------------------------------------------------------------------------------------|
 * |                         | 16            | Spare                                                                |
 * |                         |--------------------------------------------------------------------------------------|
 * |                         | 32            | Spare                                                                |
 * |                         |--------------------------------------------------------------------------------------|
 * |                         | 64            | Spare                                                                |
 * |                         |--------------------------------------------------------------------------------------|
 * |                         | 128           | Spare                                                                |
 * |                         |--------------------------------------------------------------------------------------|
 * |                         | 256           | Spare                                                                |
 * |                         |--------------------------------------------------------------------------------------|
 * |                         | 512           | Spare                                                                |
 * |                         |--------------------------------------------------------------------------------------|
 * |                         | 1024          | Spare                                                                |
 * |                         |--------------------------------------------------------------------------------------|
 * |                         | 2048          | Spare                                                                |
 * |                         |--------------------------------------------------------------------------------------|
 * |                         | 4096          | Spare                                                                |
 * |                         |--------------------------------------------------------------------------------------|
 * |                         | 8192          | Spare                                                                |
 * |                         |--------------------------------------------------------------------------------------|
 * |                         | 16384         | Spare                                                                |
 * |----------------------------------------------------------------------------------------------------------------|
*/