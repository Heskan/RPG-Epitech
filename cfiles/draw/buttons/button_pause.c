/*
** EPITECH PROJECT, 2017
** mouse_pause.c
** File description:
** MY RPG 2017 | Hugo Castelli x Constant Loubier x Tais Laraaj x Pierre Herman
*/

#include "my.h"

void mouse_over_pause2(map_t *map)
{
	sfVector2i mouse;

	mouse = sfMouse_getPositionRenderWindow(map->window);
	sfFloatRect pos = sfSprite_getGlobalBounds(map->backui);
	if (mouse.y > pos.top && mouse.y < (pos.top + pos.height)) {
		if (mouse.x > pos.left && mouse.x < (pos.left + pos.width))
			sfRenderWindow_drawSprite
			(map->window, map->backui_mouse, NULL);
	}
}
