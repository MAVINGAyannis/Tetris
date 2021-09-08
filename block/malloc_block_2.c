/*
** EPITECH PROJECT, 2019
** PSU_my_tetris_2019
** File description:
** move.c
*/
#include "../game/tetris.h"

void the_malloc_block_6(Blocks *block, int sizemap, int col)
{
    block->block_6 = malloc(sizeof(char *) * sizemap);
    for (int i = 0; i != sizemap; i++)
        block->block_6[i] = malloc(sizeof(char *) * col);
}