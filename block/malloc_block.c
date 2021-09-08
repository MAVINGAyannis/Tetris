/*
** EPITECH PROJECT, 2019
** PSU_my_tetris_2019
** File description:
** move.c
*/
#include "../game/tetris.h"

void the_malloc_block_1(Blocks *block, int sizemap, int col)
{
    block->block_1 = malloc(sizeof(char *) * sizemap);
    for (int i = 0; i != sizemap; i++)
        block->block_1[i] = malloc(sizeof(char *) * col);
}

void the_malloc_block_2(Blocks *block, int sizemap, int col)
{
    block->block_2 = malloc(sizeof(char *) * sizemap);
    for (int i = 0; i != sizemap; i++)
        block->block_2[i] = malloc(sizeof(char *) * col);
}

void the_malloc_block_3(Blocks *block, int sizemap, int col)
{
    block->block_3 = malloc(sizeof(char *) * sizemap);
    for (int i = 0; i != sizemap; i++)
        block->block_3[i] = malloc(sizeof(char *) * col);
}

void the_malloc_block_4(Blocks *block, int sizemap, int col)
{
    block->block_4 = malloc(sizeof(char *) * sizemap);
    for (int i = 0; i != sizemap; i++)
        block->block_4[i] = malloc(sizeof(char *) * col);
}

void the_malloc_block_5(Blocks *block, int sizemap, int col)
{
    block->block_5 = malloc(sizeof(char *) * sizemap);
    for (int i = 0; i != sizemap; i++)
        block->block_5[i] = malloc(sizeof(char *) * col);
}