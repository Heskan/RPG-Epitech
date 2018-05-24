/*
** EPITECH PROJECT, 2017
** menu_sprite_5.c
** File description:
** MY RPG 2017 | Hugo Castelli x Constant Loubier x Tais Laraaj x Pierre Herman
*/

#include "my.h"

sfSprite *help(void)
{
	sfTexture *texture;
	sfVector2f pos = {1020, 530};
	sfSprite *sprite = sfSprite_create();

	texture = sfTexture_createFromFile("src/menu/help.png", NULL);
	sfSprite_setTexture(sprite, texture, sfTrue);
	sfSprite_setPosition(sprite, pos);
	return (sprite);
}

sfSprite *mouse_settings(void)
{
	sfTexture *texture;
	sfVector2f pos = {700, 230};
	sfSprite *sprite = sfSprite_create();

	texture = sfTexture_createFromFile("src/menu/settings_mouse.png", NULL);
	sfSprite_setTexture(sprite, texture, sfTrue);
	sfSprite_setPosition(sprite, pos);
	return (sprite);
}

sfSprite *mouse_quit(void)
{
	sfTexture *texture;
	sfVector2f pos = {700, 430};
	sfSprite *sprite = sfSprite_create();

	texture = sfTexture_createFromFile("src/menu/quit_mouse.png", NULL);
	sfSprite_setTexture(sprite, texture, sfTrue);
	sfSprite_setPosition(sprite, pos);
	return (sprite);
}

sfSprite *mouse_help(void)
{
	sfTexture *texture;
	sfVector2f pos = {1020, 530};
	sfSprite *sprite = sfSprite_create();

	texture = sfTexture_createFromFile("src/menu/help_mouse.png", NULL);
	sfSprite_setTexture(sprite, texture, sfTrue);
	sfSprite_setPosition(sprite, pos);
	return (sprite);
}

sfSprite *pause_ui(void)
{
	sfTexture *texture;
	sfVector2f pos = {0, 0};
	sfSprite *sprite = sfSprite_create();

	texture = sfTexture_createFromFile("src/menu/pause.png", NULL);
	sfSprite_setTexture(sprite, texture, sfTrue);
	sfSprite_setPosition(sprite, pos);
	return (sprite);
}
