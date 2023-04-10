/*
** EPITECH PROJECT, 2022
** my_app_luna
** File description:
** how_many_node.c
*/

#include "../../include/my_app.h"

int how_many_node(case_s *c)
{
    case_s *tmp = c;
    int i = 0;

    while (tmp != NULL) {
        i++;
        tmp = tmp->next;
    }
    return i;
}
