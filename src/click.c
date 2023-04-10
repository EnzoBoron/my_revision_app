/*
** EPITECH PROJECT, 2022
** my_app_luna
** File description:
** click.c
*/

#include "../include/my_app.h"

int click_zone_display(tache *t, param *p)
{
    sfBool is_clicked = sfFalse;
    sfFloatRect mouse_pos = sfRectangleShape_getGlobalBounds(t->display);
    is_clicked = sfFloatRect_contains(&mouse_pos, p->mouse.x, p->mouse.y);
    if (is_clicked == sfTrue && p->event.type == sfEvtMouseButtonPressed) {
        sfRectangleShape_setFillColor(t->display, sfYellow);
        return 0;
    }
    return 1;
}

int click_zone_search(tache *t, param *p)
{
    sfBool is_clicked = sfFalse;
    sfFloatRect mouse_pos = sfRectangleShape_getGlobalBounds(t->search);
    is_clicked = sfFloatRect_contains(&mouse_pos, p->mouse.x, p->mouse.y);
    if (is_clicked == sfTrue && p->event.type == sfEvtMouseButtonPressed) {
        sfRectangleShape_setFillColor(t->search, sfYellow);
        return 0;
    }
    return 1;
}

int click_zone_note(tache *t, param *p)
{
    sfBool is_clicked = sfFalse;
    sfFloatRect mouse_pos = sfRectangleShape_getGlobalBounds(t->note);
    is_clicked = sfFloatRect_contains(&mouse_pos, p->mouse.x, p->mouse.y);
    if (is_clicked == sfTrue && p->event.type == sfEvtMouseButtonPressed) {
        sfRectangleShape_setFillColor(t->note, sfYellow);
        return 0;
    }
    return 1;
}

void click_function(tache *t, param *p, case_s *s)
{
    if (click_zone_display(t, p) == 0) {
        sfRectangleShape_setFillColor(t->note, sfWhite);
        sfRectangleShape_setFillColor(t->search, sfWhite);
        remove_color(s);
    }
    if (click_zone_search(t, p) == 0) {
        sfRectangleShape_setFillColor(t->display, sfWhite);
        sfRectangleShape_setFillColor(t->note, sfWhite);
        remove_color(s);
    }
    if (click_zone_note(t, p) == 0) {
        sfRectangleShape_setFillColor(t->display, sfWhite);
        sfRectangleShape_setFillColor(t->search, sfWhite);
        remove_color(s);
    }
    button_importer(t, p);
    return;
}
