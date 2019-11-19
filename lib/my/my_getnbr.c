/*
** EPITECH PROJECT, 2017
** Aurélien Vandaële <aurelien.vandaele@epitech.eu>
** File description:
** Library : my_getnbr
*/

int my_getnbr(char const *str)
{
	int result = 0;
	int i = 0;

	while (str[i] != '\0') {
		if (str[i] >= '0' && str[i] <= '9') {
			result = result * 10 + (str[i] - 48);
		}
		i++;
	}
	return (result);
}
