/*
** EPITECH PROJECT, 2017
** mouse_click.c
** File description:
** MY RPG 2017 | Hugo Castelli x Constant Loubier x Tais Laraaj x Pierre Herman
*/

#include "my.h"

void mouse_click1(map_t *map)
{
	sfVector2i mouse;

	mouse = sfMouse_getPositionRenderWindow(map->window);
	sfFloatRect pos = sfSprite_getGlobalBounds(map->credits);
	if (mouse.y > pos.top && mouse.y < (pos.top + pos.height)) {
		if (mouse.x > pos.left && mouse.x < (pos.left + pos.width))
			if (map->cred == 0)
				sfRenderWindow_drawSprite
				(map->window, map->cred_click, NULL);
	}
	sfFloatRect pos1 = sfSprite_getGlobalBounds(map->play);
	if (mouse.y > pos1.top && mouse.y < (pos1.top + pos1.height)) {
		if (mouse.x > pos1.left && mouse.x < (pos1.left + pos1.width)) {
			if (map->cred == 0)
				sfRenderWindow_drawSprite
				(map->window, map->play_click, NULL);
		}
	}
}

void mouse_click2(map_t *map)
{
	sfVector2i mouse;

	sfFloatRect pos2 = sfSprite_getGlobalBounds(map->settings);
	if (mouse.y > pos2.top && mouse.y < (pos2.top + pos2.height)) {
		if (mouse.x > pos2.left && mouse.x < (pos2.left + pos2.width)) {
			if (map->cred == 0)
				sfRenderWindow_drawSprite
				(map->window, map->settings_click, NULL);
		}
	}
	sfFloatRect pos3 = sfSprite_getGlobalBounds(map->quit);
	if (mouse.y > pos3.top && mouse.y < (pos3.top + pos3.height)) {
		if (mouse.x > pos3.left && mouse.x < (pos3.left + pos3.width)) {
			if (map->cred == 0)
				sfRenderWindow_drawSprite
				(map->window, map->quit_click, NULL);
		}
	}
}

void mouse_click3(map_t *map)
{
	sfVector2i mouse;

	sfFloatRect pos4 = sfSprite_getGlobalBounds(map->help);
	if (mouse.y > pos4.top && mouse.y < (pos4.top + pos4.height)) {
		if (mouse.x > pos4.left && mouse.x < (pos4.left + pos4.width)) {
			if (map->cred == 0)
				sfRenderWindow_drawSprite
				(map->window, map->help_click, NULL);
		}
	}
}

void mouse_click_pause1(map_t *map)
{
	sfVector2i mouse;

	sfFloatRect pos2 = sfSprite_getGlobalBounds(map->quitui);
	if (mouse.y > pos2.top && mouse.y < (pos2.top + pos2.height)) {
		if (mouse.x > pos2.left && mouse.x < (pos2.left + pos2.width)) {
				sfRenderWindow_drawSprite
				(map->window, map->click_quitpause, NULL);
		}
	}
	sfFloatRect pos3 = sfSprite_getGlobalBounds(map->resumeui);
	if (mouse.y > pos3.top && mouse.y < (pos3.top + pos3.height)) {
		if (mouse.x > pos3.left && mouse.x < (pos3.left + pos3.width)) {
				sfRenderWindow_drawSprite
				(map->window, map->click_resumepause, NULL);
		}
	}
}
