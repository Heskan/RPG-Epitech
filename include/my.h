/*
** EPITECH PROJECT, 2017
** my.h
** File description:
** MY RPG 2017 | Hugo Castelli x Constant Loubier x Tais Laraaj x Pierre Herman
*/

#include <SFML/Graphics.h>
#include <SFML/Window/Window.h>
#include <SFML/System.h>
#include <SFML/System/Export.h>
#include <SFML/System/Time.h>
#include <SFML/System/Types.h>
#include <SFML/Audio.h>
#include <SFML/System/InputStream.h>
#include <SFML/System/Vector3.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <curses.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <time.h>
#include <sys/wait.h>

typedef struct cbt_t {
	int pv;
	int pv2;
} cbt_t;

typedef struct map_t {
	sfRenderWindow *window;
	sfSprite* background;
	sfSprite* play;
	sfSprite* settings;
	sfSprite* credits;
	sfSprite* quit;
	sfSprite* help;
	sfSprite* howtoplay;
	sfSprite* pnj;
	sfSprite* credit;
	sfSprite* setting;
	sfSprite* box;
	sfSprite* box2;
	sfSprite* check;
	sfSprite* back;
	sfSprite* wizard;
	sfSprite* wizard2;
	sfSprite* wizard3;
	sfSprite* wizard4;
	sfSprite* heart;
	sfSprite* map;
	sfSprite* bag;
	sfSprite* arena_grass;
	sfSprite* ghost;
	sfSprite* arena;
	sfSprite* attack1;
	int press1;
	sfSprite* attack2;
	int press2;
	sfSprite* attack3;
	int press3;
	sfSprite* attack4;
	int press4;
	sfSprite* pvert;
	sfSprite* pvrouge;
	sfSprite* pvert2;
	sfSprite* pvrouge2;
	sfSprite* legonz;
	sfSprite* inventaire;
	sfSprite* hudq;
	sfSprite* quest1;
	sfSprite* quest2;
	sfSprite* quest3;
	sfSprite* keyinv;
	sfSprite* baro;
	sfSprite* baro2;
	sfSprite* gameover;
	sfSprite* cred_mouse;
	sfSprite* play_mouse;
	sfSprite* settings_mouse;
	sfSprite* quit_mouse;
	sfSprite* help_mouse;
	sfSprite* cred_click;
	sfSprite* play_click;
	sfSprite* settings_click;
	sfSprite* quit_click;
	sfSprite* help_click;
	sfSprite* attack1_mousse;
	sfSprite* attack2_mousse;
	sfSprite* attack3_mousse;
	sfSprite* attack4_mousse;
	sfSprite* pause;
	sfSprite* quitui;
	sfSprite* resumeui;
	sfSprite* resumemouseui;
	sfSprite* click_quitpause;
	sfSprite* click_resumepause;
	sfSprite* pnjtalk;
	sfSprite* backui;
	sfSprite* backui_mouse;
	int cred;
	int checked;
	int next;
	int quest;
	int affpnj;
	char **level;
	char **scene2;
	char **scene3;
	int pvmen;
	int pvman;
} map_t;

typedef struct player_s {
	char *lock;
	char *lock_scene3;
	char *fight;
	char *treasure;
	char *pnj;
	char *fight_2;
	int combat_2;
	int combat;
	sfSprite* playerSprite;
	sfVector2f playerPos;
	int stateright;
	int stateleft;
	int stateup;
	int statedown;
	int saveright;
	int saveleft;
	int saveup;
	int savedown;
	int x;
	int y;
	int saveposx;
	int saveposy;
	int ycpt;
	int compteur;
	int affinv;
	sfSprite* playerup;
	sfIntRect playeruprect;
	sfSprite* playerdown;
	sfIntRect playerdownrect;
	sfSprite* playerright;
	sfIntRect playerrightrect;
	sfSprite* playerleft;
	sfIntRect playerleftrect;
	sfClock *playerclock;
	sfTime playertime;
	float playerseconds;
}player_t;

