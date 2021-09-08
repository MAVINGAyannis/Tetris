/*
** EPITECH PROJECT, 2019
** PSU_my_tetris_2019
** File description:
** move.c
*/
#include "../tetris.h"

void map_to_map2(Maps *maps)
{
    int x = 0;
    int y = 0;

    while (y != 19) {
        maps->map2[y][x] = maps->map[y][x];
        x++;
        if (maps->map[y][x] == '\n') {
            y++;
            x = 0;
        }
    }
}

void voidmap_to_map(Maps *maps)
{
    int x = 0;
    int y = 0;

    while (y != 19) {
        maps->map[y][x] = maps->void_map[y][x];
        x++;
        if (maps->void_map[y][x] == '\n') {
            y++;
            x = 0;
        }
    }
}

void map2_to_map(Maps *maps)
{
    int x = 0;
    int y = 0;

    while (y != 19) {
        maps->map[y][x] = maps->map2[y][x];
        x++;
        if (maps->map2[y][x] == '\n') {
            y++;
            x = 0;
        }
    }
}