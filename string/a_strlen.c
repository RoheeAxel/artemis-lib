/*
** EPITECH PROJECT, 2022
** strlen
** File description:
** arthemis lib
*/

#include <stddef.h>

int a_strlen(const char *str)
{
    int len = 0;

    for (len = 0; str[len]; len++);
    return len;
}
