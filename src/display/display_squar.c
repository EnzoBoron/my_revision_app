/*
** EPITECH PROJECT, 2022
** my_app_luna
** File description:
** display_squar.c
*/

#include "../../include/my_app.h"

void display_squar(case_s *c, param *p)
{
    case_s *tmp = c; int i = 0;

    while (i < 6) {
        if (tmp ->casier != NULL)
            sfRenderWindow_drawRectangleShape(p->win, tmp->casier, NULL);
        else
            printf("NULL\n");
        tmp = tmp->next;
    i++;
    }
    return;
}
