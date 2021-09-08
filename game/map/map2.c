/*
** EPITECH PROJECT, 2019
** PSU_my_sokoban_2019
** File description:
** map2.c
*/
#include "../tetris.h"

void the_malloc_2(Maps *maps, int sizemap, int col)
{
    maps->map2 = malloc(sizeof(char *) * sizemap);
    for (int i = 0; i != sizemap; i++)
        maps->map2[i] = malloc(sizeof(char *) * col);
    maps->void_map = malloc(sizeof(char *) * sizemap);
    for (int i = 0; i != sizemap; i++)
        maps->void_map[i] = malloc(sizeof(char *) * col);
}

char **block_reset(char **map2, int sizemap)
{
    int i = 0;
    int o = 0;

    while (i != sizemap) {
        if (map2[i][o] == 'X')
            map2[i][o] = ' ';
        o++;
        if (map2[i][o] == '\n') {
            o = 0;
            i++;
        }
    }
    return (map2);
}

char **player_reset(char **map2, int sizemap)
{
    int i = 0;
    int o = 0;

    while (map2[i][o] != 'P') {
        o++;
        if (map2[i][o] == '\n') {
            o = 0;
            i++;
        }
    }
    map2[i][o] = ' ';
    map2 = block_reset(map2, sizemap);
    return (map2);
}