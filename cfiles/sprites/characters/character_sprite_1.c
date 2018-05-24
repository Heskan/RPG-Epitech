/*
** EPITECH PROJECT, 2017
** character_sprite_1.c
** File description:
** MY RPG 2017 | Hugo Castelli x Constant Loubier x Tais Laraaj x Pierre Herman
*/

#include "my.h"

sfSprite *pnj(void)
{
	sfTexture *texture;
	sfVector2f pos = {200, 150};
	sfSprite *sprite = sfSprite_create();

	texture = sfTexture_createFromFile("src/pnj.png", NULL);
	sfSprite_setTexture(sprite, texture, sfTrue);
	sfSprite_setPosition(sprite, pos);
	return (sprite);
}

sfSprite *playersprite(void)
{
	sfTexture *texture;
	sfVector2f pos = {545, 300};
	sfSprite *sprite = sfSprite_create();

	texture = sfTexture_createFromFile("src/player.png", NULL);
	sfSprite_setTexture(sprite, texture, sfTrue);
	sfSprite_setPosition(sprite, pos);
	return (sprite);
}

sfSprite *ghost(void)
{
	sfTexture *texture;
	sfVector2f pos = {630, -60};
	sfSprite *sprite = sfSprite_create();

	texture = sfTexture_createFromFile("src/players/ghost.png", NULL);
	sfSprite_setTexture(sprite, texture, sfTrue);
	sfSprite_setPosition(sprite, pos);
	return (sprite);
}

sfSprite *playerup(void)
{
	sfTexture *texture;
	sfVector2f pos = {545, 300};
	sfSprite *sprite = sfSprite_create();

	texture = sfTexture_createFromFile("src/players/up.png", NULL);
	sfSprite_setTexture(sprite, texture, sfTrue);
	sfSprite_setPosition(sprite, pos);
	return (sprite);
}

sfSprite *playerdown(void)
{
	sfTexture *texture;
	sfVector2f pos = {545, 300};
	sfSprite *sprite = sfSprite_create();

	texture = sfTexture_createFromFile("src/players/down.png", NULL);
	sfSprite_setTexture(sprite, texture, sfTrue);
	sfSprite_setPosition(sprite, pos);
	return (sprite);
}
