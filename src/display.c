/*
** EPITECH PROJECT, 2020
** display the liste doublement chainees
** File description:
** fonction liste doublement chainees
*/

#include "../include/function.h"

void *display(d_liste *list)
{
    if (list == NULL)
        return NULL;
    my_printf("NULL <- ");
    while (list != NULL) {
        my_printf("%d", list->nb);
        my_printf(" <-> ");
        list = list->next;
    }
    my_printf("NULL\n");
}