typedef struct element_s {
	sfTexture *Texture;
	sfVector2f posi;
	sfIntRect rect;
	sfSprite *sprite;
	int type;
	struct element_s *next;
}element_t;

typedef struct stat_s {
	int mana;
	int life;
} stat_t;

element_t *list;
element_t *scene2;
element_t *scene3;

void choose_menu8(sfMouseButtonEvent event, map_t *map);
void mouse_over_pause2(map_t *map);
void init(player_t *player, map_t *map);
float time_init(sfTime time, sfClock *clock, player_t *player);
void move_rect(sfIntRect *rect, int offset, int max_value);
sfIntRect rect_create(int top, int left, int height, int width);
sfMusic* musics(void);
void move_rect(sfIntRect *rect, int offset, int max_value);
void movemaprect(void);
sfIntRect rect_create(int top, int left, int height, int width);
void mouse_over(map_t *map);
void mouse_over_pause(map_t *map);
void mouse_click(map_t *map);
void drawmenu(map_t *map, sfClock *clock, float seconds, sfIntRect *rect);
void drawing(sfEvent event, map_t *map, sfClock *clock, float seconds,
	player_t *player, sfIntRect *rect);
void choose_menu(sfMouseButtonEvent event, map_t *map, player_t *player);
void choose_menu1(sfMouseButtonEvent event, map_t *map);
void choose_menu2(sfMouseButtonEvent event, map_t *map);
void choose_menu3(sfMouseButtonEvent event, map_t *map);
void choose_menu4(sfMouseButtonEvent event, map_t *map);
void choose_menu5(sfMouseButtonEvent event, map_t *map);
void choose_menu6(sfMouseButtonEvent event, map_t *map, player_t *player);
void choose_menu7(sfMouseButtonEvent event, map_t *map);
void mouse_click1(map_t *map);
void mouse_click2(map_t *map);
void mouse_click3(map_t *map);
void mouse_over_pause1(map_t *map);
void mouse_over1(map_t *map);
void mouse_over2(map_t *map);
void mouse_over3(map_t *map);
void initplayer_scene1(player_t *player);
void initplayer_scene2(player_t *player);
void initplayer_scene3(player_t *player);
char **readmap(char *path);
void mapinit_scene1(map_t *map);
void insertion_scene1(const char *path_to_spritesheet,
	sfVector2f pos, sfIntRect rect, int type);
void drawlist_scene1(map_t *map);
void initialisation_scene1(void);
void playermoves_scene1(map_t *map, player_t *player);
int checkmapdown_scene1(player_t *player, map_t *map);
int checkmapright_scene1(player_t *player, map_t *map);
int checkmapleft_scene1(player_t *player, map_t *map);
int checkmapup_scene1(player_t *player, map_t *map);
void rightmove_scene1(player_t *player, map_t *map);
void leftmove_scene1(player_t *player, map_t *map);
void upmove_scene1(player_t *player, map_t *map);
void downmove_scene1(player_t *player, map_t *map);
void mapinit_scene2(map_t *map);
void insertion_scene2(const char *path_to_spritesheet, sfVector2f pos,
	sfIntRect rect, int type);
void drawlist_scene2(map_t *map);
void initialisation_scene2(void);
void playermoves_scene2(map_t *map, player_t *player);
int checkmapdown_scene2(player_t *player, map_t *map);
int checkmapright_scene2(player_t *player, map_t *map);
int checkmapleft_scene2(player_t *player, map_t *map);
int checkmapup_scene2(player_t *player, map_t *map);
void rightmove_scene2(player_t *player, map_t *map);
void leftmove_scene2(player_t *player, map_t *map);
void upmove_scene2(player_t *player, map_t *map);
void downmove_scene2(player_t *player, map_t *map);
void mapinit_scene3(map_t *map);
void insertion_scene3(const char *path_to_spritesheet, sfVector2f pos,
	sfIntRect rect, int type);
