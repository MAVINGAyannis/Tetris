/*
** EPITECH PROJECT, 2019
** PSU_my_tetris_2019
** File description:
** move.c
*/
#include "../tetris.h"

int checker_6(Maps *maps, Positions *position)
{
    int i = 0;

    if (maps->map2[position->y + 2][position->x + 0] != ' ' ||
    maps->map2[position->y + 2][position->x + 0] != ' ')
        return (1);
    return (i);
}

int checker_5(Maps *maps, Positions *position)
{
    int i = 0;

    if (maps->map2[position->y + 3][position->x] != ' ' ||
        maps->map2[position->y + 3][position->x + 1] != ' ')
        return (1);
    return (i);
}