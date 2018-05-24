/*
** EPITECH PROJECT, 2017
** player.c
** File description:
** MY RPG 2017 | Hugo Castelli x Constant Loubier x Tais Laraaj x Pierre Herman
*/

#include "my.h"

int checkmapright_scene1(player_t *player, map_t *map)
{
	int i = 0;

	while (player->lock[i] != '\0') {
		if (map->level[player->y][player->x + 1] == player->lock[i])
			return (1);
		i++;
	}
	return (0);
}

int checkmapleft_scene1(player_t *player, map_t *map)
{
	int i = 0;

	while (player->lock[i] != '\0') {
		if (map->level[player->y][player->x - 1] == player->lock[i])
			return (1);
		i++;
	}
	return (0);
}

int checkmapup_scene1(player_t *player, map_t *map)
{
	int i = 0;

	while (player->lock[i] != '\0') {
		if (map->level[player->y - 1][player->x] == player->lock[i])
			return (1);
		i++;
	}
	return (0);
}

int checkmapdown_scene1(player_t *player, map_t *map)
{
	int i = 0;

	while (player->lock[i] != '\0') {
		if (map->level[player->y + 1][player->x] == player->lock[i])
			return (1);
		i++;
	}
	return (0);
}

void playermoves_scene1(map_t *map, player_t *player)
{
	if (player->stateup == 0 && player->statedown == 0 &&
		player->stateleft == 0 && player->stateright == 0)
		sfRenderWindow_drawSprite
		(map->window, player->playerSprite, NULL);
	rightmove_scene1(player, map);
	leftmove_scene1(player, map);
	upmove_scene1(player, map);
	downmove_scene1(player, map);
	if (map->level[player->y][player->x] == 'c')
		map->cred = 5;
	if (map->level[player->y][player->x] == '*')
		map->cred = 8;
	if (map->level[player->y][player->x] == 'g') {
		if (player->ycpt == 1) {
			player->ycpt = 0;
			player->y -= 1;
		}
	}
	if (map->level[player->y][player->x] == '=')
		map->quest = 4;
	if (map->level[player->y][player->x] == 'b')
		player->combat = 1;
	if (map->level[player->y][player->x] == '.')
		player->combat_2 = 1;
	if (map->level[player->y][player->x] == '+')
		map->affpnj = 1;
}

void initplayer_scene1(player_t *player)
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
	player->lock = " wjklmhxvVPpufBk";
	player->fight = malloc(sizeof(char) * 4096);
	player->fight = "b ";
	player->fight_2 = malloc(sizeof(char) * 4096);
	player->fight_2 = ". ";
	player->treasure = malloc(sizeof(char) * 4096);
	player->treasure = "= ";
	player->pnj = malloc(sizeof(char) * 4096);
	player->pnj = "+ ";
	player->affinv = 0;
	player->playeruprect = rect_create(0, 0, 200, 50);
	player->playerdownrect = rect_create(0, 0, 200, 50);
	player->playerleftrect = rect_create(0, 0, 200, 50);
	player->playerrightrect = rect_create(0, 0, 200, 50);
}
