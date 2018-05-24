/*
** EPITECH PROJECT, 2017
** menu_sprite_4.c
** File description:
** MY RPG 2017 | Hugo Castelli x Constant Loubier x Tais Laraaj x Pierre Herman
*/

#include "my.h"

sfSprite *quit_ui(void)
{
	sfTexture *texture;
	sfVector2f pos = {370, 370};
	sfSprite *sprite = sfSprite_create();

	texture = sfTexture_createFromFile("src/menu/quit.png", NULL);
	sfSprite_setTexture(sprite, texture, sfTrue);
	sfSprite_setPosition(sprite, pos);
	return (sprite);
}

sfSprite *resume_ui(void)
{
	sfTexture *texture;
	sfVector2f pos = {370, 250};
	sfSprite *sprite = sfSprite_create();

	texture = sfTexture_createFromFile("src/menu/resume.png", NULL);
	sfSprite_setTexture(sprite, texture, sfTrue);
	sfSprite_setPosition(sprite, pos);
	return (sprite);
}

sfSprite *resume_mouse_ui(void)
{
	sfTexture *texture;
	sfVector2f pos = {370, 250};
	sfSprite *sprite = sfSprite_create();

	texture = sfTexture_createFromFile("src/menu/resume_mouse.png", NULL);
	sfSprite_setTexture(sprite, texture, sfTrue);
	sfSprite_setPosition(sprite, pos);
	return (sprite);
}

sfSprite *click_quitpause(void)
{
	sfTexture *texture;
	sfVector2f pos = {370, 370};
	sfSprite *sprite = sfSprite_create();

	texture = sfTexture_createFromFile("src/menu/quit_click.png", NULL);
	sfSprite_setTexture(sprite, texture, sfTrue);
	sfSprite_setPosition(sprite, pos);
	return (sprite);
}

sfSprite *click_resumepause(void)
{
	sfTexture *texture;
	sfVector2f pos = {370, 250};
	sfSprite *sprite = sfSprite_create();

	texture = sfTexture_createFromFile("src/menu/resume_click.png", NULL);
	sfSprite_setTexture(sprite, texture, sfTrue);
	sfSprite_setPosition(sprite, pos);
	return (sprite);
}
