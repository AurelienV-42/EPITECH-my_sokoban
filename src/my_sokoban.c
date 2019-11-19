/*
** EPITECH PROJECT, 2017
** test
** File description:
** test
*/

#include "my.h"

int open_file(char const *filepath)
{
	int fd = open(filepath, O_RDONLY);

	return (fd);
}

int print_sokoban(char const *filepath)
{
	struct stat stru;
	int fd = open_file(filepath);
	int size = 0;
	char *buffer;

	if (fd == -1)
		return 84;
	stat(filepath, &stru);
	buffer = malloc(sizeof(char) * stru.st_size + 1);
	size = stru.st_size;
	read(fd, buffer, size);
	buffer_xy(buffer);
	close(fd);
	return (0);
}
