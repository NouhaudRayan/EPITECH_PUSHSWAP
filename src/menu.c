/*
** EPITECH PROJECT, 2020
** menu
** File description:
** sous fonction
*/

#include "../include/function.h"

int menu(storage *chain)
{
    int size = get_size_double_list(chain->list_a);
    int v1 = 0;
    int v2 = 0;

    if (sorted(chain) == 1) {
        my_printf("\n");
        return (0);
    }
    if (size > 2) {
        my_algo_1(chain, v1, v2);
    } else
        my_two_sort(chain);
    return (0);
}