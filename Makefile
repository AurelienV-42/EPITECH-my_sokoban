##
## EPITECH PROJECT, 2017
## Aurélien Vandaële <aurelien.vandaele@epitech.eu>
## File description:
## Makefile
##

SRC_DIR	=	src/

SRC	=	$(SRC_DIR)main.c	\
		$(SRC_DIR)my_sokoban.c	\
		$(SRC_DIR)my_sokoban_xy.c

NAME	=	my_sokoban

OBJ	=	$(SRC:.c=.o)

COMPIL	=	-lmy -Llib/my

CFLAGS	=	-W -Wall -Werror -Wextra -I include/ -lncurses

all:		$(NAME)

$(NAME):	$(OBJ)
		make -C lib/my
		make clean -C lib/my
		gcc -o $(NAME) $(OBJ) $(COMPIL) $(CFLAGS)

clean:
		rm -f $(OBJ)
		rm -rf *~
		rm -rf src/*~

fclean:		clean
		make fclean -C lib/my
		rm -f $(NAME)

re:		fclean all

.PHONY:		all clean fclean
