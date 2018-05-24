/*
** EPITECH PROJECT, 2017
** init.c
** File description:
** MY RPG 2017 | Hugo Castelli x Constant Loubier x Tais Laraaj x Pierre Herman
*/

#include "../include/my.h"

void mapinit(map_t *map)
{
	map->cred = 0;
	map->checked = 0;
	map->next = 0;
	map->quest = 2;
	mapinit_scene1(map);
	mapinit_scene2(map);
	mapinit_scene3(map);
}

void init(player_t *player, map_t *map)
{
	initplayer_scene1(player);
	mapinit(map);
	player->playerclock = sfClock_create();
	createsprite(map, player);
	map->pvmen = 100;
}

float time_init(sfTime time, sfClock *clock, player_t *player)
{
	float seconds;

	time = sfClock_getElapsedTime(clock);
	seconds = time.microseconds / 1000000.0;
	player->playertime = sfClock_getElapsedTime(player->playerclock);
	player->playerseconds = player->playertime.microseconds / 100000.0;
	return (seconds);
}
