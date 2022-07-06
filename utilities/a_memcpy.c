/*
** EPITECH PROJECT, 2022
** a_memcpy
** File description:
** arthemis lib
*/

#include <unistd.h>
#include <stdlib.h>
#include "../include/my.h"

void *a_memcpy(void *dest, const void *src, int n)
{
    void *tmp = (void *)src;

    for (int i = 0; i < n && tmp; i++, tmp++) {
        ((char *) dest)[i] = ((char *) src)[i];
    }
    return dest;
}
