/*
** EPITECH PROJECT, 2020
** get size of double liste chained
** File description:
** sous fonction
*/

#include "../include/function.h"

int get_size_double_list(d_liste *list)
{
    int count = 0;

    while (list->next != NULL) {
        count++;
        list = list->next;
    }
    count++;
    return (count);
}