##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## Makefile
##

SRC	=	./game/tetris.c	\
		./game/tetris.h	\
		./debug.c	\
		./game/map/sizemap.c	\
		./game//block_move/move.c	\
		./game/map/buffer.c	\
		./game/map/map2.c	\
		./game/map/map_swap.c	\
		./game/check/checker.c	\
		./game/check/checker_2.c	\
		./game/block_move/drop.c	\
		./game/block_maker/block_maker.c	\
		./game/block_maker/block_maker_2.c	\
		./block/malloc_block.c	\
		./block/txt_to_map_block.c	\
		./block/malloc_block_2.c	\
		./block/txt_to_map_block_2.c	\
		./game/block_placer/block_placer.c	\
		./game/block_placer/block_placer_2.c	\
		./score/win_loose.c	\
		./error_map/error.c	\
		./error_map/error_2.c	\
		./game/more.c	\
		./lib/my/my_printf.c	\
		./lib/my/my_putchar.c	\
		./lib/my/my_put_nbr.c	\
		./lib/my/my_putstr.c	\
		./lib/my/my_getnbr.c	\
		./lib/my.h	\

OBJ	=	$(SRC:.c=.o)

NAME	=	tetris

all:	$(NAME)

$(NAME):	$(OBJ)
	gcc -lncurses $(SRC) -o $(NAME)

clean:
	rm error_map/*.o
	rm *.o
	rm game/*.o
	rm score/*.o
	rm lib/my/*.o
	rm block/*.o
	rm game/block_maker/*.o
	rm game/block_placer/*.o
	rm game/block_move/*.o
	rm game/check/*.o
	rm game/map/*.o

fclean: clean
	rm $(NAME)

re:	all
	make clean
