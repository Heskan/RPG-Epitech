/*
** EPITECH PROJECT, 2017
** core.c
** File description:
** MY RPG 2017 | Hugo Castelli x Constant Loubier x Tais Laraaj x Pierre Herman
*/

#include "../include/my.h"

void analyse_pollevent(sfEvent event, map_t *map, player_t *player)
{
	if (event.type == sfEvtClosed)
		sfRenderWindow_close(map->window);
	if (event.type == sfEvtMouseButtonReleased)
		choose_menu(event.mouseButton, map, player);
}

void destroy(sfMusic *music, map_t *map)
{
	sfMusic_destroy(music);
	sfRenderWindow_destroy(map->window);
}

int main(void)
{
	map_t *map = malloc(sizeof(*map));
	player_t *player = malloc(sizeof(*player));
	sfEvent event;
	map->window = my_window_create();
	sfClock *clock;
	sfTime time;
	float seconds;
	sfIntRect rect = rect_create(0, 0, 350, 350);
	sfMusic* music = musics();
	clock = sfClock_create();
	init(player, map);

	while (sfRenderWindow_isOpen(map->window)) {
		seconds = time_init(time, clock, player);
		while (sfRenderWindow_pollEvent(map->window, &event))
			analyse_pollevent(event, map, player);
		drawing(event, map, clock, seconds, player, &rect);
	}
	destroy(music, map);
	return (0);
}
