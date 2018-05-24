/*
** EPITECH PROJECT, 2017
** basic_functions.c
** File description:
** MY RPG 2017 | Hugo Castelli x Constant Loubier x Tais Laraaj x Pierre Herman
*/

#include "my.h"

sfMusic* musics(void)
{
	sfMusic* music;

	music = sfMusic_createFromFile("./src/music.ogg");
	sfMusic_play(music);
	sfMusic_setLoop(music, sfTrue);
	return (music);
}

void move_rect(sfIntRect *rect, int offset, int max_value)
{
	if (rect->left < max_value)
		rect->left += offset;
	else
		rect->left = 0;
}

void movemaprect(void)
{
	element_t *tmp = list->next;

	while (tmp != NULL) {
		if (tmp->type == 2) {
			move_rect(&tmp->rect, 50, 350);
			sfSprite_setTextureRect(tmp->sprite, tmp->rect);
		}
		tmp = tmp->next;
	}
}

sfIntRect rect_create(int top, int left, int height, int width)
{
	sfIntRect rect;
	rect.top = top;
	rect.left = left;
	rect.height = height;
	rect.width = width;
	return (rect);
}
