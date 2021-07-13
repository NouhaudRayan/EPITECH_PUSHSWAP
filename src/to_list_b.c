/*
** EPITECH PROJECT, 2020
** p_b action
** File description:
** sous fonction
*/

#include "../include/function.h"

void to_list_b(storage *chain)
{
    int value;

    if (chain->list_a != NULL) {
        value = get_int(chain->list_a, 0);
        if (chain->boolean == 0) {
            chain->list_a = suppresion_pos(chain->list_a, 0);
            chain->list_b = malloc(sizeof(d_liste));
            chain->list_b = initialisation_int(value);
            chain->boolean++;
        } else{
            chain->list_a = suppresion_pos(chain->list_a, 0);
            chain->list_b = insertion_pos(chain->list_b, value, 0);
        }
        my_printf("pb ");
    }
}