/*
** EPITECH PROJECT, 2022
** linked list
** File description:
** arthemis lib
*/

#include "../../include/my.h"
#include <stddef.h>
#include <stdlib.h>

void a_list_append(a_list *list, int value)
{
    maillon *new = malloc(sizeof(maillon));
    new->value = value;
    new->prev = list->last;
    new->next = NULL;
    if (!list->first)
        list->first = new;
    if (list->size == 1)
        list->first->next = new;
    if (list->last) {
        list->last->next = new;
    }
    list->last = new;
    list->size++;
}

int a_list_index(a_list *list, int index)
{
    maillon *current = malloc(sizeof(maillon));

    current = list->first;
    if (index < 0) {
        a_putstr("\033[0;31mIndex is bellow zero.\033[0;0m\n",2);
        return 0;
    }
    if (index >= list->size) {
        a_putstr("\033[0;31mList index out of range.\033[0;0m\n",2);
        return 0;
    }
    for (int i = 0; i < index; i++) {
        if (current) {
            current = current->next;
        }
    }
    if (current)
        return current->value;
    return 0;
}
