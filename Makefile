##
## EPITECH PROJECT, 2017
## Makefile
## File description:
## MY RPG 2017 | Hugo Castelli x Constant Loubier x Tais Laraaj x Pierre Herman
##

SRC	=	cfiles/core.c\
		cfiles/sprites/def1.c\
		cfiles/basic_functions.c\
		cfiles/draw/menu.c\
		cfiles/draw/buttons/buttons.c\
		cfiles/draw/buttons/mouse_click.c\
		cfiles/draw/buttons/mouse_over.c\
		cfiles/draw/drawing.c\
		cfiles/menu/choose_menu.c\
		cfiles/menu/choose_menu_part1.c\
		cfiles/menu/choose_menu_part2.c\
		cfiles/sprites/menu/menu_sprite_1.c\
		cfiles/sprites/menu/menu_sprite_2.c\
		cfiles/sprites/menu/menu_sprite_3.c\
		cfiles/sprites/menu/menu_sprite_4.c\
		cfiles/sprites/menu/menu_sprite_5.c\
		cfiles/sprites/menu/menu_sprite_6.c\
		cfiles/sprites/wizard_sprite.c\
		cfiles/sprites/arena/arena_sprite_1.c\
		cfiles/sprites/arena/arena_sprite_2.c\
		cfiles/sprites/arena/arena_sprite_3.c\
		cfiles/sprites/arena/arena_sprite_4.c\
		cfiles/sprites/quests/quest_sprite_1.c\
		cfiles/sprites/GUI/GUI_sprite_1.c\
		cfiles/sprites/characters/character_sprite_1.c\
		cfiles/sprites/characters/character_sprite_2.c\
		cfiles/window.c\
		cfiles/init.c\
		cfiles/scene1/map.c\
		cfiles/scene1/linked_list_scene1.c\
		cfiles/scene1/player_move_scene1.c\
		cfiles/read.c\
		cfiles/scene1/player.c\
		cfiles/combat.c\
		cfiles/scene2/linked_list_scene2.c\
		cfiles/scene2/player_move_scene2.c\
		cfiles/scene2/player.c\
		cfiles/scene2/map_scene2.c\
		cfiles/scene3/linked_list_scene3.c\
		cfiles/scene3/player_move_scene3.c\
		cfiles/scene3/player.c\
		cfiles/scene3/map_scene3.c\
		cfiles/draw/draw_scene1.c\
		cfiles/draw/life.c\
		cfiles/draw/combat_draw.c\
		cfiles/draw/draw_scene2.c\
		cfiles/scene1/init_map.c\
		cfiles/scene1/move_player_rects.c\
		cfiles/scene3/fight.c\
		cfiles/draw/pnj_draw.c\
		cfiles/sprites/menu/menu_sprite_7.c\
		cfiles/draw/buttons/button_pause.c

OBJ 	= 	$(SRC:.c=.o)

CC	= 	gcc

CFLAGS	=	-I./include/ -W -Wall -Wextra

NAME	=	my_rpg

all: 	$(NAME)

$(NAME):		    $(OBJ)
	$(CC)  -o $(NAME) $(OBJ) $(CFLAGS) -lcsfml-graphics -lcsfml-window -lcsfml-system -lcsfml-audio
	rm -f $(OBJ)

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)

re:	fclean all
