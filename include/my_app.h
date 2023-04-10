/*
** EPITECH PROJECT, 2022
** rpg
** File description:
** my_prg.h
*/
#ifndef  _MY_RPG_
    #define _MY_RPG_
    #include "my.h"
    #include "printf.h"
    #include "sprintf.h"
    #include "csfml.h"
    #include "list.h"
    #include <time.h>

    typedef struct param {
        sfRenderWindow *win;
        sfEvent event;
        sfVector2i mouse;
    } param;

    typedef struct tache {
        sfRectangleShape *display;
        sfVector2f display_pos;
        sfVector2f display_size;

        sfRectangleShape *search;
        sfVector2f search_pos;
        sfVector2f search_size;

        sfRectangleShape *note;
        sfVector2f note_pos;
        sfVector2f note_size;

        sfRectangleShape *import;

        sfSprite *background;
    } tache;

    typedef struct case_s {
        sfRectangleShape *casier;
        struct case_s *next;
    } case_s;

    typedef struct import_win {
        sfRenderWindow *win;
        sfEvent event;
        sfVector2i mouse;
    } import_win;

    /* ---------- DISPLAY ----------*/
    void display_squar(case_s *c, param *p);

    /* ---------- CREATE LINKEN_LIST ---------- */
    case_s *add_rect_head(case_s *list, sfVector2f pos, sfVector2f size);
    int how_many_node(case_s *c);

    /*SAV*/
    void verify_case_square(case_s *c);

    /*src*/
    void loop_window(void);
    param *init_param(void);
    tache *init_tache(void);
    case_s *create_boxs(void);
    void remove_color(case_s *s);
    int click_zone_button(tache *t, param *p, case_s *s);
    void click_function(tache *t, param *p, case_s *s);
    void button_importer(tache *t, param *p);

#endif /*_MY_RPG_*/
