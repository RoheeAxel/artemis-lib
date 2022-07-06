/*
** EPITECH PROJECT, 2022
** a_realloc
** File description:
** arthemis lib
*/

#include <unistd.h>
#include <stdlib.h>
#include "../include/my.h"

void *a_realloc(void *ptr, int size, int old_size)
{
    void *ret;

    if (!ptr)
        return NULL;
    if (size == 0) {
        free(ptr);
        return NULL;
    } if (!(ret = a_calloc(1, size)))
        return NULL;
    ret = a_memcpy(ret, ptr, old_size);
    return ret;
}
