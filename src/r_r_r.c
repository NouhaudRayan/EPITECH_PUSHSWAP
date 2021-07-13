/*
** EPITECH PROJECT, 2020
** r_r_r action
** File description:
** sous fonction
*/

#include "../include/function.h"

void r_r_r(storage *chain)
{
    if (chain->list_b != NULL) {
        chain->list_a = swap_end_to_first(chain->list_a, 'a');
        chain->list_b = swap_end_to_first(chain->list_a, 'b');
    } else
        chain->list_a = swap_end_to_first(chain->list_a, 'a');
}