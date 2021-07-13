/*
** EPITECH PROJECT, 2020
** main of the project
** File description:
** sous fonction
*/

#include "./include/function.h"

int main(int ac, char **av)
{
    storage chain;

    chain.boolean = 0;
    if (ac == 1)
        return (84);
    if (av[1][0] == '-' && av[1][1] == 'h') {
        information();
        return (84);
    }
    if (ac == 2) {
        my_printf("\n");
        return (0);
    } else if (ac < 2) {
        my_printf("Please add arguments\n");
        return (84);
    } else
        create_chain(av, ac, &chain);
    menu(&chain);
    free(chain.list_a);
    return (0);
}