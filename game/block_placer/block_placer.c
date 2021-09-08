/*
** EPITECH PROJECT, 2019
** PSU_my_tetris_2019
** File description:
** move.c
*/
#include "../tetris.h"

int rand_a_b(int a, int b)
{
    return (rand() % (b - a) + a);
}

void block_6_placer(Blocks *block, Maps *maps, Positions *position)
{
    int y = 1;
    int x = 0;
    int p_y = 0;
    int p_x = 0;

    while (y != 3) {
        maps->map[position->y + p_y][position->x + p_x] = block->block_6[y][x];
        maps->map2[position->y + p_y][position->x + p_x] = block->block_6[y][x];
        x++;
        p_x++;
        if (block->block_6[y][x] == '\n') {
            x = 0;
            p_x = 0;
            y++;
            p_y++;
        }
    }
    position->block = 6;
}

void block_placer(Blocks *block, Maps *maps, Positions *position)
{
    int random = rand_a_b(1, 7);
    position->y = 1;
    position->x = 7;
    position->block = random;

    if (random == 1)
        block_1_placer(block, maps, position);
    if (random == 2)
        block_2_placer(block, maps, position);
    if (random == 3)
        block_3_placer(block, maps, position);
    if (random == 4)
        block_4_placer(block, maps, position);
    if (random == 5)
        block_5_placer(block, maps, position);
    if (random == 6)
        block_6_placer(block, maps, position);
}