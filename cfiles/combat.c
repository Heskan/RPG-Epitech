/*
** EPITECH PROJECT, 2017
** combat.c
** File description:
** MY RPG 2017 | Hugo Castelli x Constant Loubier x Tais Laraaj x Pierre Herman
*/

#include "my.h"

void mouse_over_fight(map_t *map)
{
	sfVector2i mouse;

	mouse = sfMouse_getPositionRenderWindow(map->window);
	sfFloatRect pos = sfSprite_getGlobalBounds(map->attack1);
	if (mouse.y > pos.top && mouse.y < (pos.top + pos.height)) {
		if (mouse.x > pos.left && mouse.x < (pos.left + pos.width)) {
			sfRenderWindow_drawSprite
			(map->window, map->attack1_mousse, NULL);
		}
	}
	sfFloatRect pos1 = sfSprite_getGlobalBounds(map->attack2);
	if (mouse.y > pos1.top && mouse.y < (pos1.top + pos1.height)) {
		if (mouse.x > pos1.left && mouse.x < (pos1.left + pos1.width)) {
			sfRenderWindow_drawSprite
			(map->window, map->attack2_mousse, NULL);
		}
	}
}

void mouse_over_fight_2(map_t *map)
{
	sfVector2i mouse;

	sfFloatRect pos2 = sfSprite_getGlobalBounds(map->attack3);
	if (mouse.y > pos2.top && mouse.y < (pos2.top + pos2.height)) {
		if (mouse.x > pos2.left && mouse.x < (pos2.left + pos2.width)) {
			sfRenderWindow_drawSprite
			(map->window, map->attack3_mousse, NULL);
		}
	}
	sfFloatRect pos3 = sfSprite_getGlobalBounds(map->attack4);
	if (mouse.y > pos3.top && mouse.y < (pos3.top + pos3.height)) {
		if (mouse.x > pos3.left && mouse.x < (pos3.left + pos3.width)) {
			sfRenderWindow_drawSprite
			(map->window, map->attack4_mousse, NULL);
		}
	}
}

int dev(map_t *map, player_t *player)
{
	int pv;
	int pv2;
	static int pvmen = 100;
	static int pvp = 100;
	int pvghost = 0;
	int pvplayer = 0;
	int cpt = 0;
	sfIntRect pvert;
	sfIntRect pvert1;
	static int i = 0;

	if (player->compteur == 1 && i < 1) {
		pvmen = 100;
		pvp = 100;
		i += 1;
	}
	pvghost = pvp * 300 / 100;
	pvplayer = pvmen * 300 / 100;
	srandom(time(0));
	pvert.top = 0;
	pvert.left = 0;
	pvert.width = pvghost;
	pvert.height = 15;
	sfSprite_setTextureRect(map->pvert, pvert);
	pvert1.top = 0;
	pvert1.left = 0;
	pvert1.width = pvplayer;
	pvert1.height = 15;
	sfSprite_setTextureRect(map->pvert2, pvert1);
	if (pvp == 0 && pvmen == 0) {
		if (player->compteur == 1) {
			player->combat_2 = 0;
			player->compteur = 3;
			map->pvmen = pvp;
			sfRenderWindow_drawSprite
			(map->window, map->gameover, NULL);
		}
		player->compteur = 1;
		sfRenderWindow_drawSprite(map->window, map->gameover, NULL);
	}
	if (pvp < 0 && pvmen < 0) {
		if (player->compteur == 1) {
			player->combat_2 = 0;
			player->compteur = 3;
			map->pvmen = pvp;
			sfRenderWindow_drawSprite
			(map->window, map->gameover, NULL);
		}
		player->compteur = 1;
		sfRenderWindow_drawSprite(map->window, map->gameover, NULL);
		pvp = 100;
		pvmen = 100;
	}
	if (pvp > 0 || pvmen > 0) {
		if (cpt == 0) {
			if (pvp <= 0) {
				player->combat = 2;
				if (player->compteur == 1) {
					player->combat_2 = 0;
					player->compteur = 3;
					map->pvmen = pvp;
				}
				player->compteur = 1;
				map->pvmen = 0;
				sfRenderWindow_drawSprite
				(map->window, map->gameover, NULL);
			}
			if (pvmen <= 0) {
				player->combat = 2;
				if (player->compteur == 1) {
					player->combat_2 = 0;
					player->compteur = 3;
					map->pvmen = pvp;
				}
				player->compteur = 1;
				map->pvmen = pvp;
				sfRenderWindow_drawSprite
				(map->window, map->gameover, NULL);
			}
			if (map->press1 == 1) {
				pv = random() % (20);
				pv = (pv * -1);
				pvp = pvp + pv;
				map->press1 = 0;
				cpt = 1;
				usleep(99999);
			}
			if (map->press2 == 1) {
				pv = random() % (20);
				pv = (pv * -1);
				pvp = pvp + pv;
				map->press2 = 0;
				cpt = 1;
				usleep(99999);
			}
			if (map->press3 == 1) {
				pv = random() % (20);
				pv = (pv * -1);
				pvp = pvp + pv;
				map->press3 = 0;
				cpt = 1;
				usleep(99999);
			}
			if (map->press4 == 1) {
				pv = random() % (20);
				pv = (pv * -1);
				pvp = pvp + pv;
				map->press4 = 0;
				cpt = 1;
				usleep(99999);
			}
		}
		if (cpt == 1) {
			pv2 = random() % (50);
			pv2 = (pv2 * -1);
			pvmen = pvmen + pv2;
			cpt = 0;
		}
	}
	return (0);
}

int attack(map_t *map, player_t *player)
{
	sfRenderWindow_drawSprite(map->window, map->baro2, NULL);
	sfRenderWindow_drawSprite(map->window, map->pvert, NULL);
	sfRenderWindow_drawSprite(map->window, map->baro, NULL);
	sfRenderWindow_drawSprite(map->window, map->pvert2, NULL);
	if (player->compteur == 0)
		dev(map, player);
	else if (player->compteur == 1)
		dev(map, player);
	return (0);
}

int combat(map_t *map, player_t *player)
{
	sfRenderWindow_drawSprite(map->window, map->arena, NULL);
	sfRenderWindow_drawSprite(map->window, map->ghost, NULL);
	sfRenderWindow_drawSprite(map->window, map->legonz, NULL);
	sfRenderWindow_drawSprite(map->window, map->attack1, NULL);
	sfRenderWindow_drawSprite(map->window, map->attack2, NULL);
	sfRenderWindow_drawSprite(map->window, map->attack3, NULL);
	sfRenderWindow_drawSprite(map->window, map->attack4, NULL);
	mouse_over_fight(map);
	mouse_over_fight_2(map);
	attack(map, player);
	return (0);
}
