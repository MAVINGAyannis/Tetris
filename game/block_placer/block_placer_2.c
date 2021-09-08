/*
** EPITECH PROJECT, 2019
** PSU_my_tetris_2019
** File description:
** move.c
*/
#include "../tetris.h"

void block_1_placer(Blocks *block, Maps *maps, Positions *position)
{
    maps->map[position->y][position->x] = '*';
    maps->map2[position->y][position->x] = '*';
    position->block = 1;
}

void block_2_placer(Blocks *block, Maps *maps, Positions *position)
{
    int y = 1;
    int x = 0;
    int p_y = 0;
    int p_x = 0;

    while (y != 4) {
        maps->map[position->y + p_y][position->x + p_x] = block->block_2[y][x];
        maps->map2[position->y + p_y][position->x + p_x] = block->block_2[y][x];
        x++;
        p_x++;
        if (block->block_2[y][x] == '\n') {
            x = 0;
            p_x = 0;
            y++;
            p_y++;
        }
    }
    position->block = 2;
}

void block_3_placer(Blocks *block, Maps *maps, Positions *position)
{
    int y = 1;
    int x = 0;
    int p_y = 0;
    int p_x = 0;

    while (y != 5) {
        maps->map[position->y + p_y][position->x + p_x] = block->block_3[y][x];
        maps->map2[position->y + p_y][position->x + p_x] = block->block_3[y][x];
        x++;
        p_x++;
        if (block->block_3[y][x] == '\n') {
            x = 0;
            p_x = 0;
            y++;
            p_y++;
        }
    }
    position->block = 3;
}

void block_4_placer(Blocks *block, Maps *maps, Positions *position)
{
    int y = 1;
    int x = 0;
    int p_y = 0;
    int p_x = 0;

    while (y != 5) {
        maps->map[position->y + p_y][position->x + p_x] = block->block_4[y][x];
        maps->map2[position->y + p_y][position->x + p_x] = block->block_4[y][x];
        x++;
        p_x++;
        if (block->block_4[y][x] == '\n') {
            x = 0;
            p_x = 0;
            y++;
            p_y++;
        }
    }
    position->block = 4;
}

void block_5_placer(Blocks *block, Maps *maps, Positions *position)
{
    int y = 1;
    int x = 0;
    int p_y = 0;
    int p_x = 0;

    while (y != 4) {
        maps->map[position->y + p_y][position->x + p_x] = block->block_5[y][x];
        maps->map2[position->y + p_y][position->x + p_x] = block->block_5[y][x];
        x++;
        p_x++;
        if (block->block_5[y][x] == '\n') {
            x = 0;
            p_x = 0;
            y++;
            p_y++;
        }
    }
    position->block = 5;
}