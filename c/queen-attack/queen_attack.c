#include <stdbool.h>
#include <stdlib.h>

#include "queen_attack.h"

bool valid_position(position_t pos) {
    return pos.row >= 0 && pos.row < 8 &&
        pos.column >= 0 && pos.column < 8;
}

bool position_equal(position_t pos1, position_t pos2) {
    return pos1.row == pos2.row && pos1.column == pos2.column;
}

attack_status_t can_attack(position_t queen_1, position_t queen_2) {
    if (!valid_position(queen_1) || !valid_position(queen_2) || position_equal(queen_1, queen_2))
            return INVALID_POSITION;

    // Same row
    if (queen_1.row == queen_2.row)
        return CAN_ATTACK;

    // Same column
    if (queen_1.column == queen_2.column)
        return CAN_ATTACK;

    if (abs(queen_1.row - queen_2.row) == abs(queen_1.column - queen_2.column))
        return CAN_ATTACK;

    return CAN_NOT_ATTACK;
}

