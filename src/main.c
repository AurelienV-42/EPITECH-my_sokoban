/*
** EPITECH PROJECT, 2017
** BSQ main
** File description:
** Aurélien Vandaële <aurelien.vandaele@epitech.eu>
*/

#include "my.h"

int window(char *file)
{
	initscr();
	if (print_sokoban(file) == 84)
		return (84);
	getch();
	endwin();
	return (0);
}

void help()
{
	my_putstr("This is a sokoban game like\n");
	my_putstr("I hope that you will find this funny\n");
	my_putstr("Peace\n");
}

int main(int ac, char **av)
{
	if (ac != 2)
		return (84);
	if (av[1][0] == '-' && av[1][1] == 'h')
		help();
	return (window(av[1]));
}
