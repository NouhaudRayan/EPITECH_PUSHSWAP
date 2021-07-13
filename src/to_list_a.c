/*
** EPITECH PROJECT, 2020
** p_a action
** File description:
** sous fonction
*/

#include "../include/function.h"

void to_list_a(storage *chain)
{
    int value;
    int size = get_size_double_list(chain->list_b);

    if (size > 1) {
        value = get_int(chain->list_b, 0);
        chain->list_b = suppresion_pos(chain->list_b, 0);
        chain->list_a = insertion_pos(chain->list_a, value, 0);
        my_printf("pa ");
    }
}