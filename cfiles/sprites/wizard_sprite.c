/*
** EPITECH PROJECT, 2017
** wizard_sprite.c
** File description:
** MY RPG 2017 | Hugo Castelli x Constant Loubier x Tais Laraaj x Pierre Herman
*/

#include "my.h"

sfSprite *wizard(void)
{
	sfTexture *texture;
	sfVector2f pos = {200, 55};
	sfSprite *sprite = sfSprite_create();

	texture = sfTexture_createFromFile("src/wizard.png", NULL);
	sfSprite_setTexture(sprite, texture, sfTrue);
	sfSprite_setPosition(sprite, pos);
	return (sprite);
}

sfSprite *wizard2(void)
{
	sfTexture *texture;
	sfVector2f pos = {200, 55};
	sfSprite *sprite = sfSprite_create();

	texture = sfTexture_createFromFile("src/wizard2.png", NULL);
	sfSprite_setTexture(sprite, texture, sfTrue);
	sfSprite_setPosition(sprite, pos);
	return (sprite);
}

sfSprite *wizard3(void)
{
	sfTexture *texture;
	sfVector2f pos = {200, 55};
	sfSprite *sprite = sfSprite_create();

	texture = sfTexture_createFromFile("src/wizard3.png", NULL);
	sfSprite_setTexture(sprite, texture, sfTrue);
	sfSprite_setPosition(sprite, pos);
	return (sprite);
}

sfSprite *wizard4(void)
{
	sfTexture *texture;
	sfVector2f pos = {200, 55};
	sfSprite *sprite = sfSprite_create();

	texture = sfTexture_createFromFile("src/wizard4.png", NULL);
	sfSprite_setTexture(sprite, texture, sfTrue);
	sfSprite_setPosition(sprite, pos);
	return (sprite);
}
