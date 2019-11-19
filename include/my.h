/*
** EPITECH PROJECT, 2017
** Aurélien Vandaële <aurelien.vandaele@epitech.eu>
** File description:
** Library
*/

#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <ncurses.h>

#ifndef MY_H_
#define MY_H_

void my_putchar(char c);
void my_putstr(char const *str);
int my_getnbr(char const *str);
int my_strlen(char const *str);
int print_sokoban(char const *filepath);
int fs_getnumber_from_first_line(char const *str);
void read_bsq(int fd, char *buffer, int size);
int open_file(char const *filepath);
int buffer_xy(char *buffer);
int my_putnbr(int nb);

#endif
