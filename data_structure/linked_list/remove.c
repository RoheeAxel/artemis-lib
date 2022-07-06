/*
** EPITECH PROJECT, 2022
** linked list
** File description:
** arthemis lib
*/

#include "../../include/my.h"
#include <stddef.h>
#include <stdlib.h>

int a_list_pop(a_list *list)
{
    maillon *last = malloc(sizeof(maillon));
    last = NULL;

    if (list->last) {
        last = list->last;
        if (list->last->prev) {
            list->last = list->last->prev;
            list->last->next = NULL;
            list->size--;
        }
    }
    if (last)
        return last->value;
    return 0;
}
