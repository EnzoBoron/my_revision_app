/*
** EPITECH PROJECT, 2022
** my_app_luna
** File description:
** create_texture.c
*/

#include "csfml.h"

sfTexture *create_texture(char * pathfile)
{
    sfImage* image = sfImage_createFromFile(pathfile);
    sfTexture* texture = sfTexture_createFromImage(image, NULL);
    sfSprite* sprite = sfSprite_create();
    sfSprite_setTexture(sprite, texture, sfTrue);

    return texture;
}
