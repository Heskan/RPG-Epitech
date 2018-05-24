/*
** EPITECH PROJECT, 2017
** window.c
** File description:
** MY RPG 2017 | Hugo Castelli x Constant Loubier x Tais Laraaj x Pierre Herman
*/

#include "my.h"

sfRenderWindow *my_window_create()
{
	sfRenderWindow *window;
	sfVideoMode mode;

	mode.width = 1130;
	mode.height = 650;
	mode.bitsPerPixel = 32;
	window = sfRenderWindow_create
	(mode, "My RPG 2017", sfNone | sfClose, NULL);
	sfRenderWindow_setFramerateLimit(window, 80);
	return (window);
}
