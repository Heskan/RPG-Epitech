/*
** EPITECH PROJECT, 2017
** menu_sprite_2.c
** File description:
** MY RPG 2017 | Hugo Castelli x Constant Loubier x Tais Laraaj x Pierre Herman
*/

#include "my.h"

sfSprite *box1(void)
{
	sfTexture *texture;
	sfVector2f pos = {450, 195};
	sfSprite *sprite = sfSprite_create();

	texture = sfTexture_createFromFile("src/menu/box.png", NULL);
	sfSprite_setTexture(sprite, texture, sfTrue);
	sfSprite_setPosition(sprite, pos);
	return (sprite);
}

sfSprite *box2(void)
{
	sfTexture *texture;
	sfVector2f pos = {550, 195};
	sfSprite *sprite = sfSprite_create();

	texture = sfTexture_createFromFile("src/menu/box.png", NULL);
	sfSprite_setTexture(sprite, texture, sfTrue);
	sfSprite_setPosition(sprite, pos);
	return (sprite);
}

sfSprite *setting(void)
{
	sfTexture *texture;
	sfVector2f pos = {0, 0};
	sfSprite *sprite = sfSprite_create();

	texture = sfTexture_createFromFile("src/menu/setting.png", NULL);
	sfSprite_setTexture(sprite, texture, sfTrue);
	sfSprite_setPosition(sprite, pos);
	return (sprite);
}

sfSprite *check(void)
{
	sfTexture *texture;
	sfSprite *sprite = sfSprite_create();

	texture = sfTexture_createFromFile("src/menu/boxchecked.png", NULL);
	sfSprite_setTexture(sprite, texture, sfTrue);
	return (sprite);
}

sfSprite *back(void)
{
	sfTexture *texture;
	sfVector2f pos = {0, 0};
	sfSprite *sprite = sfSprite_create();

	texture = sfTexture_createFromFile("src/menu/back.png", NULL);
	sfSprite_setTexture(sprite, texture, sfTrue);
	sfSprite_setPosition(sprite, pos);
	return (sprite);

}
