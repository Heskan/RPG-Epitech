/*
** EPITECH PROJECT, 2017
** choose_menu_part1.c
** File description:
** MY RPG 2017 | Hugo Castelli x Constant Loubier x Tais Laraaj x Pierre Herman
*/

#include "my.h"

void choose_menu1(sfMouseButtonEvent event, map_t *map)
{
	sfFloatRect pos = sfSprite_getGlobalBounds(map->quit);
	if (event.y > pos.top && event.y < (pos.top + pos.height)) {
		if (event.x > pos.left && event.x < (pos.left + pos.width)) {
			if (map->cred == 0)
				sfRenderWindow_close(map->window);
		}
	}
	sfFloatRect pos1 = sfSprite_getGlobalBounds(map->credits);
	if (event.y > pos1.top && event.y < (pos1.top + pos1.height)) {
		if (event.x > pos1.left && event.x < (pos1.left + pos1.width)) {
			if (map->cred == 0)
				map->cred = 1;
		}
	}
}

void choose_menu2(sfMouseButtonEvent event, map_t *map)
{
	sfFloatRect pos2 = sfSprite_getGlobalBounds(map->settings);
	if (event.y > pos2.top && event.y < (pos2.top + pos2.height)) {
		if (event.x > pos2.left && event.x < (pos2.left + pos2.width)) {
			if (map->cred == 0)
				map->cred = 2;
		}
	}
	sfFloatRect posh = sfSprite_getGlobalBounds(map->help);
	if (event.y > posh.top && event.y < (posh.top + posh.height)) {
		if (event.x > posh.left && event.x < (posh.left + posh.width)) {
			if (map->cred == 0)
				map->cred = 20;
		}
	}
}

void choose_menu3(sfMouseButtonEvent event, map_t *map)
{
	sfFloatRect pos3 = sfSprite_getGlobalBounds(map->box);
	if (event.y > pos3.top && event.y < (pos3.top + pos3.height)) {
		if (event.x > pos3.left && event.x < (pos3.left + pos3.width)) {
			if (map->cred == 2)
				map->checked = 0;
		}
	}
	sfFloatRect pos4 = sfSprite_getGlobalBounds(map->box2);
	if (event.y > pos4.top && event.y < (pos4.top + pos4.height)) {
		if (event.x > pos4.left && event.x < (pos4.left + pos4.width)) {
			if (map->cred == 2)
				map->checked = 1;
		}
	}
}

void choose_menu4(sfMouseButtonEvent event, map_t *map)
{
	sfFloatRect pos5 = sfSprite_getGlobalBounds(map->play);
	if (event.y > pos5.top && event.y < (pos5.top + pos5.height)) {
		if (event.x > pos5.left && event.x < (pos5.left + pos5.width)) {
			if (map->cred == 0)
				map->cred = 3;
		}
	}
	sfFloatRect pos6 = sfSprite_getGlobalBounds(map->attack1);
	if (event.y > pos6.top && event.y < (pos6.top + pos6.height)) {
		if (event.x > pos6.left && event.x < (pos6.left + pos6.width)) {
			map->press1 = 1;
		}
	}
}
