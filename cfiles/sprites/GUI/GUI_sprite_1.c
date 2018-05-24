/*
** EPITECH PROJECT, 2017
** gui_sprite_1.c
** File description:
** MY RPG 2017 | Hugo Castelli x Constant Loubier x Tais Laraaj x Pierre Herman
*/

#include "my.h"

sfSprite *heart(void)
{
	sfTexture *texture;
	sfSprite *sprite = sfSprite_create();

	texture = sfTexture_createFromFile("src/heart.png", NULL);
	sfSprite_setTexture(sprite, texture, sfTrue);
	return (sprite);
}

sfSprite *bag(void)
{
	sfTexture *texture;
	sfVector2f pos = {0, 50};
	sfSprite *sprite = sfSprite_create();

	texture = sfTexture_createFromFile("src/bag.png", NULL);
	sfSprite_setTexture(sprite, texture, sfTrue);
	sfSprite_setPosition(sprite, pos);
	return (sprite);
}

sfSprite *inventaire(void)
{
	sfTexture *texture;
	sfVector2f pos = {90, 70};
	sfSprite *sprite = sfSprite_create();

	texture = sfTexture_createFromFile
	("src/inventaire/inventaire.png", NULL);
	sfSprite_setTexture(sprite, texture, sfTrue);
	sfSprite_setPosition(sprite, pos);
	return (sprite);
}

sfSprite *keyinv(void)
{
	sfTexture *texture;
	sfVector2f pos = {102, 83};
	sfSprite *sprite = sfSprite_create();

	texture = sfTexture_createFromFile("src/inventaire/key_inv.png", NULL);
	sfSprite_setTexture(sprite, texture, sfTrue);
	sfSprite_setPosition(sprite, pos);
	return (sprite);
}
