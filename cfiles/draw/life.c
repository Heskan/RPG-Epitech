/*
** EPITECH PROJECT, 2017
** drawing.c
** File description:
** MY RPG 2017 | Hugo Castelli x Constant Loubier x Tais Laraaj x Pierre Herman
*/

#include "my.h"

void one_heart(map_t *map)
{
	if (map->pvmen <= 25) {
		sfSprite_setPosition(map->heart, (sfVector2f){0, 10});
		sfRenderWindow_drawSprite(map->window, map->heart, NULL);
	}
}

void two_hearts(map_t *map)
{
	if (map->pvmen > 25 && map->pvmen <= 50 ) {
		sfSprite_setPosition(map->heart, (sfVector2f){0, 10});
		sfRenderWindow_drawSprite(map->window, map->heart, NULL);
		sfSprite_setPosition(map->heart, (sfVector2f){50, 100});
		sfRenderWindow_drawSprite(map->window, map->heart, NULL);
	}
}
void three_hearts(map_t *map)
{
	if (map->pvmen > 50 && map->pvmen <= 75 ) {
		sfSprite_setPosition(map->heart, (sfVector2f){0, 10});
		sfRenderWindow_drawSprite(map->window, map->heart, NULL);
		sfSprite_setPosition(map->heart, (sfVector2f){50, 10});
		sfRenderWindow_drawSprite(map->window, map->heart, NULL);
		sfSprite_setPosition(map->heart, (sfVector2f){100, 10});
		sfRenderWindow_drawSprite(map->window, map->heart, NULL);
	}
}

void four_heart(map_t *map)
{
	if (map->pvmen > 75 && map->pvmen <= 100 ) {
		sfSprite_setPosition(map->heart, (sfVector2f){0, 10});
		sfRenderWindow_drawSprite(map->window, map->heart, NULL);
		sfSprite_setPosition(map->heart, (sfVector2f){50, 10});
		sfRenderWindow_drawSprite(map->window, map->heart, NULL);
		sfSprite_setPosition(map->heart, (sfVector2f){100, 10});
		sfRenderWindow_drawSprite(map->window, map->heart, NULL);
		sfSprite_setPosition(map->heart, (sfVector2f){150, 10});
		sfRenderWindow_drawSprite(map->window, map->heart, NULL);
	}
}

void draw_life(map_t *map)
{
	one_heart(map);
	two_hearts(map);
	three_hearts(map);
	four_heart(map);
}
