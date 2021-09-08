/*
** EPITECH PROJECT, 2019
** PSU_my_tetris_2019
** File description:
** move.c
*/
#include "../tetris.h"

int checker_1(Maps *maps, Positions *position)
{
    int i = 0;

    if (maps->map2[position->y + 1][position->x] != ' ')
        return (1);
    return (0);
}

int checker_2(Maps *maps, Positions *position)
{
    if (maps->map2[position->y + 3][position->x + 3] != ' ' ||
    maps->map2[position->y + 2][position->x + 1] != ' ')
        return (1);
    return (0);
}

int checker_3(Maps *maps, Positions *position)
{
    if (maps->map2[position->y + 4][position->x + 2] != ' ')
            return (1);
    if (maps->map2[position->y + 2][position->x] != ' ' ||
    maps->map2[position->y + 3][position->x + 1] != ' ')
        return (1);
    if (maps->map2[position->y + 2][position->x + 4] != ' ' ||
    maps->map2[position->y + 3][position->x + 3] != ' ')
        return (1);
    return (0);
}

int checker_4(Maps *maps, Positions *position)
{
    if (maps->map2[position->y + 4][position->x] != ' ')
        return (1);
    return (0);
}

int checker(Maps *map, Positions *position)
{
    int checker = 0;

    if (position->block == 1)
        checker = checker_1(map, position);
    if (position->block == 2)
        checker = checker_2(map, position);
    if (position->block == 3)
        checker = checker_3(map, position);
    if (position->block == 4)
        checker = checker_4(map, position);
    if (position->block == 5)
        checker = checker_5(map, position);
    if (position->block == 6)
        checker = checker_6(map, position);
    if (checker == 1) {
        position->end = 1;
        return (1);
    }
    return (0);
}