/*
** EPITECH PROJECT, 2019
** PSU_my_tetris_2019
** File description:
** move.c
*/
#include "../tetris.h"

void block_maker_6(Blocks *block, int sizemap)
{
    char *buffer = buff("tetrominos/square.tetrimino");

    the_malloc_block_6(block, 5, 3);
    txt_to_map_block_6(block, buffer);
}

char **block_maker(Blocks *block, int sizemap)
{
    block_maker_1(block, sizemap);
    block_maker_2(block, sizemap);
    block_maker_3(block, sizemap);
    block_maker_4(block, sizemap);
    block_maker_5(block, sizemap);
    block_maker_6(block, sizemap);
}