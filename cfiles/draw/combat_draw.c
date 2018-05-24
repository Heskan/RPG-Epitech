/*
** EPITECH PROJECT, 2017
** drawing.c
** File description:
** MY RPG 2017 | Hugo Castelli x Constant Loubier x Tais Laraaj x Pierre Herman
*/

#include "my.h"

void combat_draw(player_t *player, map_t *map)
{
	if (player->combat == 1 && player->compteur == 0) {
			combat(map, player);
			map->quest = 3;
	}
	if (player->combat_2 == 1 && player->compteur == 1) {
			combat(map, player);
			map->quest = 1;
		}
}
