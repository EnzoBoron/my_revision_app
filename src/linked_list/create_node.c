/*
** EPITECH PROJECT, 2022
** my_app_luna
** File description:
** create_node.c
*/

#include "../../include/my_app.h"

case_s *add_rect_head(case_s *list, sfVector2f pos, sfVector2f size)
{
    case_s *tmp = malloc(sizeof(case_s));
    tmp->casier = create_rectangle(pos, size);
    tmp->next = list;
    return tmp;
}
