/*
** EPITECH PROJECT, 2022
** my_app_luna
** File description:
** Square.c
*/

#include "../include/my_app.h"

void verify_case_square(case_s *c)
{
    while (c != NULL) {
        if (c->casier == NULL)
            printf("NULL\n");
        else {
            printf("Rect\n");
        }
        c = c->next;
    }
    printf("NULL\n");
}
