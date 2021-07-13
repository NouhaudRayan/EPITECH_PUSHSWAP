/*
** EPITECH PROJECT, 2020
** s_b action
** File description:
** sous fonction
*/

#include "../include/function.h"

d_liste *swap_two_first(d_liste *list, char letter)
{
    int value1 = 0;
    int value2 = 0;

    if (list != NULL) {
        value1 = get_int(list, 0);
        value2 = get_int(list, 1);
        list = suppresion_pos(list, 0);
        list = insertion_pos(list, value2, 0);
        suppresion_pos(list, 1);
        insertion_pos(list, value1 , 1);
        my_printf("s%c ", letter);
    }
    return (list);
}