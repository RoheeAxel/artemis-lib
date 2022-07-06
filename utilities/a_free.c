/*
** EPITECH PROJECT, 2022
** a_free
** File description:
** arthemis lib
*/

#include <unistd.h>
#include <stdlib.h>
#include "../include/my.h"

void a_free(void *ptr)
{
    if (ptr)
        free(ptr);
}
