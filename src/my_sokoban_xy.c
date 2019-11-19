/*
** EPITECH PROJECT, 2017
** BSQ
** File description:
** Aurélien Vandaële <aurelien.vandaele@epitech.eu>
*/

#include "my.h"
#include <stdio.h>

int fs_getnumber_from_first_line(char const *str)
{
	int result = 0;
	int i = 0;

	while (str[i] != '\0') {
		if (str[i] == '\n')
			result++;
		i++;
	}
	return (result);
}

int get_columns(char const *str)
{
	int result = 0;
	int i = 0;

	while (str[i] != '\n') {
		result++;
		i++;
	}
	return (result);
}

char **malloc_double_string(int n_lines, int n_columns)
{
	char **result = malloc(sizeof(char *) * n_lines + 1);
	int i = 0;

	if (result == NULL)
		return (NULL);
	while (i < n_columns) {
		result[i] = malloc(sizeof(char) * n_columns + 1);
		i++;
	}
	return (result);
}

void fill_buffer_xy(char *buffer, char **buffer_xy)
{
	int i = 0;
	int n = 0;
	int nb = 0;

	while (buffer[i] != '\0') {
          	while (buffer[i] != '\n') {
			buffer_xy[n][nb] = buffer[i];
			i++;
			nb++;
		}
	        printw("%s\n", (buffer_xy[n]));
		i++;
		nb = 0;
		n++;
	}
}

int buffer_xy(char *buffer)
{
	int n_lines = fs_getnumber_from_first_line(buffer);
	int n_columns = get_columns(buffer);
	char **buffer_xy = malloc_double_string(n_lines, n_columns);

	if (buffer_xy == NULL)
		return (84);
	fill_buffer_xy(buffer, buffer_xy);
	return (0);
}
