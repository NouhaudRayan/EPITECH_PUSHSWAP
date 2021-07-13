/*
** EPITECH PROJECT, 2020
** sorted
** File description:
** sous fonction
*/

#include "../include/function.h"

int sorted(storage *chain)
{
    while (chain->list_a->next != NULL) {
        if (chain->list_a->nb > chain->list_a->next->nb)
            return (0);
        chain->list_a = chain->list_a->next;
    }
    return (1);
}
