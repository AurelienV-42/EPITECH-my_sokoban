##
## EPITECH PROJECT, 2017
## Aurélien Vandaële <aurelien.vandaele@epitech.eu>
## File description:
## Makefile
##

SRC	=	my_putchar.c	\
		my_putstr.c	\
		my_getnbr.c	\
		my_strlen.c	\
		my_putnbr.c

OBJ	= 	$(SRC:.c=.o)

NAME	=	libmy.a

CFLAGS	=	 -I../../include/

all:		$(NAME)

$(NAME):	$(OBJ)
		ar rc $(NAME) $(OBJ)

clean:
		rm -f $(OBJ)
		rm -f *~

fclean:		clean
		rm -f $(NAME)

re:		fclean all

.PHONY:		all clean fclean
