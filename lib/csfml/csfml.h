/*
** EPITECH PROJECT, 2022
** B-MUL-200-LIL-2-1-myrpg-antoine.ballenghien
** File description:
** csfml.h
*/

#ifndef _CSFML_H_
    #define _CSFML_H_

    #include <SFML/Audio.h>
    #include <SFML/Graphics.h>

    sfSound *create_sound(char *path);
    sfSprite *create_sprite(char *name, const sfIntRect *area);
    sfRenderWindow *create_window(int x, int y);
    sfText *create_text(char *contenu, sfVector2f pos, int weight, sfColor);
    sfText *create_text_grass(char **str, sfVector2f pos, int wei[2], sfColor);
    void *set_text_middle_origine(sfText *text);
    void *set_sprite_middle_origine(sfSprite *sprite);
    sfRectangleShape *create_rectangle(sfVector2f pos, sfVector2f size);
    sfTexture *create_texture(char * pathfile);
    void *set_rectangle_middle_origine(sfRectangleShape *text);

#endif /* _CSFML_H_ */
