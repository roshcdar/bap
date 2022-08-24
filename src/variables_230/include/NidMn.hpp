#pragma once
#include <variables_230_340_360/NidMn.hpp>

/**
 * |----------------------------------------------------------------------------------------------------------------------------------------------------|
 * | Name                    | Identity of Radio Network                                                                                                |
 * |----------------------------------------------------------------------------------------------------------------------------------------------------|
 * | Description             | The NID_MN identifies the GSM-R network the calling mobile station has to register with. The NID_MN consists of          |
 * |                         | up to 6 digits which are entered left adjusted into the data field, the leftmost digit is the digit to be dialled first. |
 * |                         | In case the NID_MN is shorter than 6 digits, the remaining space is to be filled with special character “F”. For further |
 * |                         | information about NID_MN refer to Subset-54.                                                                             |
 * |----------------------------------------------------------------------------------------------------------------------------------------------------|
 * | Length of variable      | Minimum Value | Maximum Value | Resolution/formula                                                                       |
 * |----------------------------------------------------------------------------------------------------------------------------------------------------|
 * | 24 bits                 | 0             | 10066329      | Binary Coded Decimal                                                                     |
 * |----------------------------------------------------------------------------------------------------------------------------------------------------|
 * | Special/Reserved Values | For each digit;                                                                                                          |
 * |                         |--------------------------------------------------------------------------------------------------------------------------|
 * |                         | Values A–E    | Not Used                                                                                                 |
 * |                         |--------------------------------------------------------------------------------------------------------------------------|
 * |                         | F             | Use value F for digit to indicate no digit (if number shorter than 6 digits)                             |
 * |                         |--------------------------------------------------------------------------------------------------------------------------|
 * |                         | FFFFFF        | @note According to doc. Ing. Martin Leso, Ph.D. this value isn't used.                                   |
 * |----------------------------------------------------------------------------------------------------------------------------------------------------|
 */
