/*
** EPITECH PROJECT, 2022
** my_app_luna
** File description:
** set_origine_squar.c
*/

#include "../../include/my_app.h"

void *set_rectangle_middle_origine(sfRectangleShape *text)
{
    sfFloatRect pos = sfRectangleShape_getGlobalBounds(text);
    sfVector2f size = { pos.width / 2, pos.height / 2 };
    sfRectangleShape_setOrigin(text, size);

    return text;
}
