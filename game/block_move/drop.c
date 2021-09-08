/*
** EPITECH PROJECT, 2019
** PSU_my_tetris_2019
** File description:
** move.c
*/
#include "../tetris.h"

int drop_down(Maps *maps, Positions *position)
{
    int y = 18;
    int x = 0;

    x = 0;
    while (y != 0) {
        if (maps->map[y][x] == '*') {
            if (maps->map2[y + 1][x] == ' ') {
                maps->map[y][x] = maps->void_map[y][x];
                maps->map2[y][x] = maps->void_map[y][x];
                maps->map[y + 1][x] = '*';
                maps->map2[y + 1][x] = '*';
            } else if (maps->map2[y + 1][x] != ' ') {
                position->end = 1;
                return (1);
            }
        }
        x++;
        if (maps->map[y][x] == '|') {
            y--;
            x = 1;
        }
    }
    position->y = y;
    position->x = x;
    return (0);
}

void space_drop(Maps *maps, Positions *position)
{
    int i = 0;

    if (position->key == 120) {
        while (i == 0)
            i = drop_down(maps, position);
    }
}