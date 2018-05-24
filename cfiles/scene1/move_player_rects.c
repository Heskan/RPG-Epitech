/*
** EPITECH PROJECT, 2017
** player_move_scene3.c
** File description:
** MY RPG 2017 | Hugo Castelli x Constant Loubier x Tais Laraaj x Pierre Herman
*/

#include "my.h"

void move_player_rect_right(player_t *player, map_t *map)
{
	if (player->playerseconds > 1) {
		move_rect(&player->playerrightrect, 50, 150);
		sfClock_restart(player->playerclock);
	}
	sfSprite_setTextureRect
	(player->playerright, player->playerrightrect);
	sfRenderWindow_drawSprite
	(map->window, player->playerright, NULL);
}

void move_player_rect_left(player_t *player, map_t *map)
{
	if (player->playerseconds > 1) {
		move_rect(&player->playerleftrect, 50, 150);
		sfClock_restart(player->playerclock);
	}
	sfSprite_setTextureRect
	(player->playerleft, player->playerleftrect);
	sfRenderWindow_drawSprite
	(map->window, player->playerleft, NULL);
}

void move_player_rect_down(player_t *player, map_t *map)
{
	if (player->playerseconds > 1) {
		move_rect(&player->playerdownrect, 50, 150);
		sfClock_restart(player->playerclock);
	}
	sfSprite_setTextureRect
	(player->playerdown, player->playerdownrect);
	sfRenderWindow_drawSprite
	(map->window, player->playerdown, NULL);
}

void move_player_rect_up(player_t *player, map_t *map)
{
	if (player->playerseconds > 1) {
		move_rect(&player->playeruprect, 50, 150);
		sfClock_restart(player->playerclock);
	}
	sfSprite_setTextureRect(player->playerup, player->playeruprect);
	sfRenderWindow_drawSprite(map->window, player->playerup, NULL);
}
