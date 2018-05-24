/*
** EPITECH PROJECT, 2017
** quest_sprite_1.c
** File description:
** MY RPG 2017 | Hugo Castelli x Constant Loubier x Tais Laraaj x Pierre Herman
*/

#include "my.h"

sfSprite *hudq(void)
{
	sfTexture *texture;
	sfVector2f pos = {-1, 450};
	sfSprite *sprite = sfSprite_create();

	texture = sfTexture_createFromFile("src/quest/hudq.png", NULL);
	sfSprite_setTexture(sprite, texture, sfTrue);
	sfSprite_setPosition(sprite, pos);
	return (sprite);
}

sfSprite *quest1(void)
{
	sfTexture *texture;
	sfVector2f pos = {-1, 450};
	sfSprite *sprite = sfSprite_create();

	texture = sfTexture_createFromFile("src/quest/quest1.png", NULL);
	sfSprite_setTexture(sprite, texture, sfTrue);
	sfSprite_setPosition(sprite, pos);
	return (sprite);
}

sfSprite *quest2(void)
{
	sfTexture *texture;
	sfVector2f pos = {-1, 450};
	sfSprite *sprite = sfSprite_create();

	texture = sfTexture_createFromFile("src/quest/quest2.png", NULL);
	sfSprite_setTexture(sprite, texture, sfTrue);
	sfSprite_setPosition(sprite, pos);
	return (sprite);
}

sfSprite *quest3(void)
{
	sfTexture *texture;
	sfVector2f pos = {-1, 450};
	sfSprite *sprite = sfSprite_create();

	texture = sfTexture_createFromFile("src/quest/quest3.png", NULL);
	sfSprite_setTexture(sprite, texture, sfTrue);
	sfSprite_setPosition(sprite, pos);
	return (sprite);
}
