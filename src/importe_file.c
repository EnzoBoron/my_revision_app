/*
** EPITECH PROJECT, 2022
** my_app_luna
** File description:
** importe_file.c
*/

#include "../include/my_app.h"

void button_importer(tache *t, param *p)
{
    sfVector2f pos = {t->display_pos.x, t->display_size.y};
    sfVector2f size = {t->display_size.x, 100};
    t->import = create_rectangle(pos, size);
    sfFloatRect taille = sfRectangleShape_getGlobalBounds(t->import);
    sfText *message = create_text("Impoter", pos, 30, sfBlack);
    message = set_text_middle_origine(message);

    pos.x += (taille.width / 2);
    pos.y += (taille.height / 2);
    sfText_setPosition(message, pos);

    sfRenderWindow_drawRectangleShape(p->win, t->import, NULL);
    sfRenderWindow_drawText(p->win, message, NULL);

    click_importer(t, p);
    return;
}

void open_win_importer(void)
{
    import_win *w = malloc(sizeof(import_win));
    w->win = create_window(550, 300);
    while (sfRenderWindow_isOpen(w->win)) {
        while (sfRenderWindow_pollEvent(w->win, &w->event)) {
            (w->event.type == sfEvtClosed) ?
                sfRenderWindow_close(w->win) : nothing();
        }
    sfRenderWindow_clear(w->win, sfWhite);
    sfRenderWindow_display(w->win);
    }
}

void click_importer(tache *t, param *p)
{
    sfBool is_clicked = sfFalse;
    p->mouse = sfMouse_getPositionRenderWindow(p->win);

    sfFloatRect dim = sfRectangleShape_getGlobalBounds(t->import);
    is_clicked = sfFloatRect_contains(&dim, p->mouse.x, p->mouse.y);
    if (is_clicked == sfTrue && p->event.type == sfEvtMouseButtonPressed) {
        open_win_importer();
    }

    return;
}
