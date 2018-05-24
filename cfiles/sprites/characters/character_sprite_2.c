/*
** EPITECH PROJECT, 2017
** character_sprite_2.c
** File description:
** MY RPG 2017 | Hugo Castelli x Constant Loubier x Tais Laraaj x Pierre Herman
*/

#include "my.h"

sfSprite *playerright(void)
{
	sfTexture *texture;
	sfVector2f pos = {545, 300};
	sfSprite *sprite = sfSprite_create();

	texture = sfTexture_createFromFile("src/players/right.png", NULL);
	sfSprite_setTexture(sprite, texture, sfTrue);
	sfSprite_setPosition(sprite, pos);
	return (sprite);
}

sfSprite *playerleft(void)
{
	sfTexture *texture;
	sfVector2f pos = {545, 300};
	sfSprite *sprite = sfSprite_create();

	texture = sfTexture_createFromFile("src/players/left.png", NULL);
	sfSprite_setTexture(sprite, texture, sfTrue);
	sfSprite_setPosition(sprite, pos);
	return (sprite);
}

sfSprite *pnjtalk(void)
{
	sfTexture *texture;
	sfVector2f pos = {0, 0};
	sfSprite *sprite = sfSprite_create();

	texture = sfTexture_createFromFile("src/scene1/talkpnj.png", NULL);
	sfSprite_setTexture(sprite, texture, sfTrue);
	sfSprite_setPosition(sprite, pos);
	return (sprite);
}
