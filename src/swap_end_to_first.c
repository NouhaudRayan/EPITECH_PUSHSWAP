/*
** EPITECH PROJECT, 2020
** r_r_a action
** File description:
** sous fonction
*/

#include "../include/function.h"

d_liste *swap_end_to_first(d_liste *list, char letter)
{
    int size = get_size_double_list(list);
    int value = get_int(list, size - 1);

    list = insertion_pos(list, value, 0);
    list = suppresion_pos(list, size);
    my_printf("rr%c ", letter);
    return (list);
}