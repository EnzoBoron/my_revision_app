/*
** EPITECH PROJECT, 2022
** my_app_luna
** File description:
** init.c
*/

#include "../include/my_app.h"

param *init_param(void)
{
    param *p = malloc(sizeof(param));
    p->win = create_window(1920, 1080);

    return p;
}

tache *init_tache(void)
{
    tache *t = malloc(sizeof(tache));
    t->display_size.x = 500; t->display_size.y = 1000;
    t->search_size.x = 500; t->search_size.y = 1000;
    t->note_size.x = 500; t->note_size.y = 1000;
    t->display_pos.x = 100; t->display_pos.y = 100;
    t->search_pos.x = 650; t->search_pos.y = 100;
    t->note_pos.x = 1200; t->note_pos.y = 100;
    t->display = create_rectangle(t->display_pos, t->display_size);
    t->search = create_rectangle(t->search_pos, t->search_size);
    t->note = create_rectangle(t->note_pos, t->note_size);
    sfTexture *tex_display = create_texture("asset/img_tag_luna.jpg");
    sfRectangleShape_setTexture(t->display, tex_display, sfTrue);
    sfTexture *tex_search = create_texture("asset/img_tag_luna.jpg");
    sfRectangleShape_setTexture(t->search, tex_search, sfTrue);
    sfTexture *tex_note = create_texture("asset/img_tag_luna.jpg");
    sfRectangleShape_setTexture(t->note, tex_note, sfTrue);
    return t;
}
