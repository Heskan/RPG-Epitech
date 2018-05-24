/*
** EPITECH PROJECT, 2017
** arena_sprite_2.c
** File description:
** MY RPG 2017 | Hugo Castelli x Constant Loubier x Tais Laraaj x Pierre Herman
*/

#include "my.h"

sfSprite *arena_grass(void)
{
	sfTexture *texture;
	sfVector2f pos = {0, 0};
	sfSprite *sprite = sfSprite_create();

	texture = sfTexture_createFromFile("src/scene1/arena/grass.png", NULL);
	sfSprite_setTexture(sprite, texture, sfTrue);
	sfSprite_setPosition(sprite, pos);
	return (sprite);
}

sfSprite *arena(void)
{
	sfTexture *texture;
	sfVector2f pos = {0, 0};
	sfSprite *sprite = sfSprite_create();

	texture = sfTexture_createFromFile
	("src/scene1/arena/greenarena.png", NULL);
	sfSprite_setTexture(sprite, texture, sfTrue);
	sfSprite_setPosition(sprite, pos);
	return (sprite);
}

sfSprite *attack1(void)
{
	sfTexture *texture;
	sfVector2f pos = {600, 500};
	sfSprite *sprite = sfSprite_create();

	texture = sfTexture_createFromFile
	("src/scene1/arena/attack1.png", NULL);
	sfSprite_setTexture(sprite, texture, sfTrue);
	sfSprite_setPosition(sprite, pos);
	return (sprite);
}

sfSprite *attack2(void)
{
	sfTexture *texture;
	sfVector2f pos = {300, 500};
	sfSprite *sprite = sfSprite_create();

	texture = sfTexture_createFromFile
	("src/scene1/arena/attack2.png", NULL);
	sfSprite_setTexture(sprite, texture, sfTrue);
	sfSprite_setPosition(sprite, pos);
	return (sprite);
}

sfSprite *attack3(void)
{
	sfTexture *texture;
	sfVector2f pos = {600, 570};
	sfSprite *sprite = sfSprite_create();

	texture = sfTexture_createFromFile
	("src/scene1/arena/attack3.png", NULL);
	sfSprite_setTexture(sprite, texture, sfTrue);
	sfSprite_setPosition(sprite, pos);
	return (sprite);
}
