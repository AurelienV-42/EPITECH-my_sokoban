/*
** EPITECH PROJECT, 2017
** Aurélien Vandaële <aurelien.vandaele@epitech.eu>
** File description:
** Library : my_putchar
*/

#include <unistd.h>

void my_putchar(char c)
{
	write(1, &c, 1);
}
