/*
** EPITECH PROJECT, 2017
** arena_sprite_4.c
** File description:
** MY RPG 2017 | Hugo Castelli x Constant Loubier x Tais Laraaj x Pierre Herman
*/

#include "my.h"

sfSprite *attack2_mousse(void)
{
	sfTexture *texture;
	sfVector2f pos = {300, 500};
	sfSprite *sprite = sfSprite_create();

	texture = sfTexture_createFromFile
	("src/scene1/arena/attack2_mousse.png", NULL);
	sfSprite_setTexture(sprite, texture, sfTrue);
	sfSprite_setPosition(sprite, pos);
	return (sprite);
}

sfSprite *attack3_mousse(void)
{
	sfTexture *texture;
	sfVector2f pos = {600, 570};
	sfSprite *sprite = sfSprite_create();

	texture = sfTexture_createFromFile
	("src/scene1/arena/attack3_mousse.png", NULL);
	sfSprite_setTexture(sprite, texture, sfTrue);
	sfSprite_setPosition(sprite, pos);
	return (sprite);
}

sfSprite *attack4_mousse(void)
{
	sfTexture *texture;
	sfVector2f pos = {300, 570};
	sfSprite *sprite = sfSprite_create();

	texture = sfTexture_createFromFile
	("src/scene1/arena/attack4_mousse.png", NULL);
	sfSprite_setTexture(sprite, texture, sfTrue);
	sfSprite_setPosition(sprite, pos);
	return (sprite);
}
