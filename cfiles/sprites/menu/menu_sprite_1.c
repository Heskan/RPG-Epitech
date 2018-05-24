/*
** EPITECH PROJECT, 2017
** menu_sprite_1.c
** File description:
** MY RPG 2017 | Hugo Castelli x Constant Loubier x Tais Laraaj x Pierre Herman
*/

#include "my.h"

sfSprite *background(void)
{
	sfTexture *texture;
	sfVector2f pos = {0, 0};
	sfSprite *sprite = sfSprite_create();

	texture = sfTexture_createFromFile("src/menu/backend.png", NULL);
	sfSprite_setTexture(sprite, texture, sfTrue);
	sfSprite_setPosition(sprite, pos);
	return (sprite);
}

sfSprite *play(void)
{
	sfTexture *texture;
	sfVector2f pos = {700, 130};
	sfSprite *sprite = sfSprite_create();

	texture = sfTexture_createFromFile("src/menu/play.png", NULL);
	sfSprite_setTexture(sprite, texture, sfTrue);
	sfSprite_setPosition(sprite, pos);
	return (sprite);
}

sfSprite *settings(void)
{
	sfTexture *texture;
	sfVector2f pos = {700, 230};
	sfSprite *sprite = sfSprite_create();

	texture = sfTexture_createFromFile("src/menu/settings.png", NULL);
	sfSprite_setTexture(sprite, texture, sfTrue);
	sfSprite_setPosition(sprite, pos);
	return (sprite);
}

sfSprite *credits(void)
{
	sfTexture *texture;
	sfVector2f pos = {700, 330};
	sfSprite *sprite = sfSprite_create();

	texture = sfTexture_createFromFile("src/menu/credits.png", NULL);
	sfSprite_setTexture(sprite, texture, sfTrue);
	sfSprite_setPosition(sprite, pos);
	return (sprite);
}

sfSprite *quit(void)
{
	sfTexture *texture;
	sfVector2f pos = {700, 430};
	sfSprite *sprite = sfSprite_create();

	texture = sfTexture_createFromFile("src/menu/quit.png", NULL);
	sfSprite_setTexture(sprite, texture, sfTrue);
	sfSprite_setPosition(sprite, pos);
	return (sprite);
}
