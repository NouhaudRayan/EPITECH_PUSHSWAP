/*
** EPITECH PROJECT, 2020
** s_c action
** File description:
** sous fonctio
*/

#include "../include/function.h"

void s_c(storage *chain)
{
    chain->list_a = swap_two_first(chain->list_a, 'a');
    chain->list_b = swap_two_first(chain->list_b, 'b');
}