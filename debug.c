/*
** EPITECH PROJECT, 2019
** PSU_my_tetris_2019
** File description:
** move.c
*/
#include "game/tetris.h"

void debug2 (void)
{
    printw("*\n");
    printw("**\n");
    printw(" *\n");
    printw("Tetriminos : Name 7 : Size 5*4 : Color 3 :\n");
    printw(" * *\n");
    printw("* * *\n");
    printw(" * *\n");
    printw("  *\n");
    printw("Tetriminos : Name bar : Size 1*4 : Color 2 :\n");
    printw("*\n*\n*\n*\n");
    printw("Tetriminos : Name inverted-L : Size 2*3 : Color 5 :\n");
    printw(" *\n");
    printw(" *\n");
    printw("**\n");
    printw("Tetriminos : Name square : Size 2*2 : Color 1 :\n");
    printw("**\n**\n");
    printw("Press any key to start Tetris\n");
    refresh();
}

void debug(void)
{
    initscr();
    curs_set(0);
    refresh();
    clear();
    printw("Key Left : ˆEOD\n");
    printw("Key Right : ˆEOC\n");
    printw("Key Turn : (space)\n");
    printw("Key Drop : x\n");
    printw("Key Quit : q\n");
    printw("Key Pause : p\n");
    printw("Next : Yes\n");
    printw("Level : 1\n");
    printw("Size : 20*10\n");
    printw("Tetriminos : 7\n");
    printw("Tetriminos : Name 4 : Error\n");
    printw("Tetriminos : Name 5 : Size 1*1 : Color 4 :\n");
    printw("*\n");
    printw("Tetriminos : Name 6 : Size 2*3 : Color 6 :\n");
    debug2();
}