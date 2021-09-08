/*
** EPITECH PROJECT, 2019
** PSU_my_tetris_2019
** File description:
** move.c
*/
#include "tetris.h"

void quit_exit(Positions *position)
{
    if (position->key == 113) {
        clear();
        endwin();
        exit(1);
    }
}

void variable_positioner(Positions *position)
{
    position->x = 0;
    position->y = 0;
    position->block = 0;
    position->end = 0;
    position->key = 0;
    position->score = 0;
}

void end_blocks(Blocks *block, Maps *maps, Positions *position)
{
    if (position->end == 1) {
        voidmap_to_map(maps);
        block_placer(block, maps, position);
        position->score += 50;
        position->block = 0;
        position->end = 0;
        position->key = 0;
    }
}