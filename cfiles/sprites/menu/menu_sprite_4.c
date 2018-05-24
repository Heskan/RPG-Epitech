/*
** EPITECH PROJECT, 2017
** menu_sprite_4.c
** File description:
** MY RPG 2017 | Hugo Castelli x Constant Loubier x Tais Laraaj x Pierre Herman
*/

#include "my.h"

sfSprite *click_cred(void)
{
	sfTexture *texture;
	sfVector2f pos = {700, 330};
	sfSprite *sprite = sfSprite_create();

	texture = sfTexture_createFromFile("src/menu/credits_click.png", NULL);
	sfSprite_setTexture(sprite, texture, sfTrue);
	sfSprite_setPosition(sprite, pos);
	return (sprite);
}

sfSprite *click_play(void)
{
	sfTexture *texture;
	sfVector2f pos = {700, 130};
	sfSprite *sprite = sfSprite_create();

	texture = sfTexture_createFromFile("src/menu/play_click.png", NULL);
	sfSprite_setTexture(sprite, texture, sfTrue);
	sfSprite_setPosition(sprite, pos);
	return (sprite);
}

sfSprite *click_settings(void)
{
	sfTexture *texture;
	sfVector2f pos = {700, 230};
	sfSprite *sprite = sfSprite_create();

	texture = sfTexture_createFromFile("src/menu/settings_click.png", NULL);
	sfSprite_setTexture(sprite, texture, sfTrue);
	sfSprite_setPosition(sprite, pos);
	return (sprite);
}

sfSprite *click_quit(void)
{
	sfTexture *texture;
	sfVector2f pos = {700, 430};
	sfSprite *sprite = sfSprite_create();

	texture = sfTexture_createFromFile("src/menu/quit_click.png", NULL);
	sfSprite_setTexture(sprite, texture, sfTrue);
	sfSprite_setPosition(sprite, pos);
	return (sprite);
}

sfSprite *click_help(void)
{
	sfTexture *texture;
	sfVector2f pos = {1020, 530};
	sfSprite *sprite = sfSprite_create();

	texture = sfTexture_createFromFile("src/menu/help_click.png", NULL);
	sfSprite_setTexture(sprite, texture, sfTrue);
	sfSprite_setPosition(sprite, pos);
	return (sprite);
}
