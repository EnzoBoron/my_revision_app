/*
** EPITECH PROJECT, 2022
** my_app_luna
** File description:
** loop.c
*/

#include "../include/my_app.h"

void loop_window(void)
{
    param *p = init_param();
    case_s *c = create_boxs();
    tache *t = init_tache();
    while (sfRenderWindow_isOpen(p->win)) {
        while (sfRenderWindow_pollEvent(p->win, &p->event)) {
            (p->event.type == sfEvtClosed) ?
                sfRenderWindow_close(p->win) : nothing();
        }
    p->mouse = sfMouse_getPositionRenderWindow(p->win);
    sfRenderWindow_clear(p->win, sfBlack);
    sfRenderWindow_drawRectangleShape(p->win, t->display, NULL);
    sfRenderWindow_drawRectangleShape(p->win, t->search, NULL);
    sfRenderWindow_drawRectangleShape(p->win, t->note, NULL);
    display_squar(c, p); click_function(t, p, c);
    click_zone_button(t, p, c); sfRenderWindow_display(p->win);
    }
}
