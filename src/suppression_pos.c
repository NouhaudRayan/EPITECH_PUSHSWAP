/*
** EPITECH PROJECT, 2020
** suppresion of a value in pos gift in liste doublement chaine
** File description:
** fonction lin doublement chainees
*/

#include "structure_double.h"

d_liste *suppresion_pos(d_liste *list, int pos)
{
    int value = 0;
    d_liste *new = list;
    d_liste *latest = list;
    d_liste *cur = list;

    if (list == NULL)
        return (NULL);
    if (pos == 0) {
        list = list->next;
        list->prec = NULL;
        return (list);
    }
    for (int i = 0; i < pos && new != NULL && new->next != NULL; i++) {
        latest = new;
        new = new->next;
        cur = new->next;
    }
    latest->next = cur;
    free(new);
    return (list);
}