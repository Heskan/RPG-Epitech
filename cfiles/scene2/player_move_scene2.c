/*
** EPITECH PROJECT, 2017
** player_move_scene2.c
** File description:
** MY RPG 2017 | Hugo Castelli x Constant Loubier x Tais Laraaj x Pierre Herman
*/

#include "my.h"

void rightmove_scene2(player_t *player, map_t *map)
{
	element_t *tmp = scene2->next;

	if (sfKeyboard_isKeyPressed(sfKeyD) && player->stateright == 0 &&
	checkmapright_scene2(player, map) == 0) {
		player->stateright = 1;
	}
	if (player->stateright == 1) {
		while (tmp) {
			tmp->posi.x -= 5;
			sfSprite_setPosition(tmp->sprite, tmp->posi);
			tmp = tmp->next;
		}
		player->saveright += 5;
		move_player_rect_right(player, map);
	}
	if (player->saveright >= 50) {
		player->saveright = 0;
		player->x += 1;
		player->stateright = 0;
	}
}

void leftmove_scene2(player_t *player, map_t *map)
{
	element_t *tmp = scene2->next;

	if (sfKeyboard_isKeyPressed(sfKeyQ) && player->stateleft == 0 &&
	checkmapleft_scene2(player, map) == 0) {
		player->stateleft = 1;
	}
	if (player->stateleft == 1) {
		while (tmp) {
			tmp->posi.x += 5;
			sfSprite_setPosition(tmp->sprite, tmp->posi);
			tmp = tmp->next;
		}
		player->saveleft += 5;
		move_player_rect_left(player, map);
	}
	if (player->saveleft >= 50) {
		player->saveleft = 0;
		player->x -= 1;
		player->stateleft = 0;
	}
}

void upmove_scene2(player_t *player, map_t *map)
{
	element_t *tmp = scene2->next;

	if (sfKeyboard_isKeyPressed(sfKeyZ) && player->stateup == 0 &&
	checkmapup_scene2(player, map) == 0)
		player->stateup = 1;
	if (player->stateup == 1) {
		while (tmp) {
			tmp->posi.y += 5;
			sfSprite_setPosition(tmp->sprite, tmp->posi);
			tmp = tmp->next;
		}
		player->saveup += 5;
		move_player_rect_up(player, map);
	}
	if (player->saveup >= 50) {
		player->saveup = 0;
		player->y -= 1;
		player->stateup = 0;
	}
}

void downmove_scene2(player_t *player, map_t *map)
{
	element_t *tmp = scene2->next;

	if (sfKeyboard_isKeyPressed(sfKeyS) && player->statedown == 0 &&
	checkmapdown_scene2(player, map) == 0)
		player->statedown = 1;
	if (player->statedown == 1) {
		while (tmp) {
			tmp->posi.y -= 5;
			sfSprite_setPosition(tmp->sprite, tmp->posi);
			tmp = tmp->next;
		}
		player->savedown += 5;
		move_player_rect_down(player, map);
	}
	if (player->savedown >= 50) {
		player->savedown = 0;
		player->y += 1;
		player->statedown = 0;
	}
}
