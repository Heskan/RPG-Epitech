/*
** EPITECH PROJECT, 2017
** menu_sprite_4.c
** File description:
** MY RPG 2017 | Hugo Castelli x Constant Loubier x Tais Laraaj x Pierre Herman
*/

#include "my.h"

sfSprite *back_ui(void)
{
	sfTexture *texture;
	sfVector2f pos = {370, 480};
	sfSprite *sprite = sfSprite_create();

	texture = sfTexture_createFromFile("src/menu/backtomenu.png", NULL);
	sfSprite_setTexture(sprite, texture, sfTrue);
	sfSprite_setPosition(sprite, pos);
	return (sprite);
}

sfSprite *back_mouse_ui(void)
{
	sfTexture *texture;
	sfVector2f pos = {370, 480};
	sfSprite *sprite = sfSprite_create();

	texture = sfTexture_createFromFile("src/menu/backtomenu_mouse.png", NULL);
	sfSprite_setTexture(sprite, texture, sfTrue);
	sfSprite_setPosition(sprite, pos);
	return (sprite);
}
