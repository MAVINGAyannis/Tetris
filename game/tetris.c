/*
** EPITECH PROJECT, 2019
** PSU_tetris_2019
** File description:
** my_tetris.c
*/
#include "tetris.h"

void txt_to_map(Maps *maps, char *buffer)
{
    int z = 0;
    int o = 0;
    int v = 0;

    while (buffer[v] != '\0') {
        maps->map[o][z] = buffer[v];
        v++;
        z++;
        if (buffer[v] == '\n') {
            maps->map[o][z] = '\n';
            o++;
            v++;
            z = 0;
        }
    }
}

void txt_to_map_3(Maps *maps, char *buffer)
{
    int z = 0;
    int o = 0;
    int v = 0;

    while (buffer[v] != '\0') {
        maps->void_map[o][z] = buffer[v];
        v++;
        z++;
        if (buffer[v] == '\n') {
            maps->void_map[o][z] = '\n';
            o++;
            v++;
            z = 0;
        }
    }
}

void printmap(Maps *maps, int sizemap, Positions *position)
{
    WINDOW *boite;

    clear();
    printw("*** *** *** *** * ***\n");
    printw(" *  *    *  * * * *  \n");
    printw(" *  **   *  **  * ***\n");
    printw(" *  *    *  * * *   *\n");
    printw(" *  ***  *  * * * ***\n\n\n\n\n\n");
    for (int h = 0; h != sizemap; h++) {
        printw(maps->map2[h]);
    }
    printw("\n\n\nscore = %i", position->score);
    refresh();
}

void game(Maps *maps, int sizemap)
{
    Blocks Block;
    Blocks *block = &Block;
    Positions Position;
    Positions *position = &Position;
    variable_positioner(position);

    block_maker(block, sizemap);
    initscr();
    curs_set(0);
    block_placer(block, maps, position);
    while (true) {
        printmap(maps, sizemap, position);
        position->end = 0;
        position->key = getch();
        printw("%i", position->key);
        position->block = position->key;
        mover(maps, position);
        checker(maps, position);
        end_blocks(block, maps, position);
    }
}

int main(int argc, char **argv)
{
    int sizemap = 0;
    int col = 0;
    int fd;
    char *buffer = buff("map.txt");
    Maps map;

    if (argc != 1)
        return (84);
    sizemap = how_size(buffer, sizemap);
    col = how_col(buffer, col);
    the_malloc(&map, sizemap, col);
    txt_to_map(&map, buffer);
    the_malloc_2(&map, sizemap, col);
    txt_to_map_2(&map, buffer);
    txt_to_map_3(&map, buffer);
    debug();
    getch();
    endwin();
    game(&map, sizemap);
    return (1);
}