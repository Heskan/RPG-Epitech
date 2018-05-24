/*
** EPITECH PROJECT, 2017
** menu.c
** File description:
** MY RPG 2017 | Hugo Castelli x Constant Loubier x Tais Laraaj x Pierre Herman
*/

#include "my.h"

void drawmenu(map_t *map, sfClock *clock, float seconds, sfIntRect *rect)
{
	sfVector2f pos = {458, 200};
	sfVector2f pos1 = {558, 200};

	if (map->cred == 0) {
		if (seconds > 0.05) {
			move_rect(rect, 350, 10150);
			sfClock_restart(clock);
		}
		sfSprite_setTextureRect(map->pnj, *rect);
		sfRenderWindow_drawSprite(map->window, map->background, NULL);
		sfRenderWindow_drawSprite(map->window, map->play, NULL);
		sfRenderWindow_drawSprite(map->window, map->settings, NULL);
		sfRenderWindow_drawSprite(map->window, map->credits, NULL);
		sfRenderWindow_drawSprite(map->window, map->quit, NULL);
		sfRenderWindow_drawSprite(map->window, map->help, NULL);
		sfRenderWindow_drawSprite(map->window, map->pnj, NULL);
		mouse_over(map);
	}
	else if (map->cred == 1) {
		if (sfKeyboard_isKeyPressed(sfKeySpace))
			map->cred = 0;
		sfRenderWindow_drawSprite(map->window, map->credit, NULL);
	}
	else if (map->cred == 20) {
		if (sfKeyboard_isKeyPressed(sfKeySpace))
			map->cred = 0;
		sfRenderWindow_drawSprite(map->window, map->howtoplay, NULL);
	}
	else if (map->cred == 2) {
		if (sfKeyboard_isKeyPressed(sfKeySpace))
			map->cred = 0;
		if (map->checked == 0)
			sfSprite_setPosition(map->check, pos);
		else
			sfSprite_setPosition(map->check, pos1);
		sfRenderWindow_drawSprite(map->window, map->setting, NULL);
		sfRenderWindow_drawSprite(map->window, map->box, NULL);
		sfRenderWindow_drawSprite(map->window, map->box2, NULL);
		sfRenderWindow_drawSprite(map->window, map->check, NULL);
	}
}
