/*
** EPITECH PROJECT, 2022
** create int tab
** File description:
** arthemis lib
*/

#include <stdlib.h>
#include "../include/my.h"

int **a_create_int_tab(int size_x, int size_y, int nbr)
{
    int **tab = malloc(sizeof(int *) * size_y);

    for (int i = 0; i < size_y; i++) {
        tab[i] = malloc(sizeof(int) * size_x);
        for (int j = 0; j < size_x; j++)
            tab[i][j] = nbr;
    }
    return tab;
}
