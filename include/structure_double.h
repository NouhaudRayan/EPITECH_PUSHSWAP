/*
** EPITECH PROJECT, 2020
** STRUCT_DOUBLE
** File description:
** structure_double
*/

#ifndef STRUCT_DOUBLE
#define STRUCT_DOUBLE
#include <stdio.h>
#include <stdlib.h>

typedef struct d_liste d_liste;
struct d_liste {
    int nb;
    d_liste *next;
    d_liste *prec;
};

d_liste *initialisation_int(int);

void *display(d_liste *);

d_liste *insertion_pos(d_liste *, int, int);

d_liste *suppresion_pos(d_liste *, int);

#endif /* !STRUCT_DOUBLE */