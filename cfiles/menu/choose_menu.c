/*
** EPITECH PROJECT, 2017
** choose menu.c
** File description:
** MY RPG 2017 | Hugo Castelli x Constant Loubier x Tais Laraaj x Pierre Herman
*/

#include "my.h"

void choose_menu(sfMouseButtonEvent event, map_t *map, player_t *player)
{
	choose_menu1(event, map);
	choose_menu2(event, map);
	choose_menu3(event, map);
	choose_menu4(event, map);
	choose_menu5(event, map);
	choose_menu6(event, map, player);
	choose_menu7(event, map);
	choose_menu8(event, map);
}
