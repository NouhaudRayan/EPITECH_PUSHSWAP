/*
** EPITECH PROJECT, 2020
** FUNCTION
** File description:
** FUNCTION
*/

#ifndef FUNCTION
#define FUNCTION

#include "my.h"
#include "structure_double.h"

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct {
    d_liste *list_a;
    d_liste *list_b;
    char *result;
    int boolean;
}storage;

void information(void);

d_liste *create_chain(char **, int, storage *);

int get_int(d_liste *, int);

d_liste *swap_two_first(d_liste *list, char letter);

void s_c(storage *);

void to_list_a(storage *chain);

void to_list_b(storage *chain);

d_liste *swap_first_to_end(d_liste *list, char letters);

void r_r(storage *);

d_liste *swap_end_to_first(d_liste *list, char letters);

void r_r_r(storage *);

int get_size_double_list(d_liste *);

void my_algo_1(storage *, int, int);

void my_algo_2(storage *, int);

void my_two_sort(storage *);

int affichage(storage *, char, char, int);

int menu(storage *);

int sorted(storage *);

#endif /* !FUNCTION */