/*
** EPITECH PROJECT, 2017
** Aurélien Vandaële <aurelien.vandaele@epitech.eu>
** File description:
** Library : my_put_nbr
*/

#include "my.h"

int my_putnbr(int nb)
{
	int start;
	int end;

	if (nb < 0) {
		my_putchar('-');
		my_putnbr(-nb);
	} else {
		end = nb % 10;
		start = nb / 10;
		if (start != 0)
			my_putnbr(start);
		my_putchar(end + '0');
	}
	return (0);
}
