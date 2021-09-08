/*
** EPITECH PROJECT, 2019
** PSU_my_tetris_2019
** File description:
** move.c
*/
#include "../tetris.h"

int left(Maps *maps, Positions *position)
{
    int y = 1;
    int x = 1;

    if (position->key == 68) {
        while (x != 17) {
            if (maps->map[y][x] == '-') {
                y = 1;
                x++;
            }
            if (maps->map[y][x] == '*') {
                if (maps->map2[y][x - 1] != ' ')
                    return (0);
                maps->map[y][x] = ' ';
                maps->map[y][x - 1] = '*';
                maps->map2[y][x] = ' ';
                maps->map2[y][x - 1] = '*';
            }
            y++;
        }
    }
}

int right(Maps *maps, Positions *position)
{
    int y = 1;
    int x = 16;

    if (position->key == 67) {
        while (x != 0) {
            if (maps->map[y][x] == '-') {
                y = 1;
                x--;
            }
            if (maps->map[y][x] == '*') {
                if (maps->map2[y][x + 1] != ' ')
                    return (0);
            maps->map[y][x] = ' ';
            maps->map[y][x + 1] = '*';
            maps->map2[y][x] = ' ';
            maps->map2[y][x + 1] = '*';
            }
            y++;
        }
    }
}

int down(Maps *maps, Positions *position)
{
    int y = 18;
    int x = 0;

    if (position->key == 66) {
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
    }
    return (0);
}

void mover(Maps *maps, Positions *position)
{
    quit_exit(position);
    down(maps, position);
    left(maps, position);
    right(maps, position);
    space_drop(maps, position);
}