/*
** EPITECH PROJECT, 2022
** linked list
** File description:
** arthemis lib
*/

#include "../../include/my.h"
#include <stddef.h>
#include <stdlib.h>

void a_display_list(a_list *list, int base)
{
    maillon *current = malloc(sizeof(maillon));

    current = list->first;
    for (int i = 0; i < list->size; i++) {
        if (current) {
            a_putnbr(current->value, base);
            current = current->next;
        }
    }
}
