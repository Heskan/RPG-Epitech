/*
** EPITECH PROJECT, 2017
** menu_sprite_3.c
** File description:
** MY RPG 2017 | Hugo Castelli x Constant Loubier x Tais Laraaj x Pierre Herman
*/

#include "my.h"

sfSprite *credit(void)
{
	sfTexture *texture;
	sfVector2f pos = {0, 0};
	sfSprite *sprite = sfSprite_create();

	texture = sfTexture_createFromFile("src/menu/credit.png", NULL);
	sfSprite_setTexture(sprite, texture, sfTrue);
	sfSprite_setPosition(sprite, pos);
	return (sprite);
}

sfSprite *howtoplay(void)
{
	sfTexture *texture;
	sfVector2f pos = {0, 0};
	sfSprite *sprite = sfSprite_create();

	texture = sfTexture_createFromFile("src/menu/howtoplay.png", NULL);
	sfSprite_setTexture(sprite, texture, sfTrue);
	sfSprite_setPosition(sprite, pos);
	return (sprite);
}

sfSprite *mapgame(void)
{
	sfTexture *texture;
	sfVector2f pos = {0, 0};
	sfSprite *sprite = sfSprite_create();

	texture = sfTexture_createFromFile("src/menu/backend.png", NULL);
	sfSprite_setTexture(sprite, texture, sfTrue);
	sfSprite_setPosition(sprite, pos);
	return (sprite);
}

sfSprite *mouse_cred(void)
{
	sfTexture *texture;
	sfVector2f pos = {700, 330};
	sfSprite *sprite = sfSprite_create();

	texture = sfTexture_createFromFile("src/menu/credits_mouse.png", NULL);
	sfSprite_setTexture(sprite, texture, sfTrue);
	sfSprite_setPosition(sprite, pos);
	return (sprite);
}

sfSprite *mouse_play(void)
{
	sfTexture *texture;
	sfVector2f pos = {700, 130};
	sfSprite *sprite = sfSprite_create();

	texture = sfTexture_createFromFile("src/menu/play_mouse.png", NULL);
	sfSprite_setTexture(sprite, texture, sfTrue);
	sfSprite_setPosition(sprite, pos);
	return (sprite);
}
