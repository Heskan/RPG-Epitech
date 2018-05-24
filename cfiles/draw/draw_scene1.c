/*
** EPITECH PROJECT, 2017
** drawing.c
** File description:
** MY RPG 2017 | Hugo Castelli x Constant Loubier x Tais Laraaj x Pierre Herman
*/

#include "my.h"

void key_usage(map_t *map)
{
	if (sfKeyboard_isKeyPressed(sfKeySpace)) {
		usleep(99999);
		map->next += 1;
	}
	if (sfKeyboard_isKeyPressed(sfKeyEscape)) {
		usleep(99999);
		map->cred = 7;
	}
}

void draw_wizard(map_t *map)
{
	if (map->next == 0)
		sfRenderWindow_drawSprite(map->window, map->wizard, NULL);
	if (map->next == 1)
		sfRenderWindow_drawSprite(map->window, map->wizard2, NULL);
	if (map->next == 2)
		sfRenderWindow_drawSprite(map->window, map->wizard3, NULL);
	if (map->next == 3)
		sfRenderWindow_drawSprite(map->window, map->wizard4, NULL);
}

void quest_draw_gestion(map_t *map, float seconds, sfClock *clock)
{
	sfRenderWindow_drawSprite(map->window, map->bag, NULL);
	if (map->quest == 1)
		sfRenderWindow_drawSprite(map->window, map->hudq, NULL);
	if (map->quest == 2)
		sfRenderWindow_drawSprite(map->window, map->quest1, NULL);
	if (map->quest == 3)
		sfRenderWindow_drawSprite(map->window, map->quest2, NULL);
	if (map->quest == 4)
		sfRenderWindow_drawSprite(map->window, map->quest3, NULL);
	if (seconds > 0.4) {
		movemaprect();
		sfClock_restart(clock);
	}
}

void inventory_draw(map_t *map, player_t *player)
{
	if (sfKeyboard_isKeyPressed(sfKeyI)) {
		usleep(99999);
		if (player->affinv == 1)
			player->affinv = 0;
		else
			player->affinv = 1;
	}
	if (player->affinv == 1) {
		sfRenderWindow_drawSprite(map->window, map->inventaire, NULL);
		if (map->quest == 4)
			sfRenderWindow_drawSprite
			(map->window, map->keyinv, NULL);
	}
}



void draw_all_scene1
(map_t *map, sfClock *clock, float seconds, player_t *player)
{
	if (map->cred == 3) {
		key_usage(map);
		sfRenderWindow_drawSprite(map->window, map->back, NULL);
		draw_wizard(map);
		if (map->next >= 4) {
			drawlist_scene1(map);
			draw_life(map);
			quest_draw_gestion(map, seconds, clock);
			playermoves_scene1(map, player);
			inventory_draw(map, player);
		}
		combat_draw(player, map);
		pnj_draw(map);
	}
}
