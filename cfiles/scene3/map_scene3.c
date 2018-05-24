/*
** EPITECH PROJECT, 2017
** map_scene3.c
** File description:
** MY RPG 2017 | Hugo Castelli x Constant Loubier x Tais Laraaj x Pierre Herman
*/

#include "my.h"

void init_characters_scene3_2(map_t *map, int x, int y)
{
	if (map->scene3[y][x] == 'a')
	insertion_scene3("src/scene3/fireplace.png",
	(sfVector2f){x * 50, y * 50}, (sfIntRect){0, 0, 100, 150}, 1);
	if (map->scene3[y][x] == 'b')
	insertion_scene3("src/scene3/little_door_close.png",
	(sfVector2f){x * 50, y * 50}, (sfIntRect){0, 0, 50, 50}, 1);
	if (map->scene3[y][x] == 'c')
	insertion_scene3("src/scene3/little_door_open.png",
	(sfVector2f){x * 50, y * 50}, (sfIntRect){0, 0, 50, 50}, 1);
	if (map->scene3[y][x] == 'd')
	insertion_scene3("src/scene3/shelf_booking.png",
	(sfVector2f){x * 50, y * 50}, (sfIntRect){0, 0, 150, 100}, 1);
	if (map->scene3[y][x] == 'f')
	insertion_scene3("src/scene3/wallbottom.png",
	(sfVector2f){x * 50, y * 50}, (sfIntRect){0, 0, 50, 50}, 1);
	if (map->scene3[y][x] == 'h')
	insertion_scene3("src/scene3/wall.png",
	(sfVector2f){x * 50, y * 50}, (sfIntRect){0, 0, 50, 50}, 1);
	if (map->scene3[y][x] == 'i')
	insertion_scene3("src/scene3/walltop.png",
	(sfVector2f){x * 50, y * 50}, (sfIntRect){0, 0, 50, 50}, 1);
	if (map->scene3[y][x] == 'j')
	insertion_scene3("src/scene3/slabs_duocolor.png",
	(sfVector2f){x * 50, y * 50}, (sfIntRect){0, 0, 50, 50}, 1);
	if (map->scene3[y][x] == 'k')
	insertion_scene3("src/scene3/brick_yellow.png",
	(sfVector2f){x * 50, y * 50}, (sfIntRect){0, 0, 50, 50}, 1);
	if (map->scene3[y][x] == 'l')
	insertion_scene3("src/scene3/trapdoor.png",
	(sfVector2f){x * 50, y * 50}, (sfIntRect){0, 0, 50, 50}, 1);
}

void init_characters_scene3(map_t *map, int x, int y)
{
	if (map->scene3[y][x] == 'g')
		insertion_scene3("src/scene3/brick_brown.png",
		(sfVector2f){x * 50, y * 50}, (sfIntRect){0, 0, 50, 50}, 1);
	if (map->scene3[y][x] == '1')
		insertion_scene3("src/scene3/carpet_top_left.png",
		(sfVector2f){x * 50, y * 50}, (sfIntRect){0, 0, 50, 50}, 1);
	if (map->scene3[y][x] == '2')
		insertion_scene3("src/scene3/carpet_top.png",
		(sfVector2f){x * 50, y * 50}, (sfIntRect){0, 0, 50, 50}, 1);
	if (map->scene3[y][x] == '3')
		insertion_scene3("src/scene3/carpet_top_right.png",
		(sfVector2f){x * 50, y * 50}, (sfIntRect){0, 0, 50, 50}, 1);
	if (map->scene3[y][x] == '4')
		insertion_scene3("src/scene3/carpet_middle_right.png",
		(sfVector2f){x * 50, y * 50}, (sfIntRect){0, 0, 50, 50}, 1);
	if (map->scene3[y][x] == '5')
		insertion_scene3("src/scene3/carpet_bottom_right.png",
		(sfVector2f){x * 50, y * 50}, (sfIntRect){0, 0, 50, 50}, 1);
	if (map->scene3[y][x] == '6')
		insertion_scene3("src/scene3/carpet_bottom.png",
		(sfVector2f){x * 50, y * 50}, (sfIntRect){0, 0, 50, 50}, 1);
	if (map->scene3[y][x] == '7')
		insertion_scene3("src/scene3/carpet_bottom_left.png",
		(sfVector2f){x * 50, y * 50}, (sfIntRect){0, 0, 50, 50}, 1);
	if (map->scene3[y][x] == '8')
		insertion_scene3("src/scene3/carpet_middle_left.png",
		(sfVector2f){x * 50, y * 50}, (sfIntRect){0, 0, 50, 50}, 1);
	if (map->scene3[y][x] == '9')
		insertion_scene3("src/scene3/carpet_middle.png",
		(sfVector2f){x * 50, y * 50}, (sfIntRect){0, 0, 50, 50}, 1);
	init_characters_scene3_2(map, x, y);
}

void mapinit_scene3(map_t *map)
{
	int x = 0;
	int y = 0;
	map->scene3 = readmap("cfiles/scene3/terrain_scene3");

	initialisation_scene3();
	while (map->scene3[y] != NULL) {
		x = 0;
		while (map->scene3[y][x] != '\0') {
			init_characters_scene3(map, x, y);
			if (map->scene3[y][x] == 'q')
			insertion_scene1("src/scene1/transparant.png",
			(sfVector2f){x * 50, y * 50},
			(sfIntRect){0, 0, 50, 50}, 1);
			x++;
		}
		y++;
	}
}
