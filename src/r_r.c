/*
** EPITECH PROJECT, 2020
** r_r action
** File description:
** sous fonction
*/

#include "../include/function.h"

void r_r(storage *chain)
{
    chain->list_a = swap_first_to_end(chain->list_a, 'a');
    chain->list_b = swap_first_to_end(chain->list_b, 'b');
}