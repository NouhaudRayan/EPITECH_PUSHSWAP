/*
** EPITECH PROJECT, 2020
** insertion in position gift for a value gift
** File description:
** sous fonction
*/

#include "../include/function.h"

void tmp(d_liste *new, d_liste *cur, int value)
{
    new->nb = value;
    new->next = cur;
    new->prec = NULL;
}

d_liste *insertion_pos(d_liste *list, int value, int pos)
{
    d_liste *new = malloc(sizeof(d_liste));
    d_liste *latest = list;
    d_liste *cur = list;

    if (list == NULL)
        return (NULL);
    if (new != NULL)
        tmp(new, cur, value);
    if (pos == 0) {
        tmp(new, cur, value);
        return (new);
    }
    for (int i = 0; i < pos; i++) {
        latest = cur;
        cur = cur->next;
    }
    latest->next = new;
    new->next = cur;
    new->prec = latest;
    return (new);
}