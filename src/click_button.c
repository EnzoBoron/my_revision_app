/*
** EPITECH PROJECT, 2022
** my_app_luna
** File description:
** click_button.c
*/

#include "../include/my_app.h"

// printf("%d %d %d %d\n", color.r, color.g, color.b, color.a);
void remove_color(case_s *s)
{
    case_s *tmp = s;
    sfColor co;

    while (tmp != NULL) {
        co = sfRectangleShape_getFillColor(tmp->casier);
        if (co.r == 255 && co.g == 255 && co.b == 0 && co.a == 255) {
            sfRectangleShape_setFillColor(tmp->casier, sfWhite);
        }
        tmp = tmp->next;
    }
}

int click_zone_button(tache *t, param *p, case_s *s)
{
    case_s *tmp = s;
    sfBool is_clicked = sfFalse;
    int i = 0;

    while (i < 6) {
        sfFloatRect mouse_pos = sfRectangleShape_getGlobalBounds(tmp->casier);
        is_clicked = sfFloatRect_contains(&mouse_pos, p->mouse.x, p->mouse.y);
        if (is_clicked == sfTrue && p->event.type == sfEvtMouseButtonPressed) {
            remove_color(s);
            sfRectangleShape_setFillColor(tmp->casier, sfYellow);
            sfRectangleShape_setFillColor(t->display, sfWhite);
            sfRectangleShape_setFillColor(t->search, sfWhite);
            sfRectangleShape_setFillColor(t->note, sfWhite);
            return 0;
        }
        i++;
        tmp = tmp->next;
    }
    return 1;
}
