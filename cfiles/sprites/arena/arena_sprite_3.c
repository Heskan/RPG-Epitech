/*
** EPITECH PROJECT, 2017
** arena_sprite_3.c
** File description:
** MY RPG 2017 | Hugo Castelli x Constant Loubier x Tais Laraaj x Pierre Herman
*/

#include "my.h"

sfSprite *attack4(void)
{
	sfTexture *texture;
	sfVector2f pos = {300, 570};
	sfSprite *sprite = sfSprite_create();

	texture = sfTexture_createFromFile
	("src/scene1/arena/attack4.png", NULL);
	sfSprite_setTexture(sprite, texture, sfTrue);
	sfSprite_setPosition(sprite, pos);
	return (sprite);
}

sfSprite *baro(void)
{
	sfTexture *texture;
	sfVector2f pos = {690, 368};
	sfSprite *sprite = sfSprite_create();

	texture = sfTexture_createFromFile("src/scene1/arena/baro.png", NULL);
	sfSprite_setTexture(sprite, texture, sfTrue);
	sfSprite_setPosition(sprite, pos);
	return (sprite);
}

sfSprite *baro2(void)
{
	sfTexture *texture;
	sfVector2f pos = {101, 38};
	sfSprite *sprite = sfSprite_create();

	texture = sfTexture_createFromFile("src/scene1/arena/baro.png", NULL);
	sfSprite_setTexture(sprite, texture, sfTrue);
	sfSprite_setPosition(sprite, pos);
	return (sprite);
}

sfSprite *gameover(void)
{
	sfTexture *texture;
	sfVector2f pos = {0, 0};
	sfSprite *sprite = sfSprite_create();

	texture = sfTexture_createFromFile
	("src/scene1/arena/gameover.jpg", NULL);
	sfSprite_setTexture(sprite, texture, sfTrue);
	sfSprite_setPosition(sprite, pos);
	return (sprite);
}

sfSprite *attack1_mousse(void)
{
	sfTexture *texture;
	sfVector2f pos = {600, 500};
	sfSprite *sprite = sfSprite_create();

	texture = sfTexture_createFromFile
	("src/scene1/arena/attack1_mousse.png", NULL);
	sfSprite_setTexture(sprite, texture, sfTrue);
	sfSprite_setPosition(sprite, pos);
	return (sprite);
}
