/*
** EPITECH PROJECT, 2019
** PSU_my_tetris_2019
** File description:
** move.c
*/
#include "../tetris.h"

void block_maker_1(Blocks *block, int sizemap)
{
    char *buffer = buff("tetrominos/5.tetrimino");
    the_malloc_block_1(block, 5, 3);
    txt_to_map_block_1(block, buffer);
}

void block_maker_2(Blocks *block, int sizemap)
{
    char *buffer = buff("tetrominos/6.tetrimino");
    the_malloc_block_2(block, 5, 3);
    txt_to_map_block_2(block, buffer);
}

void block_maker_3(Blocks *block, int sizemap)
{
    char *buffer = buff("tetrominos/7.tetrimino");
    the_malloc_block_3(block, 5, 3);
    txt_to_map_block_3(block, buffer);
}

void block_maker_4(Blocks *block, int sizemap)
{
    char *buffer = buff("tetrominos/bar.tetrimino");
    the_malloc_block_4(block, 5, 3);
    txt_to_map_block_4(block, buffer);
}

void block_maker_5(Blocks *block, int sizemap)
{
    char *buffer = buff("tetrominos/inverted-L.tetrimino");
    the_malloc_block_5(block, 5, 3);
    txt_to_map_block_5(block, buffer);
}