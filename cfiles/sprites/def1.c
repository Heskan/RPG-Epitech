/*
** EPITECH PROJECT, 2017
** def1.c
** File description:
** MY RPG 2017 | Hugo Castelli x Constant Loubier x Tais Laraaj x Pierre Herman
*/

#include "my.h"

void create_sprite_1(map_t *map)
{
	map->background = background();
	map->play = play();
	map->settings = settings();
	map->credits = credits();
	map->quit = quit();
	map->howtoplay = howtoplay();
	map->help = help();
	map->pnj = pnj();
	map->credit = credit();
	map->setting = setting();
	map->box = box1();
	map->box2 = box2();
	map->check = check();
	map->back = back();
	map->wizard = wizard();
	map->wizard2 = wizard2();
	map->wizard3 = wizard3();
	map->wizard4 = wizard4();
	map->heart = heart();
	map->map = mapgame();
}

void create_sprite_2(map_t *map)
{
	map->arena_grass = arena_grass();
	map->ghost = ghost();
	map->arena = arena();
	map->attack1 = attack1();
	map->attack2 = attack2();
	map->attack3 = attack3();
	map->attack4 = attack4();
	map->pvert = pvert();
	map->baro = baro();
	map->baro2 = baro2();
	map->gameover = gameover();
	map->pvrouge = pvrouge();
	map->pvert2 = pvert2();
	map->pvrouge2 = pvrouge2();
	map->legonz = legonz();
	map->inventaire = inventaire();
	map->hudq = hudq();
	map->quest1 = quest1();
	map->quest2 = quest2();
	map->quest3 = quest3();
}

void create_sprite_3(map_t *map, player_t *player)
{
	map->keyinv = keyinv();
	map->cred_mouse = mouse_cred();
	map->play_mouse = mouse_play();
	map->settings_mouse = mouse_settings();
	map->quit_mouse = mouse_quit();
	map->help_mouse = mouse_help();
	map->cred_click = click_cred();
	map->play_click = click_play();
	map->settings_click = click_settings();
	map->quit_click = click_quit();
	map->help_click = click_help();
	player->playerup = playerup();
	player->playerdown = playerdown();
	player->playerright = playerright();
	player->playerleft = playerleft();
	map->attack1_mousse = attack1_mousse();
	map->attack2_mousse = attack2_mousse();
	map->attack3_mousse = attack3_mousse();
	map->attack4_mousse = attack4_mousse();
	map->pause = pause_ui();
}

void create_sprite_4(map_t *map, player_t *player)
{
	map->quitui = quit_ui();
	map->resumeui = resume_ui();
	map->resumemouseui = resume_mouse_ui();
	map->pnjtalk = pnjtalk();
	map->bag = bag();
	player->playerSprite = playersprite();
	map->click_quitpause = click_quitpause();
	map->click_resumepause = click_resumepause();
	map->backui = back_ui();
	map->backui_mouse = back_mouse_ui();
}

void createsprite(map_t *map, player_t *player)
{
	create_sprite_1(map);
	create_sprite_2(map);
	create_sprite_3(map, player);
	create_sprite_4(map, player);
}
