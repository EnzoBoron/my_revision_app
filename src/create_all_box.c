/*
** EPITECH PROJECT, 2022
** my_app_luna
** File description:
** create_all_box.c
*/

#include "../include/my_app.h"

case_s *create_boxs(void)
{
    sfVector2f pos = {1750, 200};
    sfVector2f size = {50, 50};
    case_s *c = malloc(sizeof(case_s));
    int i = 0;
    while (i < 6) {
        c = add_rect_head(c, pos, size);
        pos.y += 150;
        i++;
    }
    return c;
}
