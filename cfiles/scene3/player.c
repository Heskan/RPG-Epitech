/*
** EPITECH PROJECT, 2017
** player.c
** File description:
** MY RPG 2017 | Hugo Castelli x Constant Loubier x Tais Laraaj x Pierre Herman
*/

#include "my.h"

int checkmapright_scene3(player_t *player, map_t *map)
{
	int i = 0;

	while (player->lock_scene3[i] != '\0') {
		if (map->scene3[player->y][player->x + 1]
			== player->lock_scene3[i])
			return (1);
		i++;
	}
	i = 0;
	combat_scene_3_character(player, map, i);
	return (0);
}

int checkmapleft_scene3(player_t *player, map_t *map)
{
	int i = 0;

	while (player->lock_scene3[i] != '\0') {
		if (map->scene3[player->y][player->x - 1] ==
			player->lock_scene3[i])
			return (1);
		i++;
	}
	return (0);
}

int checkmapup_scene3(player_t *player, map_t *map)
{
	int i = 0;

	while (player->lock_scene3[i] != '\0') {
		if (map->scene3[player->y - 1][player->x] ==
			player->lock_scene3[i])
			return (1);
		i++;
	}
	return (0);
}

int checkmapdown_scene3(player_t *player, map_t *map)
{
	int i = 0;

	while (player->lock_scene3[i] != '\0') {
		if (map->scene3[player->y + 1][player->x] ==
			player->lock_scene3[i])
			return (1);
		i++;
	}
	return (0);
}

void playermoves_scene3(map_t *map, player_t *player)
{
	if (player->stateup == 0 && player->statedown == 0 &&
		player->stateleft == 0 && player->stateright == 0)
		sfRenderWindow_drawSprite
		(map->window, player->playerSprite, NULL);
	rightmove_scene3(player, map);
	leftmove_scene3(player, map);
	upmove_scene3(player, map);
	downmove_scene3(player, map);
	if (map->scene3[player->y][player->x] == 'l') {
		player->x = player->saveposx;
		player->y = player->saveposy + 1;
		player->ycpt = 1;
		map->cred = 3;
	}
}

void initplayer_scene3(player_t *player)
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
	player->lock_scene3 = malloc(sizeof(char) * 4096);
	player->lock_scene3 = " fhik";
	player->fight = malloc(sizeof(char) * 4096);
	player->fight = " ";
	player->treasure = malloc(sizeof(char) * 4096);
	player->treasure = "= ";
	player->affinv = 0;
}
