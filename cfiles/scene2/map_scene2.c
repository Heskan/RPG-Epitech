/*
** EPITECH PROJECT, 2017
** map_scene2.c
** File description:
** MY RPG 2017 | Hugo Castelli x Constant Loubier x Tais Laraaj x Pierre Herman
*/

#include "my.h"

void init_characters_scene2(map_t *map, int x, int y)
{
	if (map->scene2[y][x] == 'g')
		insertion_scene2("src/scene2/snow.png",
		(sfVector2f){x * 50, y * 50}, (sfIntRect){0, 0, 50, 50}, 1);
	if (map->scene2[y][x] == '1')
		insertion_scene2("src/scene2/hautgaucheneige.png",
		(sfVector2f){x * 50, y * 50}, (sfIntRect){0, 0, 50, 50}, 1);
	if (map->scene2[y][x] == '2')
		insertion_scene2("src/scene2/enhaut1neige.png",
		(sfVector2f){x * 50, y * 50}, (sfIntRect){0, 0, 50, 50}, 1);
	if (map->scene2[y][x] == '3')
		insertion_scene2("src/scene2/enhaut2neige.png",
		(sfVector2f){x * 50, y * 50}, (sfIntRect){0, 0, 50, 50}, 1);
	if (map->scene2[y][x] == '4')
		insertion_scene2("src/scene2/enhautdroiteneige.png",
		(sfVector2f){x * 50, y * 50}, (sfIntRect){0, 0, 50, 50}, 1);
	if (map->scene2[y][x] == '5')
		insertion_scene2("src/scene2/adroite1neige.png",
		(sfVector2f){x * 50, y * 50}, (sfIntRect){0, 0, 50, 50}, 1);
	if (map->scene2[y][x] == '6')
		insertion_scene2("src/scene2/adroite2neige.png",
		(sfVector2f){x * 50, y * 50}, (sfIntRect){0, 0, 50, 50}, 1);
	if (map->scene2[y][x] == '7')
		insertion_scene2("src/scene2/enbasdroiteneige.png",
		(sfVector2f){x * 50, y * 50}, (sfIntRect){0, 0, 50, 50}, 1);
	if (map->scene2[y][x] == '8')
		insertion_scene2("src/scene2/enbas1.png",
		(sfVector2f){x * 50, y * 50}, (sfIntRect){0, 0, 50, 50}, 1);
	if (map->scene2[y][x] == '9')
		insertion_scene2("src/scene2/enbas2.png",
		(sfVector2f){x * 50, y * 50}, (sfIntRect){0, 0, 50, 50}, 1);
}

void init_characters_scene2_2(map_t *map, int x, int y)
{
	if (map->scene2[y][x] == 'a')
		insertion_scene2("src/scene2/enbasgaucheneige.png",
		(sfVector2f){x * 50, y * 50}, (sfIntRect){0, 0, 50, 50}, 1);
	if (map->scene2[y][x] == 'b')
		insertion_scene2("src/scene2/agauche1neige.png",
		(sfVector2f){x * 50, y * 50}, (sfIntRect){0, 0, 50, 50}, 1);
	if (map->scene2[y][x] == 'c')
		insertion_scene2("src/scene2/agauche2neige.png",
		(sfVector2f){x * 50, y * 50}, (sfIntRect){0, 0, 50, 50}, 1);
	if (map->scene2[y][x] == 'd')
		insertion_scene2("src/scene2/snowtree.png",
		(sfVector2f){x * 50, y * 50}, (sfIntRect){0, 0, 100, 100}, 1);
	if (map->level[y][x] == 'q')
		insertion_scene1("src/scene1/transparant.png",
		(sfVector2f){x * 50, y * 50}, (sfIntRect){0, 0, 50, 50}, 1);
}

void mapinit_scene2(map_t *map)
{
	int x = 0;
	int y = 0;
	map->scene2 = readmap("cfiles/scene2/terrain_scene2");

	initialisation_scene2();
	while (map->scene2[y] != NULL) {
		x = 0;
		while (map->scene2[y][x] != '\0') {
			init_characters_scene2(map, x, y);
			init_characters_scene2_2(map, x, y);
			x++;
		}
		y++;
	}
}
