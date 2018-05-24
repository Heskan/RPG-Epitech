/*
** EPITECH PROJECT, 2017
** map.c
** File description:
** MY RPG 2017 | Hugo Castelli x Constant Loubier x Tais Laraaj x Pierre Herman
*/

#include "my.h"

void init_characters(map_t *map, int x, int y)
{
	if (map->level[y][x] == 'g')
		insertion_scene1("src/scene1/grass.png",
		(sfVector2f){x * 50, y * 50}, (sfIntRect){0, 0, 50, 50}, 1);
	if (map->level[y][x] == 'w')
		insertion_scene1("src/scene1/water.png",
		(sfVector2f){x * 50, y * 50}, (sfIntRect){0, 0, 50, 50}, 2);
	if (map->level[y][x] == 't')
		insertion_scene1("src/scene1/overworld/house_with_grass.png",
		(sfVector2f){x * 50, y * 50}, (sfIntRect){0, 0, 300, 300}, 3);
	if (map->level[y][x] == 'r')
		insertion_scene1("src/scene1/gravel.png",
		(sfVector2f){x * 50, y * 50}, (sfIntRect){0, 0, 50, 50}, 1);
}

void init_characters_9(map_t *map, int x, int y)
{
	if (map->level[y][x] == 'c')
		insertion_scene1("src/scene1/gravel.png",
		(sfVector2f){x * 50, y * 50}, (sfIntRect){0, 0, 50, 50}, 1);
	if (map->level[y][x] == '1')
		insertion_scene1("src/scene1/lake/1_cote_haut.png",
		(sfVector2f){x * 50, y * 50}, (sfIntRect){0, 0, 50, 50}, 1);
	if (map->level[y][x] == '2')
		insertion_scene1("src/scene1/lake/2_cote_haut_droite.png",
		(sfVector2f){x * 50, y * 50}, (sfIntRect){0, 0, 50, 50}, 1);
	if (map->level[y][x] == '3')
		insertion_scene1("src/scene1/lake/1_cote_droite.png",
		(sfVector2f){x * 50, y * 50}, (sfIntRect){0, 0, 50, 50}, 1);
	if (map->level[y][x] == '4')
		insertion_scene1("src/scene1/lake/2_cote_haut_gauche.png",
		(sfVector2f){x * 50, y * 50}, (sfIntRect){0, 0, 50, 50}, 1);
	if (map->level[y][x] == '5')
		insertion_scene1("src/scene1/lake/1_bas_gauche.png",
		(sfVector2f){x * 50, y * 50}, (sfIntRect){0, 0, 50, 50}, 1);
}

void init_characters_2(map_t *map, int x, int y)
{
	if (map->level[y][x] == '6')
		insertion_scene1("src/scene1/lake/1_cote_gauche.png",
		(sfVector2f){x * 50, y * 50}, (sfIntRect){0, 0, 50, 50}, 1);
	if (map->level[y][x] == '7')
		insertion_scene1("src/scene1/lake/2_cote_bas_gauche.png",
		(sfVector2f){x * 50, y * 50}, (sfIntRect){0, 0, 50, 50}, 1);
	if (map->level[y][x] == '8')
		insertion_scene1("src/scene1/lake/2_cote_bas_droite.png",
		(sfVector2f){x * 50, y * 50}, (sfIntRect){0, 0, 50, 50}, 1);
	if (map->level[y][x] == '9')
		insertion_scene1("src/scene1/lake/bord2.png",
		(sfVector2f){x * 50, y * 50}, (sfIntRect){0, 0, 50, 50}, 1);
	if (map->level[y][x] == '&')
		insertion_scene1("src/scene1/lake/bord1.png",
		(sfVector2f){x * 50, y * 50}, (sfIntRect){0, 0, 50, 50}, 1);
}

void init_characters_8(map_t *map, int x, int y)
{
	if (map->level[y][x] == '~')
		insertion_scene1("src/scene1/lake/bord4.png",
		(sfVector2f){x * 50, y * 50}, (sfIntRect){0, 0, 50, 50}, 1);
	if (map->level[y][x] == '#')
		insertion_scene1("src/scene1/lake/bord3.png",
		(sfVector2f){x * 50, y * 50}, (sfIntRect){0, 0, 50, 50}, 1);
	if (map->level[y][x] == 'b')
		insertion_scene1
		("src/players/ghostwithgrass.png",
		(sfVector2f){x * 50, y * 50}, (sfIntRect){0, 0, 50, 50}, 4);
	if (map->level[y][x] == 'j')
		insertion_scene1
		("src/scene1/overworld/hedge_square_top_left.png",
		(sfVector2f){x * 50, y * 50}, (sfIntRect){0, 0, 50, 50}, 1);
	if (map->level[y][x] == 'k')
		insertion_scene1
		("src/scene1/overworld/hedge_square_top_right.png",
		(sfVector2f){x * 50, y * 50}, (sfIntRect){0, 0, 50, 50}, 1);
}

void init_characters_3(map_t *map, int x, int y)
{
	if (map->level[y][x] == 'l')
		insertion_scene1
		("src/scene1/overworld/hedge_square_bottom_right.png",
		(sfVector2f){x * 50, y * 50}, (sfIntRect){0, 0, 50, 50}, 1);
	if (map->level[y][x] == 'm')
		insertion_scene1
		("src/scene1/overworld/hedge_square_bottom_left.png",
		(sfVector2f){x * 50, y * 50}, (sfIntRect){0, 0, 50, 50}, 1);
	if (map->level[y][x] == 'h')
		insertion_scene1
		("src/scene1/overworld/hedge_square_bottom.png",
		(sfVector2f){x * 50, y * 50}, (sfIntRect){0, 0, 50, 50}, 1);
	if (map->level[y][x] == 'x')
		insertion_scene1
		("src/scene1/overworld/hedge_square_middle_left.png",
		(sfVector2f){x * 50, y * 50}, (sfIntRect){0, 0, 50, 50}, 1);
	if (map->level[y][x] == 'v')
		insertion_scene1
		("src/scene1/overworld/hedge_vertical_bottom.png",
	(sfVector2f){x * 50, y * 50}, (sfIntRect){0, 0, 50, 50}, 1);
}

void mapinit_scene1(map_t *map)
{
	int x = 0;
	int y = 0;
	map->level = readmap("cfiles/scene1/terrain_scene1");

	initialisation_scene1();
	while (map->level[y] != NULL) {
		x = 0;
		while (map->level[y][x] != '\0') {
			init_characters(map, x, y);
			init_characters_2(map, x, y);
			init_characters_3(map, x, y);
			init_characters_4(map, x, y);
			init_characters_5(map, x, y);
			init_characters_6(map, x, y);
			init_characters_7(map, x, y);
			init_characters_8(map, x, y);
			init_characters_9(map, x, y);
			init_characters_10(map, x, y);
			x++;
		}
		y++;
	}
}
