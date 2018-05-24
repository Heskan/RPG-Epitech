/*
** EPITECH PROJECT, 2017
** linked_list_scene3.c
** File description:
** MY RPG 2017 | Hugo Castelli x Constant Loubier x Tais Laraaj x Pierre Herman
*/

#include "my.h"

void insertion_scene3
(const char *path_to_spritesheet, sfVector2f pos, sfIntRect rect, int type)
{
	element_t *tmp = scene3;
	element_t *new = malloc(sizeof(*new));
	if (new == NULL)
		exit(84);
	while (tmp->next != NULL)
		tmp = tmp->next;
	new->Texture= sfTexture_createFromFile(path_to_spritesheet, NULL);
	new->sprite = sfSprite_create();
	sfSprite_setTexture(new->sprite, new->Texture, sfTrue);
	new->posi.x = pos.x;
	new->posi.y = pos.y;
	new->rect = rect;
	sfSprite_setPosition(new->sprite, new->posi);
	sfSprite_setTextureRect(new->sprite, new->rect);
	new->type = type;
	new->next = NULL;
	tmp->next = new;
}

void drawlist_scene3(map_t *map)
{
	element_t *tmp3 = scene3->next;

	while (tmp3 != NULL) {
		sfRenderWindow_drawSprite(map->window, tmp3->sprite, NULL);
		tmp3 = tmp3->next;
	}
}

void initialisation_scene3(void)
{
	scene3 = malloc(sizeof(*scene3));
	if (scene3 == NULL)
		exit(84);
	scene3->next = NULL;
}
