/*
** EPITECH PROJECT, 2020
** initialisation liste doublement chainees
** File description:
** fonction lib liste chainees
*/

#include "../include/function.h"

d_liste *initialisation_int(int value)
{
    d_liste *list = malloc(sizeof(d_liste));

    if (list == NULL)
        return NULL;
    list->nb = value;
    list->next = NULL;
    list->prec = NULL;
    return (list);
}