void drawlist_scene3(map_t *map);
void initialisation_scene3(void);
void playermoves_scene3(map_t *map, player_t *player);
int checkmapdown_scene3(player_t *player, map_t *map);
int checkmapright_scene3(player_t *player, map_t *map);
int checkmapleft_scene3(player_t *player, map_t *map);
int checkmapup_scene3(player_t *player, map_t *map);
void rightmove_scene3(player_t *player, map_t *map);
void leftmove_scene3(player_t *player, map_t *map);
void upmove_scene3(player_t *player, map_t *map);
void downmove_scene3(player_t *player, map_t *map);
sfRenderWindow *my_window_create(void);
void createsprite(map_t *map, player_t *player);
void draw_all_scene1(map_t *map, sfClock *clock, float seconds,
	player_t *player);
void draw_life(map_t *map);
void combat_draw(player_t *player, map_t *map);
void pnj_draw(map_t *map);
void draw_all_scene2(map_t *map, player_t *player);
void init_characters_5(map_t *map, int x, int y);
void init_characters_10(map_t *map, int x, int y);
void init_characters_6(map_t *map, int x, int y);
void init_characters_4(map_t *map, int x, int y);
void init_characters_7(map_t *map, int x, int y);
void move_player_rect_right(player_t *player, map_t *map);
void move_player_rect_left(player_t *player, map_t *map);
void move_player_rect_down(player_t *player, map_t *map);
void move_player_rect_up(player_t *player, map_t *map);
void combat_scene_3_character(player_t *player, map_t *map, int i);
sfSprite *background(void);
sfSprite *background(void);
sfSprite *play(void);
sfSprite *settings(void);
sfSprite *credits(void);
sfSprite *help(void);
sfSprite *howtoplay(void);
sfSprite *mapgame(void);
sfSprite *quit(void);
sfSprite *box1(void);
sfSprite *box2(void);
sfSprite *setting(void);
sfSprite *check(void);
sfSprite *back(void);
sfSprite *credit(void);
sfSprite *wizard(void);
sfSprite *wizard2(void);
sfSprite *wizard3(void);
sfSprite *wizard4(void);
sfSprite *pvert2(void);
sfSprite *pvrouge2(void);
sfSprite *legonz(void);
sfSprite *pvert(void);
sfSprite *pvrouge(void);
sfSprite *arena_grass(void);
sfSprite *arena(void);
sfSprite *attack1(void);
sfSprite *attack2(void);
sfSprite *attack3(void);
sfSprite *attack4(void);
sfSprite *hudq(void);
sfSprite *quest1(void);
sfSprite *quest2(void);
sfSprite *quest3(void);
sfSprite *heart(void);
sfSprite *bag(void);
sfSprite *inventaire(void);
sfSprite *keyinv(void);
sfSprite *pnj(void);
sfSprite *playersprite(void);
sfSprite *ghost(void);
sfSprite *playerup(void);
sfSprite *playerdown(void);
sfSprite *playerright(void);
sfSprite *playerleft(void);
sfSprite *baro(void);
sfSprite *baro2(void);
sfSprite *mouse_cred(void);
sfSprite *mouse_play(void);
sfSprite *mouse_settings(void);
sfSprite *mouse_quit(void);
sfSprite *mouse_help(void);
sfSprite *click_cred(void);
sfSprite *click_play(void);
sfSprite *click_settings(void);
sfSprite *click_quit(void);
sfSprite *click_help(void);
sfSprite *attack1_mousse(void);
sfSprite *attack2_mousse(void);
sfSprite *attack3_mousse(void);
sfSprite *attack4_mousse(void);
sfSprite *gameover(void);
sfSprite *pause_ui(void);
sfSprite *quit_ui(void);
sfSprite *resume_ui(void);
sfSprite *resume_mouse_ui(void);
sfSprite *click_quitpause(void);
sfSprite *click_resumepause(void);
sfSprite *pnjtalk(void);
sfSprite *back_ui(void);
sfSprite *back_mouse_ui(void);
void spriteinsertions(map_t *map);
void playermoves(map_t *map, player_t *player);
int combat(map_t *map, player_t *player);
void destroy(sfMusic *music, map_t *map);
int press34(map_t *map, int pv, int pvp, int cpt);
void mouse_click_pause(map_t *map);
void mouse_click_pause1(map_t *map);
