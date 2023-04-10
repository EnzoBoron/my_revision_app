##
## EPITECH PROJECT, 2023
## Makefile
## File description:
## Compilation project
##

SRC 	=	src/main.c 						\
			src/display/display_squar.c		\
			src/linked_list/create_node.c	\
			src/linked_list/how_many_node.c	\
			SAV/squar.c						\
			src/init.c						\
			src/loop.c						\
			src/create_all_box.c			\
			src/click.c						\
			src/click_button.c				\
			src/importe_file.c


OBJ			=	$(SRC:.c=.o)

CC			=	gcc

NAME		=	my_app

LIBPRINT  	=	-L lib/printf -lmyprint

LIBMY		= 	-L lib/my -lmy

LIBLIST 	=	-L lib/list -lmylist

LIBSPRINT	=	-L lib/sprintf -lmysprint

CSFML_LIB	=	-L lib/csfml -lmycsfml

CFLAG		+=	-W -Wall -Wextra

VALGRIND	 =	-ggdb3

LIBALL		=	$(LIBMY) $(LIBPRINT) $(LIBLIST) $(LIBSPRINT)\
				$(CSFML_LIB) -I include

CSFML		=	-lcsfml-graphics -lcsfml-window -lcsfml-system -lcsfml-audio

.SILENT: $(OBJ)

all:	$(OBJ)
	@echo -e "\033[32;01m----->  Warning(s)  <-----\033[;0m"
	@make -C  lib/my -s
	@make -C  lib/printf -s
	@make -C  lib/list -s
	@make -C  lib/sprintf -s
	@make -C  lib/csfml -s
	@$(CC) $(OBJ) -o $(NAME) $(LIBALL) $(CFLAG) $(CSFML)
	@echo -e "\033[32;01m----->  Done  <-----\033[;0m"

%.o: %.c
	$(CC) $(CFLAG) -c -o $@ $< $(LIBALL) $(CSFML)

my:
	@make -C  lib/my -s
	@make -C  lib/printf -s
	@make -C  lib/list -s
	@make -C  lib/sprintf -s
	@make -C  lib/csfml -s
	@$(CC) main.c -o $(NAME) $(LIBALL) $(CFLAG) $(VALGRIND) $(CSFML)

test_run:
	@$(CC) tests/test.c -o test -lcriterion --coverage

debug:
	@make -C  lib/my -s
	@make -C  lib/printf -s
	@make -C  lib/list -s
	@make -C  lib/sprintf -s
	@make -C  lib/csfml -s
	@$(CC) $(SRC) -o $(NAME) $(LIBALL) $(VALGRIND) $(CSFML)

seg:
	@$(CC) -o seg seg.c my_putchar.c

clean:
	@make clean -C lib/my -s
	@make clean -C lib/printf -s
	@make clean -C lib/list -s
	@make clean -C lib/sprintf -s
	@make clean -C lib/csfml -s
	@rm -f $(NAME)
	@rm -f *.o
	@rm -f src/*.o
	@rm -f lib/my/*.o
	@rm -f lib/sprintf/*.o
	@rm -f lib/printf/*.o
	@rm -f lib/list/*.o
	@rm -f src/display/*.o
	@rm -f src/linked_list/*.o
	@rm -f src/dead/*.o
	@rm -f SAV/*.o

flag:
	$(CC) $(SRC) -o $(NAME) $(LIBALL) $(CFLAG) $(CSFML)

fclean: clean
	@make fclean -C  lib/my -s
	@make fclean -C  lib/printf -s
	@make fclean -C  lib/list -s
	@make fclean -C  lib/sprintf -s
	@make fclean -C  lib/csfml -s
	@rm -f coding-style-reports.log
	@rm -f include/*.a
	@rm -f *.a


re: fclean all
	@make re -C  lib/my -s
	@make re -C  lib/printf -s
	@make re -C  lib/list -s
	@make re -C  lib/sprintf -s
	@make re -C  lib/csfml -s
