/*
** EPITECH PROJECT, 2022
** linked list
** File description:
** arthemis lib
*/

#include "../../include/my.h"
#include <stddef.h>
#include <stdlib.h>

a_list *a_list_create(void)
{
    a_list *list = malloc(sizeof(a_list));
    list->size = 0;
    list->last = NULL;
    list->first = NULL;
    return list;
}
