/*
** EPITECH PROJECT, 2017
** read.c
** File description:
** MY RPG 2017 | Hugo Castelli x Constant Loubier x Tais Laraaj x Pierre Herman
*/

#include "my.h"

int get_lines(char *buff)
{
	int lines = 0;

	for (int i = 0; buff[i]; i += 1)
		lines += (buff[i] == '\n') ? 1 : 0;
	return (lines);
}

int get_cols(char *buff)
{
	int i;

	for (i = 0; buff[i] && buff[i] != '\n'; i += 1);
	return (i);
}

char **get_map(char *buff, int cols, int lines)
{
	int i = 0;
	int j = 0;
	char **map = malloc(sizeof(char) * (lines + 1) * 4096);

	for (i = 0; i < lines; i += 1)
		map[i] = malloc(sizeof(char) * (cols + 1) * 4096);
	for (i = 0; i < lines; i += 1) {
		for (j = 0; j < cols; j += 1) {
			map[i][j] = buff[(i * (cols + 1)) + j];
		}
		map[i][j] = '\0';
	}
	map[i] = NULL;
	return (map);
}

char **readmap(char *path)
{
	int lines;
	int cols;

	char **map;
	int fd = open(path, O_RDONLY);
	char *buff = malloc(sizeof(char) * 4096);
	read(fd, buff, 4096);
	lines = get_lines(buff);
	cols = get_cols(buff);
	map = get_map(buff, cols, lines);
	free(buff);
	close(fd);
	return (map);
}
