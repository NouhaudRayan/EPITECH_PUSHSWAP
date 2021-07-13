/*
** EPITECH PROJECT, 2020
** algo
** File description:
** sous fonction
*/

#include "../include/function.h"

void my_algo_2(storage *chain, int i)
{
    int size = get_size_double_list(chain->list_b);
    int v1 = 0;
    int v2 = 0;

    v1 = get_int(chain->list_a, 0);
    v2 = get_int(chain->list_a, 1);
    if (v1 > v2) {
        chain->list_a = swap_two_first(chain->list_a, 'a');
    }
    size = get_size_double_list(chain->list_b);
    while (size > 1) {
        to_list_a(chain);
        size = get_size_double_list(chain->list_b);
    }
    my_printf("pa\n");
}

void my_two_sort(storage *chain)
{
    int v1 = get_int(chain->list_a, 0);
    int v2 = get_int(chain->list_a, 1);
    int i = 0;

    if (v1 > v2)
        swap_two_first(chain->list_a, 'a');
    my_printf("\n");
}

void my_algo_1(storage *chain, int v1, int v2)
{
    int i = 0;

    for (int size = get_size_double_list(chain->list_a); size > 2;) {
        for (int x = 0; x < size; x++) {
            v1 = get_int(chain->list_a, 0);
            v2 = get_int(chain->list_a, 1);
            if (v1 <= v2) {
                chain->list_a = swap_two_first(chain->list_a, 'a');
                chain->list_a = swap_first_to_end(chain->list_a, 'a');
            } else if (v1 > v2) {
                chain->list_a = swap_first_to_end(chain->list_a, 'a');
            }
        }
        to_list_b(chain);
        size = get_size_double_list(chain->list_a);
    }
    my_algo_2(chain, i);
}