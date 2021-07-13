/*
** EPITECH PROJECT, 2020
** get for int
** File description:
** fonction liste chainees
*/

#include "../include/function.h"

int get_int(d_liste *list, int pos)
{
    d_liste *new = list;
    int i = 0;

    if (list == NULL || new->next == NULL)
        return 0;
    while (i < pos) {
        i++;
        new = new->next;
    }
    return (new->nb);
}