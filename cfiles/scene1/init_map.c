/*
** EPITECH PROJECT, 2017
** map.c
** File description:
** MY RPG 2017 | Hugo Castelli x Constant Loubier x Tais Laraaj x Pierre Herman
*/

#include "my.h"

void init_characters_5(map_t *map, int x, int y)
{
	if (map->level[y][x] == 'L')
		insertion_scene1("src/scene1/overworld/flag_blue.png",
		(sfVector2f){x * 50, y * 50}, (sfIntRect){0, 0, 50, 50}, 1);
	if (map->level[y][x] == 'p')
		insertion_scene1
		("src/scene1/overworld/wooden_box_with_grassxcf.png",
		(sfVector2f){x * 50, y * 50}, (sfIntRect){0, 0, 50, 100}, 1);
	if (map->level[y][x] == 'P')
		insertion_scene1
		("src/scene1/overworld/signboard_with_grass.png",
		(sfVector2f){x * 50, y * 50}, (sfIntRect){0, 0, 50, 50}, 1);
}

void init_characters_10(map_t *map, int x, int y)
{
	if (map->level[y][x] == 'M')
		insertion_scene1("src/scene1/overworld/tree_trunk.png",
		(sfVector2f){x * 50, y * 50}, (sfIntRect){0, 0, 100, 50}, 1);
	if (map->level[y][x] == '=')
		insertion_scene1("src/quest/key.png",
		(sfVector2f){x * 50, y * 50}, (sfIntRect){0, 0, 50, 50}, 1);
	if (map->level[y][x] == '+')
		insertion_scene1("src/players/pnj.png",
		(sfVector2f){x * 50, y * 50}, (sfIntRect){0, 0, 50, 50}, 1);
	if (map->level[y][x] == '.')
		insertion_scene1("src/players/gnome.png",
		(sfVector2f){x * 50, y * 50}, (sfIntRect){0, 0, 50, 50}, 1);
}

void init_characters_6(map_t *map, int x, int y)
{
	if (map->level[y][x] == 'V')
		insertion_scene1("src/scene1/overworld/hedge_vertical_top.png",
		(sfVector2f){x * 50, y * 50}, (sfIntRect){0, 0, 50, 50}, 1);
	if (map->level[y][x] == 'H')
		insertion_scene1
		("src/scene1/overworld/hedge_horizontal_left.png",
		(sfVector2f){x * 50, y * 50}, (sfIntRect){0, 0, 50, 50}, 1);
	if (map->level[y][x] == 'E')
		insertion_scene1
		("src/scene1/overworld/hedge_horizontal_right.png",
		(sfVector2f){x * 50, y * 50}, (sfIntRect){0, 0, 50, 50}, 1);
	if (map->level[y][x] == 'e')
		insertion_scene1("src/scene1/transparant.png",
		(sfVector2f){x * 50, y * 50}, (sfIntRect){0, 0, 50, 50}, 1);
	if (map->level[y][x] == 'T')
		insertion_scene1("src/scene1/overworld/tree.png",
		(sfVector2f){x * 50, y * 50}, (sfIntRect){0, 0, 200, 200}, 1);
}

void init_characters_4(map_t *map, int x, int y)
{
	if (map->level[y][x] == 's')
		insertion_scene1("src/scene1/overworld/statue_of_god_dirt.png",
		(sfVector2f){x * 50, y * 50}, (sfIntRect){0, 0, 200, 200}, 1);
	if (map->level[y][x] == 'q')
		insertion_scene1("src/scene1/transparant.png",
		(sfVector2f){x * 50, y * 50}, (sfIntRect){0, 0, 50, 50}, 1);
	if (map->level[y][x] == 'i')
		insertion_scene1("src/scene1/overworld/interrior.png",
		(sfVector2f){x * 50, y * 50}, (sfIntRect){0, 0, 50, 50}, 1);
	if (map->level[y][x] == 'f')
		insertion_scene1("src/scene1/overworld/long_flower_pot.png",
		(sfVector2f){x * 50, y * 50}, (sfIntRect){0, 0, 50, 100}, 1);
	if (map->level[y][x] == 'Q')
		insertion_scene1("src/scene1/overworld/pieces_of_skeleton.png",
		(sfVector2f){x * 50, y * 50}, (sfIntRect){0, 0, 50, 100}, 1);
}

void init_characters_7(map_t *map, int x, int y)
{
	if (map->level[y][x] == 'F')
		insertion_scene1("src/scene1/overworld/flowers_seven.png",
		(sfVector2f){x * 50, y * 50}, (sfIntRect){0, 0, 50, 50}, 1);
	if (map->level[y][x] == 'y')
		insertion_scene1("src/scene1/overworld/flowers_three.png",
		(sfVector2f){x * 50, y * 50}, (sfIntRect){0, 0, 50, 50}, 1);
	if (map->level[y][x] == 'B')
		insertion_scene1("src/scene1/overworld/tree_foot.png",
		(sfVector2f){x * 50, y * 50}, (sfIntRect){0, 0, 50, 50}, 1);
	if (map->level[y][x] == 'u')
		insertion_scene1("src/scene1/overworld/stone.png",
		(sfVector2f){x * 50, y * 50}, (sfIntRect){0, 0, 100, 100}, 1);
	if (map->level[y][x] == 'Y')
		insertion_scene1("src/scene1/overworld/fountain.png",
		(sfVector2f){x * 50, y * 50}, (sfIntRect){0, 0, 200, 200}, 1);
}
