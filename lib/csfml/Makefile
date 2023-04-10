##
## EPITECH PROJECT, 2022
## B-MUL-200-LIL-2-1-myrpg-antoine.ballenghien
## File description:
## Makefile
##

SRC 	=	create_sound.c				\
			create_sprite.c				\
			create_text.c				\
			create_window.c				\
			create_text_grass.c			\
			set_origine_sprite.c		\
			set_origine_text.c			\
			create_rectangle.c			\
			create_texture.c			\
			set_origine_squar.c

OBJ     =		$(SRC:.c=.o)

NAME    =		libmycsfml.a

CPH     =		cp -f csfml.h ../../include

CPNAME  =		cp -f $(NAME) ../../include

#.SILENT: $(OBJ)

all: $(OBJ)
		@ar rc $(NAME) $(OBJ)
		@$(CPNAME)
		@$(CPH)

clean:
	@rm -f *.o
	@rm -f *.a

fclean:
	@rm -f $(NAME)

re: fclean all
