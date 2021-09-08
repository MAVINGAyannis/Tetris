/*
** EPITECH PROJECT, 2019
** PSU_my_sokoban_2019
** File description:
** my_sokoban.h
*/
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include "../lib/my.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <string.h>
#include <ncurses.h>

typedef struct Positions Positions;
struct Positions
{
    int x;
    int y;
    int block;
    int end;
    int key;
    int checker;
    int score;
};

typedef struct Maps Maps;
struct Maps
{
    char **map;
    char **map2;
    char **void_map;
};

typedef struct Blocks Blocks;
struct Blocks
{
    char **block_1;
    char **block_2;
    char **block_3;
    char **block_4;
    char **block_5;
    char **block_6;
};

void debug(void);
void debug2(void);

void printmap(Maps *maps, int sizemap, Positions *position);

void txt_to_map(Maps *maps, char *buffer);

void error_file(int fd);

void the_malloc(Maps *maps, int sizemap, int col);

int how_size(char *buffer, int sizemap);

int how_col(char *buffer, int col);

void mover(Maps *maps, Positions *position);

void game(Maps *maps, int sizemap);

int right(Maps *maps, Positions *position);

int left(Maps *maps, Positions *position);

int gravity(Maps *maps, Positions *position);

int winner(char **map, int sizemap, char **map2);

char *buff(char *filepath);

void the_malloc_2(Maps *maps, int sizemap, int col);

void txt_to_map_2(Maps *maps, char *buffer);

void txt_to_map_3(Maps *maps, char *buffer);

char **player_reset(char **map2, int sizemap);

char **block_reset(char **map2, int sizemap);

void block_e(int block, int target);

void limit_e(int limit, int player);

void target_e(int target, int block);

void player_e(int player);

void invalid_map(char **map, int sizemap);

int player_v(int player, char random);

int target_v(int target, char random);

int limit_v(int limit, char random);

int block_v(int block, char random);

void wrong_map(char *buffer, int v);

void quit_exit(Positions *position);

void map_to_map2(Maps *maps);
void map2_to_map(Maps *maps);
void voidmap_to_map(Maps *maps);

char **block_maker(Blocks *block, int sizemap);

void block_maker_1(Blocks *block, int sizemap);
void block_maker_2(Blocks *block, int sizemap);
void block_maker_3(Blocks *block, int sizemap);
void block_maker_4(Blocks *block, int sizemap);
void block_maker_5(Blocks *block, int sizemap);
void block_maker_6(Blocks *block, int sizemap);

char **txt_to_map_block(Blocks *block, char *buffer);

void txt_to_map_block_6(Blocks *block, char *buffer);
void txt_to_map_block_5(Blocks *block, char *buffer);
void txt_to_map_block_4(Blocks *block, char *buffer);
void txt_to_map_block_3(Blocks *block, char *buffer);
void txt_to_map_block_2(Blocks *block, char *buffer);
void txt_to_map_block_1(Blocks *block, char *buffer);

void the_malloc_block_1(Blocks *block, int sizemap, int col);
void the_malloc_block_2(Blocks *block, int sizemap, int col);
void the_malloc_block_3(Blocks *block, int sizemap, int col);
void the_malloc_block_4(Blocks *block, int sizemap, int col);
void the_malloc_block_5(Blocks *block, int sizemap, int col);
void the_malloc_block_6(Blocks *block, int sizemap, int col);

void block_placer(Blocks *block, Maps *maps, Positions *position);

void block_1_placer(Blocks *block, Maps *maps, Positions *position);
void block_2_placer(Blocks *block, Maps *maps, Positions *position);
void block_3_placer(Blocks *block, Maps *maps, Positions *position);
void block_4_placer(Blocks *block, Maps *maps, Positions *position);
void block_5_placer(Blocks *block, Maps *maps, Positions *position);
void block_6_placer(Blocks *block, Maps *maps, Positions *position);

char **block_mover(char **map, char **map2, Positions *position, Blocks *block);

void block_1_analyser(char **map2, Positions *position, char **map);
void block_2_analyser(char **map2, Positions *position, char **map);
void block_3_analyser(char **map2, Positions *position, char **map);
void block_4_analyser(char **map2, Positions *position, char **map);
void block_5_analyser(char **map2, Positions *position, char **map);
void block_6_analyser(char **map2, Positions *position, char **map);

int checker(Maps *map, Positions *positon);

int checker_1(Maps *maps, Positions *position);
int checker_2(Maps *maps, Positions *position);
int checker_3(Maps *maps, Positions *position);
int checker_4(Maps *maps, Positions *position);
int checker_5(Maps *maps, Positions *position);
int checker_6(Maps *maps, Positions *position);

void end_blocks(Blocks *block, Maps *maps, Positions *position);

void variable_positioner(Positions *position);

void space_drop(Maps *maps, Positions *position);

int drop_down(Maps *maps, Positions *position);