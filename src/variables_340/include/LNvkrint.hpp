#pragma once
#include <variables_340_360/LNvkrint.hpp>

/**
 * |------------------------------------------------------------------------------------------------|
 * | Name                    | Train length step used to define the integrated correction factor Kr |
 * |------------------------------------------------------------------------------------------------|
 * | Description             | This variable is part of the National Values.                        |
 * |------------------------------------------------------------------------------------------------|
 * | Length of variable      | Minimum Value | Maximum Value | Resolution/formula                   |
 * |------------------------------------------------------------------------------------------------|
 * | 5 bits                  |               |               |                                      |
 * |------------------------------------------------------------------------------------------------|
 * | Special/Reserved Values | 0             | 0 m                                                  |
 * |                         |----------------------------------------------------------------------|
 * |                         | 1             | 25 m                                                 |
 * |                         |----------------------------------------------------------------------|
 * |                         | 2             | 50 m                                                 |
 * |                         |----------------------------------------------------------------------|
 * |                         | 3             | 75 m                                                 |
 * |                         |----------------------------------------------------------------------|
 * |                         | 4             | 100 m                                                |
 * |                         |----------------------------------------------------------------------|
 * |                         | 5             | 150 m                                                |
 * |                         |----------------------------------------------------------------------|
 * |                         | 6             | 200 m                                                |
 * |                         |----------------------------------------------------------------------|
 * |                         | 7             | 300 m                                                |
 * |                         |----------------------------------------------------------------------|
 * |                         | ...           | ... (steps of 100 m)                                 |
 * |                         |----------------------------------------------------------------------|
 * |                         | 31            | 2700 m                                               |
 * |------------------------------------------------------------------------------------------------|
 */
