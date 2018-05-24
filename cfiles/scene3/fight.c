/*
** EPITECH PROJECT, 2017
** player.c
** File description:
** MY RPG 2017 | Hugo Castelli x Constant Loubier x Tais Laraaj x Pierre Herman
*/

#include "my.h"

void combat_scene_3_character(player_t *player, map_t *map, int i)
{
	while (player->fight[i] != '\0') {
		if (map->scene3[player->y][player->x + 1] == player->fight[i])
			player->combat = 1;
		i++;
	}
	i = 0;
	while (player->treasure[i] != '\0') {
		if (map->scene3[player->y][player->x + 1] ==
			player->treasure[i] && map->quest == 3)
			map->quest = 4;
		i++;
	}
}
