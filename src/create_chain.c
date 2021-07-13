/*
** EPITECH PROJECT, 2020
** create double chain of number
** File description:
** sous fonction
*/

#include "../include/function.h"

d_liste *create_chain(char **av, int ac, storage *chain)
{
    int x = 0;

    chain->list_a = malloc(sizeof(d_liste));
    for (int i = 1; av[i] != NULL; i++, x++)
    {
        for (int y = 0; av[i][y] != '\0'; y++)
            if (av[i][y] >= 'a' && av[i][y] <= 'z')
                exit(84);
        if (x == 0)
            chain->list_a = initialisation_int(my_getnbr(av[i]));
        else
            insertion_pos(chain->list_a, my_getnbr(av[i]), x);
    }
}