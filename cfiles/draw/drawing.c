/*
** EPITECH PROJECT, 2017
** drawing.c
** File description:
** MY RPG 2017 | Hugo Castelli x Constant Loubier x Tais Laraaj x Pierre Herman
*/

#include "my.h"

void init_player_map_change(map_t *map, player_t *player)
{
	if (map->cred == 5) {
		initplayer_scene2(player);
		map->cred = 6;
	}
	if (map->cred == 8) {
		player->saveposx = player->x;
		player->saveposy = player->y;
		initplayer_scene3(player);
		map->cred = 9;
	}
}

void pause_menu_scene3(map_t *map, player_t *player, sfEvent event)
{
	if (map->cred == 7) {
		sfRenderWindow_drawSprite(map->window, map->pause, NULL);
		sfRenderWindow_drawSprite(map->window, map->quitui, NULL);
		sfRenderWindow_drawSprite(map->window, map->resumeui, NULL);
		sfRenderWindow_drawSprite(map->window, map->backui, NULL);
		mouse_over_pause(map);
		if (event.type == sfEvtMouseButtonPressed)
			mouse_click_pause(map);
	}  else if (map->cred == 9) {
		sfRenderWindow_drawSprite(map->window, map->background, NULL);
		drawlist_scene3(map);
		playermoves_scene3(map, player);
	}
}

void drawing
(sfEvent event, map_t *map, sfClock *clock, float seconds,
	player_t *player, sfIntRect *rect)
{
	drawmenu(map, clock, seconds, rect);
	draw_all_scene1(map, clock, seconds, player);
	draw_all_scene2(map, player);
	init_player_map_change(map, player);
	if (event.type == sfEvtMouseButtonPressed)
		mouse_click(map);
	if (map->cred == 4) {
		sfRenderWindow_clear(map->window, sfBlack);
		sfSprite_setPosition(map->heart, (sfVector2f){0, 10});
		sfRenderWindow_drawSprite(map->window, map->heart, NULL);
	}
	pause_menu_scene3(map, player, event);
	sfRenderWindow_display(map->window);
}
