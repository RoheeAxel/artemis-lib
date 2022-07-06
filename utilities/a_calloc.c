/*
** EPITECH PROJECT, 2022
** a_calloc
** File description:
** arthemis lib
*/

#include <unistd.h>
#include <stdlib.h>
#include "../include/my.h"

static void *fill_mem(void *dest, size_t len)
{
    unsigned char *ptr = dest;

    while (len-- > 0)
        *ptr++ = 0;
    return dest;
}

void *a_calloc(unsigned int type_size, unsigned int size)
{
    void *allocate_space = malloc(type_size * size);

    if (allocate_space)
        allocate_space = fill_mem(allocate_space, size);
    return allocate_space;
}
