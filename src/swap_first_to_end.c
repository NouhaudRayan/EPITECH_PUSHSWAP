/*
** EPITECH PROJECT, 2020
** r_a action
** File description:
** sous fonction
*/

#include "../include/function.h"

d_liste *swap_first_to_end(d_liste *list, char letter)
{
    int size = get_size_double_list(list);
    int value2 = get_int(list, size - 1);
    int value1 = get_int(list, 0);

    list = suppresion_pos(list, 0);
    insertion_pos(list, value1, size - 1);
    my_printf("r%c ", letter);
    return (list);
}