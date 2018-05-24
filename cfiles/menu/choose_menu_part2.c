/*
** EPITECH PROJECT, 2017
** choose_menu_part2.c
** File description:
** MY RPG 2017 | Hugo Castelli x Constant Loubier x Tais Laraaj x Pierre Herman
*/

#include "my.h"

void choose_menu5(sfMouseButtonEvent event, map_t *map)
{
	sfFloatRect pos7 = sfSprite_getGlobalBounds(map->attack2);
	if (event.y > pos7.top && event.y < (pos7.top + pos7.height)) {
		if (event.x > pos7.left && event.x < (pos7.left + pos7.width)) {
			map->press2 = 1;
		}
	}
	sfFloatRect pos8 = sfSprite_getGlobalBounds(map->attack3);
	if (event.y > pos8.top && event.y < (pos8.top + pos8.height)) {
		if (event.x > pos8.left && event.x < (pos8.left + pos8.width)) {
			map->press3 = 1;
		}
	}
}

void choose_menu6(sfMouseButtonEvent event, map_t *map, player_t *player)
{
	sfFloatRect pos9 = sfSprite_getGlobalBounds(map->attack4);
	if (event.y > pos9.top && event.y < (pos9.top + pos9.height)) {
		if (event.x > pos9.left && event.x < (pos9.left + pos9.width)) {
			map->press4 = 1;
		}
	}
	sfFloatRect pos10 = sfSprite_getGlobalBounds(map->bag);
	if (event.y > pos10.top && event.y < (pos10.top + pos10.height)) {
		if (event.x > pos10.left &&
			event.x < (pos10.left + pos10.width)) {
			if (player->affinv == 1)
				player->affinv = 0;
			else
				player->affinv = 1;
		}
	}
}

void choose_menu7(sfMouseButtonEvent event, map_t *map)
{
	sfFloatRect pos11 = sfSprite_getGlobalBounds(map->quitui);
	if (event.y > pos11.top && event.y < (pos11.top + pos11.height)) {
		if (event.x > pos11.left &&
			event.x < (pos11.left + pos11.width)) {
			if (map->cred == 7)
				sfRenderWindow_close(map->window);
		}
	}
	sfFloatRect pos12 = sfSprite_getGlobalBounds(map->resumeui);
	if (event.y > pos12.top && event.y < (pos12.top + pos12.height)) {
		if (event.x > pos12.left &&
			event.x < (pos12.left + pos12.width)) {
			if (map->cred == 7)
				map->cred = 3;
		}
	}
}

void choose_menu8(sfMouseButtonEvent event, map_t *map)
{
	sfFloatRect pos11 = sfSprite_getGlobalBounds(map->backui);
	if (event.y > pos11.top && event.y < (pos11.top + pos11.height)) {
		if (event.x > pos11.left &&
			event.x < (pos11.left + pos11.width)) {
			if (map->cred == 7) {
				map->cred = 0;
				map->next = 0;
			}
		}
	}
}
