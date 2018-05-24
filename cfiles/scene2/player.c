/*
** EPITECH PROJECT, 2017
** player.c
** File description:
** MY RPG 2017 | Hugo Castelli x Constant Loubier x Tais Laraaj x Pierre Herman
*/

#include "my.h"

int checkmapright_scene2(player_t *player, map_t *map)
{
	int i = 0;

	while (player->lock[i] != '\0') {
		if (map->scene2[player->y][player->x + 1] == player->lock[i])
			return (1);
		i++;
	}
	i = 0;
	while (player->fight[i] != '\0') {
		if (map->scene2[player->y][player->x + 1] == player->fight[i])
			player->combat = 1;
		i++;
	}
	return (0);
}

int checkmapleft_scene2(player_t *player, map_t *map)
{
	int i = 0;

	while (player->lock[i] != '\0') {
		if (map->scene2[player->y][player->x - 1] == player->lock[i])
			return (1);
		i++;
	}
	return (0);
}

int checkmapup_scene2(player_t *player, map_t *map)
{
	int i = 0;

	while (player->lock[i] != '\0') {
		if (map->scene2[player->y - 1][player->x] == player->lock[i])
			return (1);
		i++;
	}
	return (0);
}

int checkmapdown_scene2(player_t *player, map_t *map)
{
	int i = 0;

	while (player->lock[i] != '\0') {
		if (map->scene2[player->y + 1][player->x] == player->lock[i])
			return (1);
		i++;
	}
	return (0);
}

void playermoves_scene2(map_t *map, player_t *player)
{
	if (player->stateup == 0 && player->statedown == 0 &&
		player->stateleft == 0 && player->stateright == 0)
		sfRenderWindow_drawSprite
		(map->window, player->playerSprite, NULL);
	rightmove_scene2(player, map);
	leftmove_scene2(player, map);
	upmove_scene2(player, map);
	downmove_scene2(player, map);
	if (map->scene2[player->y][player->x] == 'c')
		map->cred++;
}

void initplayer_scene2(player_t *player)
{
	player->x = 11;
	player->y = 6;
	player->stateright = 0;
	player->stateup = 0;
	player->statedown = 0;
	player->stateleft = 0;
	player->saveright = 0;
	player->saveleft = 0;
	player->compteur = 0;
	player->savedown = 0;
	player->saveup = 0;
	player->lock = malloc(sizeof(char) * 4096);
	player->lock = " 123456789abcd";
	player->fight = malloc(sizeof(char) * 4096);
	player->fight = "b ";
	player->affinv = 0;
}
