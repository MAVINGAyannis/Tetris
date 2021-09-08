/*
** EPITECH PROJECT, 2019
** PSU_my_tetris_2019
** File description:
** move.c
*/
#include "../game/tetris.h"

void txt_to_map_block_1(Blocks *block, char *buffer)
{
    int z = 0;
    int o = 0;
    int v = 0;

    while (buffer[v] != '\0') {
        block->block_1[o][z] = buffer[v];
        v++;
        z++;
        if (buffer[v] == '\n') {
            block->block_1[o][z] = '\n';
            o++;
            +v++;
            z = 0;
        }
    }
}

void txt_to_map_block_2(Blocks *block, char *buffer)
{
    int z = 0;
    int o = 0;
    int v = 0;

    while (buffer[v] != '\0') {
        block->block_2[o][z] = buffer[v];
        v++;
        z++;
        if (buffer[v] == '\n') {
            block->block_2[o][z] = '\n';
            o++;
            +v++;
            z = 0;
        }
    }
}

void txt_to_map_block_3(Blocks *block, char *buffer)
{
    int z = 0;
    int o = 0;
    int v = 0;

    while (buffer[v] != '\0') {
        block->block_3[o][z] = buffer[v];
        v++;
        z++;
        if (buffer[v] == '\n') {
            block->block_3[o][z] = '\n';
            o++;
            +v++;
            z = 0;
        }
    }
}

void txt_to_map_block_4(Blocks *block, char *buffer)
{
    int z = 0;
    int o = 0;
    int v = 0;

    while (buffer[v] != '\0') {
        block->block_4[o][z] = buffer[v];
        v++;
        z++;
        if (buffer[v] == '\n') {
            block->block_4[o][z] = '\n';
            o++;
            +v++;
            z = 0;
        }
    }
}

void txt_to_map_block_5(Blocks *block, char *buffer)
{
    int z = 0;
    int o = 0;
    int v = 0;

    while (buffer[v] != '\0') {
        block->block_5[o][z] = buffer[v];
        v++;
        z++;
        if (buffer[v] == '\n') {
            block->block_5[o][z] = '\n';
            o++;
            +v++;
            z = 0;
        }
    }
}