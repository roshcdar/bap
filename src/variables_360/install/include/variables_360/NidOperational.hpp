#pragma once
#include <variables_340_360/NidOperational.hpp>

/**
 * |-------------------------------------------------------------------------------------------------------------------------------|
 * | Name                    | Train Running Number                                                                                |
 * |-------------------------------------------------------------------------------------------------------------------------------|
 * | Description             | This is the operational train running number. The NID_OPERATIONAL consists of up to 8 digits        |
 * |                         | which are entered left adjusted into the data field, the leftmost digit is the digit to be entered  |
 * |                         | first. In case the NID_OPERATIONAL is shorter than 8 digits, the remaining space is to be filled    |
 * |                         | with special character “F”.                                                                         |
 * |-------------------------------------------------------------------------------------------------------------------------------|
 * | Length of variable      | Minimum Value        | Maximum Value                     | Resolution/formula                       |
 * |-------------------------------------------------------------------------------------------------------------------------------|
 * | 32 bits                 | 0                    | 9999 9999 (Binary Coded Decimal) | Binary Coded Decimal                      |
 * |-------------------------------------------------------------------------------------------------------------------------------|
 * | Special/Reserved Values | For each digit;                                                                                     |
 * |                         |-----------------------------------------------------------------------------------------------------|
 * |                         | Values A–E           | Spare                                                                        |
 * |                         |-----------------------------------------------------------------------------------------------------|
 * |                         | F                    | Use value F for digit to indicate no digit (if number shorter than 8 digits) |
 * |                         |-----------------------------------------------------------------------------------------------------|
 * |                         | FFFF FFFF            | Spare                                                                        |
 * |-------------------------------------------------------------------------------------------------------------------------------|
 */
