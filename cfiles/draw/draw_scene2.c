/*
** EPITECH PROJECT, 2017
** drawing.c
** File description:
** MY RPG 2017 | Hugo Castelli x Constant Loubier x Tais Laraaj x Pierre Herman
*/

#include "my.h"

void draw_all_scene2(map_t *map, player_t *player)
{
	if (map->cred == 6) {
		sfRenderWindow_drawSprite(map->window, map->background, NULL);
		drawlist_scene2(map);
		playermoves_scene2(map, player);
		if (player->affinv == 1) {
			sfRenderWindow_drawSprite
			(map->window, map->inventaire, NULL);
			if (map->quest == 4)
				sfRenderWindow_drawSprite
				(map->window, map->keyinv, NULL);
		}
		sfRenderWindow_drawSprite(map->window, map->bag, NULL);
		draw_life(map);
	}
}
