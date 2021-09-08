/*
** EPITECH PROJECT, 2019
** PSU_my_tetris_2019
** File description:
** move.c
*/
#include "../game/tetris.h"

void txt_to_map_block_6(Blocks *block, char *buffer)
{
    int z = 0;
    int o = 0;
    int v = 0;

    while (buffer[v] != '\0') {
        block->block_6[o][z] = buffer[v];
        v++;
        z++;
        if (buffer[v] == '\n') {
            block->block_6[o][z] = '\n';
            o++;
            v++;
            z = 0;
        }
    }
}