/*
** EPITECH PROJECT, 2017
** drawing.c
** File description:
** MY RPG 2017 | Hugo Castelli x Constant Loubier x Tais Laraaj x Pierre Herman
*/

#include "my.h"

void pnj_draw(map_t *map)
{
	if (map->affpnj == 1) {
		sfRenderWindow_drawSprite(map->window, map->pnjtalk, NULL);
		if (sfKeyboard_isKeyPressed(sfKeySpace)) {
			usleep(99999);
			map->affpnj = 0;
		}
	}
}
