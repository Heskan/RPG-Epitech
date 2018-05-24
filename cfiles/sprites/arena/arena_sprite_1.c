/*
** EPITECH PROJECT, 2017
** arena_sprite_1.c
** File description:
** MY RPG 2017 | Hugo Castelli x Constant Loubier x Tais Laraaj x Pierre Herman
*/

#include "my.h"

sfSprite *pvert2(void)
{
	sfTexture *texture;
	sfVector2f pos = {700, 370};
	sfSprite *sprite = sfSprite_create();

	texture = sfTexture_createFromFile("src/scene1/arena/pvert2.png", NULL);
	sfSprite_setTexture(sprite, texture, sfTrue);
	sfSprite_setPosition(sprite, pos);
	return (sprite);
}

sfSprite *pvrouge2(void)
{
	sfTexture *texture;
	sfVector2f pos = {700, 400};
	sfSprite *sprite = sfSprite_create();

	texture = sfTexture_createFromFile
	("src/scene1/arena/pvrouge2.png", NULL);
	sfSprite_setTexture(sprite, texture, sfTrue);
	sfSprite_setPosition(sprite, pos);
	return (sprite);
}

sfSprite *legonz(void)
{
	sfTexture *texture;
	sfVector2f pos = {100, 90};
	sfSprite *sprite = sfSprite_create();

	texture = sfTexture_createFromFile("src/scene1/arena/legonz.png", NULL);
	sfSprite_setTexture(sprite, texture, sfTrue);
	sfSprite_setPosition(sprite, pos);
	return (sprite);
}

sfSprite *pvert(void)
{
	sfTexture *texture;
	sfVector2f pos = {110, 40};
	sfSprite *sprite = sfSprite_create();

	texture = sfTexture_createFromFile("src/scene1/arena/pvert.png", NULL);
	sfSprite_setTexture(sprite, texture, sfTrue);
	sfSprite_setPosition(sprite, pos);
	return (sprite);
}

sfSprite *pvrouge(void)
{
	sfTexture *texture;
	sfVector2f pos = {110, 70};
	sfSprite *sprite = sfSprite_create();

	texture = sfTexture_createFromFile
	("src/scene1/arena/pvrouge.png", NULL);
	sfSprite_setTexture(sprite, texture, sfTrue);
	sfSprite_setPosition(sprite, pos);
	return (sprite);
}
